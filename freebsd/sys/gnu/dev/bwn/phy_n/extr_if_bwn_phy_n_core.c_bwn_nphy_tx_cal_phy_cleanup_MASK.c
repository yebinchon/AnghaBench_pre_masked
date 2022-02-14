
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int rev; TYPE_1__* phy_n; } ;
struct bwn_mac {TYPE_2__ mac_phy; } ;
struct TYPE_3__ {int * tx_rx_cal_phy_saveregs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (struct bwn_mac*,int ,int,int ) ;
 int FUNC_2 (struct bwn_mac*,int ,int ) ;
 int FUNC_3 (struct bwn_mac*) ;
 int FUNC_4 (struct bwn_mac*,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct bwn_mac *VAR_9)
{
 uint16_t *VAR_10 = VAR_9->mac_phy.phy_n->tx_rx_cal_phy_saveregs;

 if (VAR_9->mac_phy.rev >= 3) {
  FUNC_2(VAR_9, VAR_0, VAR_10[0]);
  FUNC_2(VAR_9, VAR_1, VAR_10[1]);
  FUNC_2(VAR_9, VAR_3, VAR_10[2]);
  FUNC_2(VAR_9, VAR_2, VAR_10[3]);
  FUNC_2(VAR_9, VAR_4, VAR_10[4]);
  FUNC_4(VAR_9, FUNC_0(8, 3), VAR_10[5]);
  FUNC_4(VAR_9, FUNC_0(8, 19), VAR_10[6]);
  FUNC_2(VAR_9, VAR_7, VAR_10[7]);
  FUNC_2(VAR_9, VAR_8, VAR_10[8]);
  FUNC_2(VAR_9, VAR_5, VAR_10[9]);
  FUNC_2(VAR_9, VAR_6, VAR_10[10]);
  FUNC_3(VAR_9);
 } else {
  FUNC_1(VAR_9, VAR_0, 0x0FFF, VAR_10[0]);
  FUNC_1(VAR_9, VAR_1, 0x0FFF, VAR_10[1]);
  FUNC_2(VAR_9, VAR_2, VAR_10[2]);
  FUNC_4(VAR_9, FUNC_0(8, 2), VAR_10[3]);
  FUNC_4(VAR_9, FUNC_0(8, 18), VAR_10[4]);
  FUNC_2(VAR_9, VAR_7, VAR_10[5]);
  FUNC_2(VAR_9, VAR_8, VAR_10[6]);
 }
}
