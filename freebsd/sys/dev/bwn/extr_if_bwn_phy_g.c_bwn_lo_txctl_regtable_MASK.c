
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {scalar_t__ type; int rf_rev; int rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static uint16_t
FUNC_0(struct bwn_mac *VAR_1,
    uint16_t *VAR_2, uint16_t *VAR_3)
{
 struct bwn_phy *VAR_4 = &VAR_1->mac_phy;
 uint16_t VAR_5, VAR_6, VAR_7;

 if (VAR_4->type == VAR_0) {
  VAR_6 = 0x30;
  if (VAR_4->rf_rev <= 5) {
   VAR_5 = 0x43;
   VAR_7 = 0;
  } else {
   VAR_5 = 0x52;
   VAR_7 = 5;
  }
 } else {
  if (VAR_4->rev >= 2 && VAR_4->rf_rev == 8) {
   VAR_5 = 0x43;
   VAR_6 = 0x10;
   VAR_7 = 2;
  } else {
   VAR_5 = 0x52;
   VAR_6 = 0x30;
   VAR_7 = 5;
  }
 }
 if (VAR_2)
  *VAR_2 = VAR_6;
 if (VAR_3)
  *VAR_3 = VAR_7;

 return (VAR_5);
}
