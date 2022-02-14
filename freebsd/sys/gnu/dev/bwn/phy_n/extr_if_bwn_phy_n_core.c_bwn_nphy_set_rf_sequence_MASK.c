
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct bwn_phy_n {scalar_t__ hang_avoid; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int) ;
 int FUNC_2 (struct bwn_mac*,int ,int) ;
 int FUNC_3 (struct bwn_mac*,int ,int,int*) ;

__attribute__((used)) static void FUNC_4(struct bwn_mac *VAR_0, uint8_t VAR_1,
     uint8_t *VAR_2, uint8_t *VAR_3, uint8_t VAR_4)
{
 struct bwn_phy_n *VAR_5 = VAR_0->mac_phy.phy_n;
 uint8_t VAR_6;
 uint8_t VAR_7 = (VAR_0->mac_phy.rev >= 3) ? 0x1F : 0x0F;
 uint16_t VAR_8 = VAR_1 << 4;
 uint16_t VAR_9 = VAR_8 + 0x80;

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_0, 1);

 FUNC_3(VAR_0, FUNC_0(7, VAR_8), VAR_4, VAR_2);
 FUNC_3(VAR_0, FUNC_0(7, VAR_9), VAR_4, VAR_3);

 for (VAR_6 = VAR_4; VAR_6 < 16; VAR_6++) {
  FUNC_2(VAR_0, FUNC_0(7, VAR_8 + VAR_6), VAR_7);
  FUNC_2(VAR_0, FUNC_0(7, VAR_9 + VAR_6), 1);
 }

 if (VAR_5->hang_avoid)
  FUNC_1(VAR_0, 0);
}
