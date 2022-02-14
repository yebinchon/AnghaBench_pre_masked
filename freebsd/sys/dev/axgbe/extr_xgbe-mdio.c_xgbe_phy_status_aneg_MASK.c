
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ autoneg; int tx_pause; int rx_pause; int speed; int lp_advertising; scalar_t__ pause_autoneg; } ;
struct xgbe_prv_data {int speed_set; TYPE_1__ phy; scalar_t__ parallel_detect; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;


 unsigned int FUNC_0 (struct xgbe_prv_data*,int ,scalar_t__) ;
 void FUNC_1 (struct xgbe_prv_data*) ;
 int FUNC_2 (struct xgbe_prv_data*,int ) ;

__attribute__((used)) static void FUNC_3(struct xgbe_prv_data *VAR_17)
{
 unsigned int VAR_18, VAR_19;

 VAR_17->phy.lp_advertising = 0;

 if ((VAR_17->phy.autoneg != VAR_7) || VAR_17->parallel_detect)
  return FUNC_1(VAR_17);

 VAR_17->phy.lp_advertising |= VAR_4;
 VAR_17->phy.lp_advertising |= VAR_5;


 VAR_18 = FUNC_0(VAR_17, VAR_10, VAR_8);
 VAR_19 = FUNC_0(VAR_17, VAR_10, VAR_9);
 if (VAR_19 & 0x400)
  VAR_17->phy.lp_advertising |= VAR_6;
 if (VAR_19 & 0x800)
  VAR_17->phy.lp_advertising |= VAR_3;

 if (VAR_17->phy.pause_autoneg) {

  VAR_17->phy.tx_pause = 0;
  VAR_17->phy.rx_pause = 0;

  if (VAR_18 & VAR_19 & 0x400) {
   VAR_17->phy.tx_pause = 1;
   VAR_17->phy.rx_pause = 1;
  } else if (VAR_18 & VAR_19 & 0x800) {
   if (VAR_18 & 0x400)
    VAR_17->phy.rx_pause = 1;
   else if (VAR_19 & 0x400)
    VAR_17->phy.tx_pause = 1;
  }
 }


 VAR_18 = FUNC_0(VAR_17, VAR_10, VAR_8 + 1);
 VAR_19 = FUNC_0(VAR_17, VAR_10, VAR_9 + 1);
 if (VAR_19 & 0x80)
  VAR_17->phy.lp_advertising |= VAR_0;
 if (VAR_19 & 0x20) {
  switch (VAR_17->speed_set) {
  case 129:
   VAR_17->phy.lp_advertising |= VAR_1;
   break;
  case 128:
   VAR_17->phy.lp_advertising |= VAR_2;
   break;
  }
 }

 VAR_18 &= VAR_19;
 if (VAR_18 & 0x80) {
  VAR_17->phy.speed = VAR_12;
  FUNC_2(VAR_17, VAR_15);
 } else if (VAR_18 & 0x20) {
  switch (VAR_17->speed_set) {
  case 129:
   VAR_17->phy.speed = VAR_11;
   break;

  case 128:
   VAR_17->phy.speed = VAR_13;
   break;
  }

  FUNC_2(VAR_17, VAR_16);
 } else {
  VAR_17->phy.speed = VAR_14;
 }


 VAR_18 = FUNC_0(VAR_17, VAR_10, VAR_8 + 2);
 VAR_19 = FUNC_0(VAR_17, VAR_10, VAR_9 + 2);
}
