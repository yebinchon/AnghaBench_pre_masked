
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
struct my_softc {int my_watchdog; int * my_pinfo; TYPE_2__* my_ldata; int my_dev; TYPE_1__* my_info; scalar_t__ my_autoneg; struct ifnet* my_ifp; } ;
struct ifnet {int if_flags; int if_drv_flags; } ;
struct TYPE_4__ {int * my_tx_list; int * my_rx_list; } ;
struct TYPE_3__ {scalar_t__ my_did; } ;


 int FUNC_0 (struct my_softc*,int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct my_softc*,int ,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct my_softc*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_3 (struct my_softc*,int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_4 (int *,int ,int ,struct my_softc*) ;
 int FUNC_5 (int ,char*) ;
 int VAR_24 ;
 scalar_t__ FUNC_6 (struct my_softc*) ;
 int FUNC_7 (struct my_softc*) ;
 int FUNC_8 (struct my_softc*,int ) ;
 int FUNC_9 (struct my_softc*,int ,int ) ;
 int FUNC_10 (struct my_softc*) ;
 int FUNC_11 (struct my_softc*,int ) ;
 int FUNC_12 (struct my_softc*) ;
 int FUNC_13 (struct my_softc*) ;
 int VAR_25 ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void
FUNC_15(struct my_softc *VAR_26)
{
 struct ifnet *VAR_27 = VAR_26->my_ifp;
 u_int16_t VAR_28 = 0;

 FUNC_2(VAR_26);
 if (VAR_26->my_autoneg) {
  return;
 }
 if (VAR_26->my_pinfo != ((void*)0))
  VAR_28 = FUNC_8(VAR_26, VAR_23);



 FUNC_13(VAR_26);
 FUNC_10(VAR_26);
 FUNC_0(VAR_26, VAR_7, VAR_12);
 FUNC_0(VAR_26, VAR_19, VAR_21 | VAR_15 | VAR_17);



 if (VAR_26->my_info->my_did == VAR_5) {
  FUNC_3(VAR_26, VAR_7, VAR_13);
  FUNC_3(VAR_26, VAR_19, VAR_8);
 }
 FUNC_11(VAR_26, VAR_28);

 if (FUNC_6(VAR_26) == VAR_0) {
  FUNC_5(VAR_26->my_dev, "init failed: no memory for rx buffers\n");
  FUNC_13(VAR_26);
  return;
 }

 FUNC_7(VAR_26);


 if (VAR_27->if_flags & VAR_4)
  FUNC_3(VAR_26, VAR_19, VAR_14);
 else
  FUNC_1(VAR_26, VAR_19, VAR_14);




 if (VAR_27->if_flags & VAR_1)
  FUNC_3(VAR_26, VAR_19, VAR_6);
 else
  FUNC_1(VAR_26, VAR_19, VAR_6);




 FUNC_12(VAR_26);




 FUNC_1(VAR_26, VAR_19, VAR_16);
 FUNC_0(VAR_26, VAR_18, FUNC_14(&VAR_26->my_ldata->my_rx_list[0]));




 FUNC_0(VAR_26, VAR_9, VAR_10);
 FUNC_0(VAR_26, VAR_11, 0xFFFFFFFF);


 FUNC_3(VAR_26, VAR_19, VAR_16);
 FUNC_1(VAR_26, VAR_19, VAR_20);
 FUNC_0(VAR_26, VAR_22, FUNC_14(&VAR_26->my_ldata->my_tx_list[0]));
 FUNC_3(VAR_26, VAR_19, VAR_20);


 if (VAR_26->my_pinfo != ((void*)0))
  FUNC_9(VAR_26, VAR_23, VAR_28);
 VAR_27->if_drv_flags |= VAR_3;
 VAR_27->if_drv_flags &= ~VAR_2;

 FUNC_4(&VAR_26->my_watchdog, VAR_24, VAR_25, VAR_26);
 return;
}
