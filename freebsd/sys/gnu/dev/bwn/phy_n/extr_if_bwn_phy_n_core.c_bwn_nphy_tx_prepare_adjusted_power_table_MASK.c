
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bwn_phy_n {int * tx_power_offset; int * adj_pwr_tbl; } ;
struct TYPE_2__ {int rev; struct bwn_phy_n* phy_n; } ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*) ;

__attribute__((used)) static void FUNC_1(struct bwn_mac *VAR_0)
{
 struct bwn_phy_n *VAR_1 = VAR_0->mac_phy.phy_n;

 uint8_t VAR_2, VAR_3;
 uint8_t VAR_4, VAR_5;
 for (VAR_4 = 0; VAR_4 < 4; VAR_4++)
  VAR_1->adj_pwr_tbl[VAR_4] = VAR_1->tx_power_offset[VAR_4];

 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_3 = 0;
  switch (VAR_5) {
  case 0:
   if (FUNC_0(VAR_0) && VAR_0->mac_phy.rev >= 5) {
    VAR_2 = 68;
   } else {
    VAR_3 = 1;
    VAR_2 = FUNC_0(VAR_0) ? 52 : 4;
   }
   break;
  case 1:
   VAR_2 = FUNC_0(VAR_0) ? 76 : 28;
   break;
  case 2:
   VAR_2 = FUNC_0(VAR_0) ? 84 : 36;
   break;
  case 3:
   VAR_2 = FUNC_0(VAR_0) ? 92 : 44;
   break;
  }

  for (VAR_4 = 0; VAR_4 < 20; VAR_4++) {
   VAR_1->adj_pwr_tbl[4 + 4 * VAR_4 + VAR_5] =
    VAR_1->tx_power_offset[VAR_2];
   if (VAR_4 == 0)
    VAR_2 += VAR_3;
   if (VAR_4 == 14)
    VAR_2 += 1 - VAR_3;
   if (VAR_4 == 3 || VAR_4 == 4 || VAR_4 == 7 || VAR_4 == 8 || VAR_4 == 11 ||
       VAR_4 == 13)
    VAR_2 += 1;
  }
 }
}
