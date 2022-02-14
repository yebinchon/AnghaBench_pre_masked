
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct vr_softc {size_t vr_txthresh; int vr_quirks; scalar_t__ vr_revid; int vr_flags; int vr_stat_callout; int vr_dev; struct ifnet* vr_ifp; int vr_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;
typedef int bus_addr_t ;
struct TYPE_2__ {int tx_cfg; int bcr_cfg; } ;


 int FUNC_0 (struct vr_softc*,scalar_t__,int) ;
 int FUNC_1 (struct vr_softc*,int ,int) ;
 int FUNC_2 (struct vr_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* FUNC_3 (struct ifnet*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (struct vr_softc*,int ,int) ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int FUNC_6 (struct vr_softc*) ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int FUNC_7 (struct vr_softc*,int ) ;
 int VAR_41 ;
 int FUNC_8 (struct vr_softc*,int ,int ) ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int FUNC_9 (struct vr_softc*,int ) ;
 int VAR_47 ;
 int FUNC_10 (int *,int ,int ,struct vr_softc*) ;
 struct mii_data* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_48 ;
 int FUNC_13 (struct mii_data*) ;
 int FUNC_14 (struct vr_softc*,int ,int ,int *) ;
 int FUNC_15 (struct vr_softc*,int ,int) ;
 int FUNC_16 (struct vr_softc*) ;
 scalar_t__ FUNC_17 (struct vr_softc*) ;
 int FUNC_18 (struct vr_softc*) ;
 int FUNC_19 (struct vr_softc*) ;
 int VAR_49 ;
 int FUNC_20 (struct vr_softc*) ;
 TYPE_1__* VAR_50 ;

__attribute__((used)) static void
FUNC_21(struct vr_softc *VAR_51)
{
 struct ifnet *VAR_52;
 struct mii_data *VAR_53;
 bus_addr_t VAR_54;
 int VAR_55;

 FUNC_6(VAR_51);

 VAR_52 = VAR_51->vr_ifp;
 VAR_53 = FUNC_11(VAR_51->vr_miibus);

 if ((VAR_52->if_drv_flags & VAR_3) != 0)
  return;


 FUNC_19(VAR_51);
 FUNC_16(VAR_51);


 for (VAR_55 = 0; VAR_55 < VAR_0; VAR_55++)
  FUNC_0(VAR_51, VAR_34 + VAR_55, FUNC_3(VAR_51->vr_ifp)[VAR_55]);


 FUNC_5(VAR_51, VAR_6, VAR_7);
 FUNC_8(VAR_51, VAR_6, VAR_8);





 FUNC_5(VAR_51, VAR_6, VAR_10);
 FUNC_8(VAR_51, VAR_6, VAR_9);

 FUNC_5(VAR_51, VAR_11, VAR_12);
 FUNC_8(VAR_51, VAR_11, VAR_50[VAR_51->vr_txthresh].bcr_cfg);

 FUNC_5(VAR_51, VAR_38, VAR_39);
 FUNC_8(VAR_51, VAR_38, VAR_40);

 FUNC_5(VAR_51, VAR_43, VAR_46);
 FUNC_8(VAR_51, VAR_43, VAR_50[VAR_51->vr_txthresh].tx_cfg);


 if (FUNC_17(VAR_51) != 0) {
  FUNC_12(VAR_51->vr_dev,
      "initialization failed: no memory for rx buffers\n");
  FUNC_19(VAR_51);
  return;
 }


 FUNC_20(VAR_51);

 if ((VAR_51->vr_quirks & VAR_36) != 0) {
  uint8_t VAR_56[2] = { 0, 0 };


  FUNC_5(VAR_51, VAR_43, VAR_45 | VAR_44);

  FUNC_5(VAR_51, VAR_11, VAR_13);

  FUNC_15(VAR_51, VAR_32, 0);
  FUNC_15(VAR_51, VAR_47, 0);

  FUNC_14(VAR_51, VAR_47, 0, VAR_56);
  FUNC_15(VAR_51, VAR_47, 1);
 }




 FUNC_18(VAR_51);




 VAR_54 = FUNC_7(VAR_51, 0);
 FUNC_2(VAR_51, VAR_37, FUNC_4(VAR_54));



 VAR_54 = FUNC_9(VAR_51, 0);
 FUNC_2(VAR_51, VAR_42, FUNC_4(VAR_54));

 FUNC_0(VAR_51, VAR_19, VAR_20 | VAR_21);


 if (VAR_51->vr_revid >= VAR_5) {
  FUNC_0(VAR_51, VAR_22, VAR_41 - 1);




  FUNC_0(VAR_51, VAR_23,
      VAR_25 | VAR_24 | VAR_26);

  FUNC_1(VAR_51, VAR_35, 0xffff);
 }


 FUNC_0(VAR_51, VAR_14,
     VAR_17 | VAR_18 | VAR_16 | VAR_15);

 FUNC_1(VAR_51, VAR_31, 0xFFFF);
 FUNC_1(VAR_51, VAR_29, VAR_30);
 if (VAR_51->vr_revid > VAR_4)
  FUNC_1(VAR_51, VAR_33, 0);

 VAR_52->if_drv_flags |= VAR_3;
 VAR_52->if_drv_flags &= ~VAR_2;

 VAR_51->vr_flags &= ~(VAR_27 | VAR_28);
 FUNC_13(VAR_53);

 FUNC_10(&VAR_51->vr_stat_callout, VAR_48, VAR_49, VAR_51);
}
