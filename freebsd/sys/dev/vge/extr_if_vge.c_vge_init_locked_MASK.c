
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int vge_rx_ring_paddr; int vge_tx_ring_paddr; } ;
struct vge_softc {int vge_watchdog; int vge_flags; TYPE_1__ vge_rdata; struct ifnet* vge_ifp; int vge_dev; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int FUNC_0 (struct vge_softc*,int ,int) ;
 int FUNC_1 (struct vge_softc*,int ,int) ;
 int FUNC_2 (struct vge_softc*,scalar_t__,int) ;
 int FUNC_3 (struct vge_softc*,int ,int) ;
 int FUNC_4 (struct vge_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_5 (struct ifnet*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
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
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_8 (struct vge_softc*) ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 scalar_t__ VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int FUNC_9 (int *,int ,int ,struct vge_softc*) ;
 int FUNC_10 (int ,char*) ;
 int VAR_55 ;
 int FUNC_11 (struct vge_softc*) ;
 int FUNC_12 (struct vge_softc*) ;
 int FUNC_13 (struct vge_softc*) ;
 int FUNC_14 (struct vge_softc*) ;
 int FUNC_15 (struct vge_softc*) ;
 int FUNC_16 (struct vge_softc*) ;
 int FUNC_17 (struct vge_softc*) ;
 int FUNC_18 (struct vge_softc*) ;
 int FUNC_19 (struct vge_softc*) ;
 int FUNC_20 (struct vge_softc*) ;
 int FUNC_21 (struct vge_softc*) ;
 int VAR_56 ;

__attribute__((used)) static void
FUNC_22(struct vge_softc *VAR_57)
{
 struct ifnet *VAR_58 = VAR_57->vge_ifp;
 int VAR_59, VAR_60;

 FUNC_8(VAR_57);

 if ((VAR_58->if_drv_flags & VAR_3) != 0)
  return;




 FUNC_20(VAR_57);
 FUNC_15(VAR_57);
 FUNC_14(VAR_57);





 VAR_59 = FUNC_16(VAR_57);
 if (VAR_59 != 0) {
                FUNC_10(VAR_57->vge_dev, "no memory for Rx buffers.\n");
                return;
 }
 FUNC_21(VAR_57);

 FUNC_19(VAR_57);

 for (VAR_60 = 0; VAR_60 < VAR_0; VAR_60++)
  FUNC_2(VAR_57, VAR_33 + VAR_60, FUNC_5(VAR_57->vge_ifp)[VAR_60]);





 FUNC_0(VAR_57, VAR_34, VAR_35|VAR_36);
 FUNC_1(VAR_57, VAR_34, VAR_40);


 FUNC_0(VAR_57, VAR_26, VAR_27);
 FUNC_1(VAR_57, VAR_26, VAR_25);

 FUNC_1(VAR_57, VAR_45, VAR_46|VAR_47);


 FUNC_0(VAR_57, VAR_4, VAR_7|
     VAR_6|VAR_8|VAR_5);
 FUNC_1(VAR_57, VAR_4, VAR_9);


 FUNC_1(VAR_57, VAR_23, VAR_24);






 FUNC_4(VAR_57, VAR_50,
     FUNC_6(VAR_57->vge_rdata.vge_tx_ring_paddr));
 FUNC_4(VAR_57, VAR_49,
     FUNC_7(VAR_57->vge_rdata.vge_tx_ring_paddr));
 FUNC_3(VAR_57, VAR_48, VAR_53 - 1);

 FUNC_4(VAR_57, VAR_38,
     FUNC_7(VAR_57->vge_rdata.vge_rx_ring_paddr));
 FUNC_3(VAR_57, VAR_37, VAR_44 - 1);
 FUNC_3(VAR_57, VAR_39, VAR_44);


 FUNC_13(VAR_57);


 FUNC_2(VAR_57, VAR_41, VAR_42);
 FUNC_2(VAR_57, VAR_41, VAR_43);


 FUNC_3(VAR_57, VAR_51, VAR_52);


 FUNC_11(VAR_57);


 FUNC_17(VAR_57);
 FUNC_18(VAR_57);


 FUNC_3(VAR_57, VAR_54, 0xFFFF);






 FUNC_2(VAR_57, VAR_18, 0xFF);
 FUNC_2(VAR_57, VAR_21, VAR_15 | 0x0B);




 FUNC_2(VAR_57, VAR_17, VAR_12);
 FUNC_2(VAR_57, VAR_20, VAR_14);
 FUNC_2(VAR_57, VAR_19,
     VAR_13|VAR_10|VAR_11);
 {



  FUNC_4(VAR_57, VAR_29, VAR_30);
 }
 FUNC_4(VAR_57, VAR_32, 0xFFFFFFFF);
 FUNC_2(VAR_57, VAR_22, VAR_16);

 VAR_57->vge_flags &= ~VAR_28;
 FUNC_12(VAR_57);

 VAR_58->if_drv_flags |= VAR_3;
 VAR_58->if_drv_flags &= ~VAR_2;
 FUNC_9(&VAR_57->vge_watchdog, VAR_55, VAR_56, VAR_57);
}
