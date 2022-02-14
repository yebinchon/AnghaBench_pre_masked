
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct he_capabilities {int he_supported; int ppet; int * mcs; int * mac_cap; int * phy_cap; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;
typedef enum ieee80211_op_mode { ____Placeholder_ieee80211_op_mode } ieee80211_op_mode ;






 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct nlattr*) ;
 int FUNC_1 (struct nlattr*) ;
 size_t FUNC_2 (struct nlattr*) ;
 int FUNC_3 (int *,int ,size_t) ;

__attribute__((used)) static void FUNC_4(struct he_capabilities *VAR_8,
     enum ieee80211_op_mode VAR_9,
     struct nlattr **VAR_10, struct nlattr **VAR_11)
{
 enum nl80211_iftype VAR_12;
 size_t VAR_13;

 switch (VAR_9) {
 case 129:
  VAR_12 = VAR_7;
  break;
 case 130:
  VAR_12 = VAR_4;
  break;
 case 131:
  VAR_12 = VAR_5;
  break;
 case 128:
  VAR_12 = VAR_6;
  break;
 default:
  return;
 }

 if (!FUNC_1(VAR_11[VAR_12]))
  return;

 VAR_8->he_supported = 1;

 if (VAR_10[VAR_2]) {
  VAR_13 = FUNC_2(VAR_10[VAR_2]);

  if (VAR_13 > sizeof(VAR_8->phy_cap))
   VAR_13 = sizeof(VAR_8->phy_cap);
  FUNC_3(VAR_8->phy_cap,
     FUNC_0(VAR_10[VAR_2]),
     VAR_13);
 }

 if (VAR_10[VAR_0]) {
  VAR_13 = FUNC_2(VAR_10[VAR_0]);

  if (VAR_13 > sizeof(VAR_8->mac_cap))
   VAR_13 = sizeof(VAR_8->mac_cap);
  FUNC_3(VAR_8->mac_cap,
     FUNC_0(VAR_10[VAR_0]),
     VAR_13);
 }

 if (VAR_10[VAR_1]) {
  VAR_13 = FUNC_2(VAR_10[VAR_1]);

  if (VAR_13 > sizeof(VAR_8->mcs))
   VAR_13 = sizeof(VAR_8->mcs);
  FUNC_3(VAR_8->mcs,
     FUNC_0(VAR_10[VAR_1]),
     VAR_13);
 }

 if (VAR_10[VAR_3]) {
  VAR_13 = FUNC_2(VAR_10[VAR_3]);

  if (VAR_13 > sizeof(VAR_8->ppet))
   VAR_13 = sizeof(VAR_8->ppet);
  FUNC_3(&VAR_8->ppet,
     FUNC_0(VAR_10[VAR_3]),
     VAR_13);
 }
}
