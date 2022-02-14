
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct rtwn_softc {int dummy; } ;
struct ieee80211_channel {int ic_flags; } ;


 scalar_t__ FUNC_0 (struct ieee80211_channel*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ieee80211_channel*) ;

__attribute__((used)) static int
FUNC_3(struct rtwn_softc *VAR_0, struct ieee80211_channel *VAR_1)
{
 uint8_t VAR_2;
 int VAR_3;

 VAR_2 = FUNC_2(VAR_1);
 if (FUNC_0(VAR_1)) {
  if (VAR_2 <= 2) VAR_3 = 0;
  else if (VAR_2 <= 5) VAR_3 = 1;
  else if (VAR_2 <= 8) VAR_3 = 2;
  else if (VAR_2 <= 11) VAR_3 = 3;
  else if (VAR_2 <= 13) VAR_3 = 4;
  else if (VAR_2 <= 14) VAR_3 = 5;
  else {
   FUNC_1(0, ("wrong 2GHz channel %d!\n", VAR_2));
   return (-1);
  }
 } else {
  FUNC_1(0, ("wrong channel band (flags %08X)\n", VAR_1->ic_flags));
  return (-1);
 }

 return (VAR_3);
}
