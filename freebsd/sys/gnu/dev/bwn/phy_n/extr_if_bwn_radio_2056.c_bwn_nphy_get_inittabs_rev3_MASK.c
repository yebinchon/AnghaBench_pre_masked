
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bwn_phy {int rev; int rf_rev; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;
struct b2056_inittabs_pts {int dummy; } ;


 struct b2056_inittabs_pts const VAR_0 ;
 struct b2056_inittabs_pts const VAR_1 ;
 struct b2056_inittabs_pts const VAR_2 ;
 struct b2056_inittabs_pts const VAR_3 ;
 struct b2056_inittabs_pts const VAR_4 ;
 struct b2056_inittabs_pts const VAR_5 ;
 struct b2056_inittabs_pts const VAR_6 ;

__attribute__((used)) static const struct b2056_inittabs_pts
*FUNC_0(struct bwn_mac *VAR_7)
{
 struct bwn_phy *VAR_8 = &VAR_7->mac_phy;

 switch (VAR_8->rev) {
 case 3:
  return &VAR_0;
 case 4:
  return &VAR_1;
 default:
  switch (VAR_8->rf_rev) {
  case 5:
   return &VAR_3;
  case 6:
   return &VAR_4;
  case 7:
  case 9:
   return &VAR_5;
  case 8:
   return &VAR_6;
  case 11:
   return &VAR_2;
  }
 }

 return ((void*)0);
}
