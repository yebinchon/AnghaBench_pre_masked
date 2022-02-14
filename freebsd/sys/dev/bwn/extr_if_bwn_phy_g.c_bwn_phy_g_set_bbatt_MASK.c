
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_phy {int analog; } ;
struct bwn_mac {struct bwn_phy mac_phy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bwn_mac*,int ,int,int) ;
 int FUNC_1 (struct bwn_mac*,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bwn_mac *VAR_2,
    uint16_t VAR_3)
{
 struct bwn_phy *VAR_4 = &VAR_2->mac_phy;

 if (VAR_4->analog == 0) {
  FUNC_2(VAR_2, VAR_0,
      (FUNC_1(VAR_2, VAR_0) & 0xfff0) | VAR_3);
  return;
 }
 if (VAR_4->analog > 1) {
  FUNC_0(VAR_2, VAR_1, 0xffc3, VAR_3 << 2);
  return;
 }
 FUNC_0(VAR_2, VAR_1, 0xff87, VAR_3 << 3);
}
