
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ rl_rx_buf_paddr; } ;
struct rl_softc {int rl_stat_callout; int rl_cfg1; int rl_flags; int rl_txthresh; TYPE_1__ rl_cdata; struct ifnet* rl_ifp; int rl_twister; scalar_t__ rl_twister_enable; int rl_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;
typedef int eaddr ;


 int VAR_0 ;
 int FUNC_0 (struct rl_softc*,int ,int) ;
 int FUNC_1 (struct rl_softc*,int ,int ) ;
 int FUNC_2 (struct rl_softc*,int ,scalar_t__) ;
 int FUNC_3 (struct rl_softc*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ifnet*) ;
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
 int FUNC_5 (struct rl_softc*) ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int ,int ,struct rl_softc*) ;
 struct mii_data* FUNC_9 (int ) ;
 int VAR_26 ;
 int FUNC_10 (struct mii_data*) ;
 int FUNC_11 (struct rl_softc*) ;
 int FUNC_12 (struct rl_softc*) ;
 int FUNC_13 (struct rl_softc*) ;
 int FUNC_14 (struct rl_softc*) ;
 int FUNC_15 (struct rl_softc*) ;
 int VAR_27 ;

__attribute__((used)) static void
FUNC_16(struct rl_softc *VAR_28)
{
 struct ifnet *VAR_29 = VAR_28->rl_ifp;
 struct mii_data *VAR_30;
 uint32_t VAR_31[2];

 FUNC_5(VAR_28);

 VAR_30 = FUNC_9(VAR_28->rl_miibus);

 if ((VAR_29->if_drv_flags & VAR_4) != 0)
  return;




 FUNC_15(VAR_28);

 FUNC_13(VAR_28);
 if (VAR_28->rl_twister_enable) {






  VAR_28->rl_twister = VAR_0;
 }






 FUNC_0(VAR_28, VAR_10, VAR_12);
 FUNC_7(VAR_31, sizeof(VAR_31));
 FUNC_6(FUNC_4(VAR_28->rl_ifp), VAR_31, VAR_1);
 FUNC_3(VAR_28, VAR_14, VAR_31[0]);
 FUNC_3(VAR_28, VAR_15, VAR_31[1]);
 FUNC_0(VAR_28, VAR_10, VAR_11);


 FUNC_2(VAR_28, VAR_19, VAR_28->rl_cdata.rl_rx_buf_paddr +
     VAR_22);

 FUNC_12(VAR_28);

 FUNC_11(VAR_28);




 FUNC_0(VAR_28, VAR_9, VAR_8|VAR_7);




 FUNC_2(VAR_28, VAR_23, VAR_24);
 FUNC_2(VAR_28, VAR_20, VAR_21);


 FUNC_14(VAR_28);
 FUNC_1(VAR_28, VAR_16, VAR_17);


 VAR_28->rl_txthresh = VAR_25;


 FUNC_2(VAR_28, VAR_18, 0);


 FUNC_0(VAR_28, VAR_9, VAR_8|VAR_7);

 VAR_28->rl_flags &= ~VAR_13;
 FUNC_10(VAR_30);

 FUNC_0(VAR_28, VAR_28->rl_cfg1, VAR_5|VAR_6);

 VAR_29->if_drv_flags |= VAR_4;
 VAR_29->if_drv_flags &= ~VAR_3;

 FUNC_8(&VAR_28->rl_stat_callout, VAR_26, VAR_27, VAR_28);
}
