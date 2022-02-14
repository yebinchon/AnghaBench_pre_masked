
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int rf_ver; int rf_rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static uint16_t
FUNC_0(struct bwn_mac *VAR_2)
{
 struct bwn_phy *VAR_3 = &VAR_2->mac_phy;

 if (VAR_3->rf_ver != 0x2050)
  return (0);
 if (VAR_3->rf_rev == 1)
  return (VAR_0 | VAR_1);
 if (VAR_3->rf_rev < 6)
  return (VAR_0);
 if (VAR_3->rf_rev == 8)
  return (VAR_1);
 return (0);
}
