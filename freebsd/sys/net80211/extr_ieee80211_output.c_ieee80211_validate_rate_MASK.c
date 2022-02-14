
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ieee80211com {int ic_htcaps; int ic_txstream; int ic_rt; } ;
struct ieee80211_node {struct ieee80211com* ni_ic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int
FUNC_3(struct ieee80211_node *VAR_4, uint8_t VAR_5)
{
 struct ieee80211com *VAR_6 = VAR_4->ni_ic;

 if (FUNC_0(VAR_5)) {
  if ((VAR_6->ic_htcaps & VAR_1) == 0)
   return (VAR_0);

  VAR_5 = FUNC_1(VAR_5);
  if (VAR_5 <= 31) {
   if (VAR_5 > VAR_6->ic_txstream * 8 - 1)
    return (VAR_0);

   return (0);
  }

  if (VAR_5 == 32) {
   if ((VAR_6->ic_htcaps & VAR_2) == 0)
    return (VAR_0);

   return (0);
  }

  if ((VAR_6->ic_htcaps & VAR_3) == 0)
   return (VAR_0);

  switch (VAR_6->ic_txstream) {
  case 0:
  case 1:
   return (VAR_0);
  case 2:
   if (VAR_5 > 38)
    return (VAR_0);

   return (0);
  case 3:
   if (VAR_5 > 52)
    return (VAR_0);

   return (0);
  case 4:
  default:
   if (VAR_5 > 76)
    return (VAR_0);

   return (0);
  }
 }

 if (!FUNC_2(VAR_6->ic_rt, VAR_5))
  return (VAR_0);

 return (0);
}
