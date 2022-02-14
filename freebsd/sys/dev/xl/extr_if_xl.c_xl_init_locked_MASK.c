
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int8_t ;
struct TYPE_6__ {TYPE_2__* xl_tx_chain; } ;
struct TYPE_4__ {int xl_rx_dmaaddr; } ;
struct xl_softc {int xl_flags; scalar_t__ xl_type; int xl_tx_thresh; scalar_t__ xl_xcvr; int xl_tick_callout; scalar_t__ xl_wdog_timer; int xl_fhandle; int xl_ftag; TYPE_3__ xl_cdata; TYPE_1__ xl_ldata; int xl_dev; struct ifnet* xl_ifp; int * xl_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;
struct TYPE_5__ {int xl_phys; } ;


 int FUNC_0 (struct xl_softc*,scalar_t__) ;
 int FUNC_1 (struct xl_softc*,scalar_t__) ;
 int FUNC_2 (struct xl_softc*,scalar_t__,int) ;
 int FUNC_3 (struct xl_softc*,scalar_t__,int) ;
 int FUNC_4 (struct xl_softc*,int ,int ) ;
 int FUNC_5 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_6 (struct ifnet*) ;
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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_7 (struct xl_softc*) ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (int) ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 int FUNC_9 (int ,int ,int,int) ;
 int FUNC_10 (int *,int ,int ,struct xl_softc*) ;
 struct mii_data* FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int) ;
 int VAR_43 ;
 int FUNC_13 (struct mii_data*) ;
 int FUNC_14 (struct xl_softc*) ;
 int FUNC_15 (struct xl_softc*) ;
 int FUNC_16 (struct xl_softc*) ;
 int FUNC_17 (struct xl_softc*) ;
 int FUNC_18 (struct xl_softc*) ;
 int FUNC_19 (struct xl_softc*) ;
 int FUNC_20 (struct xl_softc*) ;
 int VAR_44 ;
 int FUNC_21 (struct xl_softc*) ;

__attribute__((used)) static void
FUNC_22(struct xl_softc *VAR_45)
{
 struct ifnet *VAR_46 = VAR_45->xl_ifp;
 int VAR_47, VAR_48;
 struct mii_data *VAR_49 = ((void*)0);

 FUNC_7(VAR_45);

 if ((VAR_46->if_drv_flags & VAR_3) != 0)
  return;



 FUNC_20(VAR_45);


 FUNC_17(VAR_45);

 if (VAR_45->xl_miibus == ((void*)0)) {
  FUNC_3(VAR_45, VAR_22, VAR_11);
  FUNC_21(VAR_45);
 }
 FUNC_3(VAR_45, VAR_22, VAR_18);
 FUNC_21(VAR_45);
 FUNC_5(10000);

 if (VAR_45->xl_miibus != ((void*)0))
  VAR_49 = FUNC_11(VAR_45->xl_miibus);





 if ((VAR_45->xl_flags & VAR_28) != 0) {
  FUNC_8(7);
  FUNC_1(VAR_45, VAR_41);
  FUNC_3(VAR_45, VAR_41, 0);
 }

 FUNC_8(2);
 for (VAR_48 = 0; VAR_48 < VAR_0; VAR_48++) {
  FUNC_2(VAR_45, VAR_36 + VAR_48,
    FUNC_6(VAR_45->xl_ifp)[VAR_48]);
 }


 for (VAR_48 = 0; VAR_48 < 3; VAR_48++)
  FUNC_3(VAR_45, VAR_37 + (VAR_48 * 2), 0);
 VAR_47 = FUNC_14(VAR_45);
 if (VAR_47) {
  FUNC_12(VAR_45->xl_dev, "initialization of the rx ring failed (%d)\n",
      VAR_47);
  FUNC_20(VAR_45);
  return;
 }


 if (VAR_45->xl_type == VAR_34)
  VAR_47 = FUNC_16(VAR_45);
 else
  VAR_47 = FUNC_15(VAR_45);
 if (VAR_47) {
  FUNC_12(VAR_45->xl_dev, "initialization of the tx ring failed (%d)\n",
      VAR_47);
  FUNC_20(VAR_45);
  return;
 }







 FUNC_2(VAR_45, VAR_33, VAR_32 >> 8);


 FUNC_3(VAR_45, VAR_22, VAR_19|VAR_45->xl_tx_thresh);
 if (VAR_45->xl_type == VAR_34) {
  FUNC_3(VAR_45, VAR_22,
      VAR_13|(VAR_32 >> 4));
 }


 FUNC_18(VAR_45);
 FUNC_3(VAR_45, VAR_22, VAR_20);
 FUNC_21(VAR_45);
 FUNC_4(VAR_45, VAR_35, VAR_45->xl_ldata.xl_rx_dmaaddr);
 FUNC_3(VAR_45, VAR_22, VAR_21);
 FUNC_21(VAR_45);

 if (VAR_45->xl_type == VAR_34) {

  FUNC_2(VAR_45, VAR_26, 64);

  FUNC_3(VAR_45, VAR_22, VAR_6);
  FUNC_21(VAR_45);
  FUNC_4(VAR_45, VAR_25,
      VAR_45->xl_cdata.xl_tx_chain[0].xl_phys);
  FUNC_3(VAR_45, VAR_22, VAR_7);
  FUNC_21(VAR_45);
 }





 FUNC_8(3);
 if (VAR_45->xl_xcvr == VAR_42)
  FUNC_3(VAR_45, VAR_22, VAR_4);
 else
  FUNC_3(VAR_45, VAR_22, VAR_5);
 if (VAR_45->xl_type == VAR_34)
  FUNC_3(VAR_45, VAR_39, VAR_32);
 else {
  u_int8_t VAR_50;
  VAR_50 = FUNC_0(VAR_45, VAR_38);
  VAR_50 |= VAR_30;
  FUNC_2(VAR_45, VAR_38, VAR_50);
 }


 FUNC_3(VAR_45, VAR_22, VAR_14);
 FUNC_19(VAR_45);
 FUNC_8(4);
 FUNC_3(VAR_45, VAR_40, VAR_31);
 FUNC_3(VAR_45, VAR_22, VAR_15);




 FUNC_3(VAR_45, VAR_22, VAR_8|0xFF);
 FUNC_3(VAR_45, VAR_22, VAR_16|VAR_29);






 FUNC_3(VAR_45, VAR_22, VAR_9|VAR_29);
 if (VAR_45->xl_flags & VAR_27)
     FUNC_9(VAR_45->xl_ftag, VAR_45->xl_fhandle, 4, 0x8000);


 FUNC_3(VAR_45, VAR_22, VAR_12|(VAR_32 >>2));
 FUNC_4(VAR_45, VAR_23, VAR_24);


 FUNC_3(VAR_45, VAR_22, VAR_17);
 FUNC_21(VAR_45);
 FUNC_3(VAR_45, VAR_22, VAR_10);
 FUNC_21(VAR_45);


 if (VAR_49 != ((void*)0))
  FUNC_13(VAR_49);


 FUNC_8(7);

 VAR_46->if_drv_flags |= VAR_3;
 VAR_46->if_drv_flags &= ~VAR_2;

 VAR_45->xl_wdog_timer = 0;
 FUNC_10(&VAR_45->xl_tick_callout, VAR_43, VAR_44, VAR_45);
}
