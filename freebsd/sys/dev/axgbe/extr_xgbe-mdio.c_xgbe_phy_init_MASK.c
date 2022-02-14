
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int supported; int advertising; scalar_t__ rx_pause; scalar_t__ tx_pause; int pause_autoneg; scalar_t__ link; int duplex; int speed; int autoneg; scalar_t__ address; } ;
struct xgbe_prv_data {int speed_set; int fec_ability; TYPE_1__ phy; scalar_t__ tx_pause; scalar_t__ rx_pause; int pause_autoneg; int mdio_mmd; int an_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;


 int FUNC_0 (struct xgbe_prv_data*,int ,int ) ;
 int FUNC_1 (int *,char*) ;

__attribute__((used)) static void FUNC_2(struct xgbe_prv_data *VAR_18)
{
 FUNC_1(&VAR_18->an_mutex, "axgbe AN lock");
 VAR_18->mdio_mmd = VAR_4;


 VAR_18->phy.supported = VAR_15;
 VAR_18->phy.supported |= VAR_17 | VAR_14;
 VAR_18->phy.supported |= VAR_16;
 VAR_18->phy.supported |= VAR_10;
 switch (VAR_18->speed_set) {
 case 129:
  VAR_18->phy.supported |= VAR_12;
  break;
 case 128:
  VAR_18->phy.supported |= VAR_13;
  break;
 }

 VAR_18->fec_ability = FUNC_0(VAR_18, VAR_5,
     VAR_6);
 VAR_18->fec_ability &= (VAR_7 |
          VAR_8);
 if (VAR_18->fec_ability & VAR_7)
  VAR_18->phy.supported |= VAR_11;

 VAR_18->phy.advertising = VAR_18->phy.supported;

 VAR_18->phy.address = 0;

 VAR_18->phy.autoneg = VAR_2;
 VAR_18->phy.speed = VAR_9;
 VAR_18->phy.duplex = VAR_3;

 VAR_18->phy.link = 0;

 VAR_18->phy.pause_autoneg = VAR_18->pause_autoneg;
 VAR_18->phy.tx_pause = VAR_18->tx_pause;
 VAR_18->phy.rx_pause = VAR_18->rx_pause;


 VAR_18->phy.advertising &= ~VAR_1;
 VAR_18->phy.advertising &= ~VAR_0;

 if (VAR_18->rx_pause) {
  VAR_18->phy.advertising |= VAR_1;
  VAR_18->phy.advertising |= VAR_0;
 }

 if (VAR_18->tx_pause)
  VAR_18->phy.advertising ^= VAR_0;
}
