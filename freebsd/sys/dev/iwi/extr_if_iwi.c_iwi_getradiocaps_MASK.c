
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int dummy; } ;
struct ieee80211_channel {int dummy; } ;
typedef int bands ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ieee80211_channel*,int,int*,int ,int ,int *,int ) ;
 int FUNC_1 (struct ieee80211_channel*,int,int*,int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ieee80211com*,int *,int) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct ieee80211com *VAR_7,
    int VAR_8, int *VAR_9, struct ieee80211_channel VAR_10[])
{
 uint8_t VAR_11[VAR_3];

 FUNC_3(VAR_7, VAR_11, sizeof(VAR_11));
 *VAR_9 = 0;
 if (FUNC_2(VAR_11, VAR_1) || FUNC_2(VAR_11, VAR_2))
  FUNC_1(VAR_10, VAR_8, VAR_9,
      VAR_11, 0);
 if (FUNC_2(VAR_11, VAR_0)) {
  FUNC_0(VAR_10, VAR_8, VAR_9,
      VAR_4, FUNC_4(VAR_4),
      VAR_11, 0);
  FUNC_0(VAR_10, VAR_8, VAR_9,
      VAR_5, FUNC_4(VAR_5),
      VAR_11, 0);
  FUNC_0(VAR_10, VAR_8, VAR_9,
      VAR_6, FUNC_4(VAR_6),
      VAR_11, 0);
 }
}
