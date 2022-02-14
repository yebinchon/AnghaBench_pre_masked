
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_roamparam {int rssi; int rate; } ;
struct TYPE_2__ {struct ieee80211_roamparam* params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int ,int,int) ;
 int FUNC_1 (int) ;
 int * VAR_7 ;
 TYPE_1__ VAR_8 ;

__attribute__((used)) static void
FUNC_2(int VAR_9)
{
 const struct ieee80211_roamparam *VAR_10;
 int VAR_11;

 FUNC_1(VAR_9);
 for (VAR_11 = VAR_0; VAR_11 < VAR_3; VAR_11++) {
  VAR_10 = &VAR_8.params[VAR_11];
  if (VAR_10->rssi == 0 && VAR_10->rate == 0)
   continue;
  if (VAR_11 == VAR_1 ||
      VAR_11 == VAR_2 ||
      VAR_11 == VAR_4 ||
      VAR_11 == VAR_5) {
   if (VAR_10->rssi & 1)
    FUNC_0("roam:%-7.7s rssi %2u.5dBm  MCS %2u    ",
        VAR_7[VAR_11], VAR_10->rssi/2,
        VAR_10->rate &~ VAR_6);
   else
    FUNC_0("roam:%-7.7s rssi %4udBm  MCS %2u    ",
        VAR_7[VAR_11], VAR_10->rssi/2,
        VAR_10->rate &~ VAR_6);
  } else {
   if (VAR_10->rssi & 1)
    FUNC_0("roam:%-7.7s rssi %2u.5dBm rate %2u Mb/s",
        VAR_7[VAR_11], VAR_10->rssi/2, VAR_10->rate/2);
   else
    FUNC_0("roam:%-7.7s rssi %4udBm rate %2u Mb/s",
        VAR_7[VAR_11], VAR_10->rssi/2, VAR_10->rate/2);
  }
 }
}
