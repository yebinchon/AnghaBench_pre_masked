
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ link; scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ speed; int pause_autoneg; } ;
struct TYPE_3__ {int (* config_rx_flow_control ) (struct xgbe_prv_data*) ;int (* config_tx_flow_control ) (struct xgbe_prv_data*) ;} ;
struct xgbe_prv_data {scalar_t__ tx_pause; scalar_t__ rx_pause; scalar_t__ phy_speed; scalar_t__ phy_link; TYPE_2__ phy; TYPE_1__ hw_if; int pause_autoneg; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct xgbe_prv_data*) ;
 int FUNC_1 (struct xgbe_prv_data*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_1)
{

 if (VAR_1->phy.link) {

  VAR_1->pause_autoneg = VAR_1->phy.pause_autoneg;

  if (VAR_1->tx_pause != VAR_1->phy.tx_pause) {
   VAR_1->hw_if.config_tx_flow_control(VAR_1);
   VAR_1->tx_pause = VAR_1->phy.tx_pause;
  }

  if (VAR_1->rx_pause != VAR_1->phy.rx_pause) {
   VAR_1->hw_if.config_rx_flow_control(VAR_1);
   VAR_1->rx_pause = VAR_1->phy.rx_pause;
  }


  if (VAR_1->phy_speed != VAR_1->phy.speed) {
   VAR_1->phy_speed = VAR_1->phy.speed;
  }

  if (VAR_1->phy_link != VAR_1->phy.link) {
   VAR_1->phy_link = VAR_1->phy.link;
  }
 } else if (VAR_1->phy_link) {
  VAR_1->phy_link = 0;
  VAR_1->phy_speed = VAR_0;
 }
}
