
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct bwn_nphy_rf_control_override_rev7 {scalar_t__ field; } ;
struct bwn_mac {int mac_sc; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct bwn_nphy_rf_control_override_rev7*) ;
 struct bwn_nphy_rf_control_override_rev7* VAR_0 ;
 struct bwn_nphy_rf_control_override_rev7* VAR_1 ;
 struct bwn_nphy_rf_control_override_rev7* VAR_2 ;

const struct bwn_nphy_rf_control_override_rev7 *
FUNC_2(struct bwn_mac *VAR_3, uint16_t VAR_4,
    uint8_t VAR_5)
{
 const struct bwn_nphy_rf_control_override_rev7 *VAR_6;
 uint8_t VAR_7, VAR_8;

 switch (VAR_5) {
 case 0:
  VAR_6 = VAR_0;
  VAR_7 = FUNC_1(VAR_0);
  break;
 case 1:
  VAR_6 = VAR_1;
  VAR_7 = FUNC_1(VAR_1);
  break;
 case 2:
  VAR_6 = VAR_2;
  VAR_7 = FUNC_1(VAR_2);
  break;
 default:
  FUNC_0(VAR_3->mac_sc, "Invalid override value %d\n", VAR_5);
  return ((void*)0);
 }

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6[VAR_8].field == VAR_4)
   return &VAR_6[VAR_8];
 }

 return ((void*)0);
}
