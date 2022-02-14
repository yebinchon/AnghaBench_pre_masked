
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct sis_softc {scalar_t__ sis_type; scalar_t__ sis_srr; scalar_t__ sis_manual_pad; int sis_stat_ch; int sis_flags; int sis_tx_paddr; int sis_rx_paddr; int sis_dev; struct ifnet* sis_ifp; int sis_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int FUNC_0 (struct sis_softc*,int ) ;
 int FUNC_1 (struct sis_softc*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_2 (struct ifnet*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (struct sis_softc*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_5 (struct sis_softc*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_6 (struct sis_softc*,int ,int ) ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 scalar_t__ VAR_37 ;
 int FUNC_7 (int *,int ,int ,struct sis_softc*) ;
 struct mii_data* FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_38 ;
 int FUNC_10 (struct mii_data*) ;
 int FUNC_11 (struct sis_softc*) ;
 scalar_t__ FUNC_12 (struct sis_softc*) ;
 int FUNC_13 (struct sis_softc*) ;
 int FUNC_14 (struct sis_softc*) ;
 int VAR_39 ;

__attribute__((used)) static void
FUNC_15(struct sis_softc *VAR_40)
{
 struct ifnet *VAR_41 = VAR_40->sis_ifp;
 struct mii_data *VAR_42;
 uint8_t *VAR_43;

 FUNC_5(VAR_40);

 if ((VAR_41->if_drv_flags & VAR_2) != 0)
  return;




 FUNC_14(VAR_40);



 FUNC_11(VAR_40);
 VAR_42 = FUNC_8(VAR_40->sis_miibus);


 VAR_43 = FUNC_2(VAR_40->sis_ifp);
 if (VAR_40->sis_type == VAR_37) {
  FUNC_1(VAR_40, VAR_30, VAR_3);
  FUNC_1(VAR_40, VAR_31, VAR_43[0] | VAR_43[1] << 8);
  FUNC_1(VAR_40, VAR_30, VAR_4);
  FUNC_1(VAR_40, VAR_31, VAR_43[2] | VAR_43[3] << 8);
  FUNC_1(VAR_40, VAR_30, VAR_5);
  FUNC_1(VAR_40, VAR_31, VAR_43[4] | VAR_43[5] << 8);
 } else {
  FUNC_1(VAR_40, VAR_30, VAR_19);
  FUNC_1(VAR_40, VAR_31, VAR_43[0] | VAR_43[1] << 8);
  FUNC_1(VAR_40, VAR_30, VAR_20);
  FUNC_1(VAR_40, VAR_31, VAR_43[2] | VAR_43[3] << 8);
  FUNC_1(VAR_40, VAR_30, VAR_21);
  FUNC_1(VAR_40, VAR_31, VAR_43[4] | VAR_43[5] << 8);
 }


 if (FUNC_12(VAR_40) != 0) {
  FUNC_9(VAR_40->sis_dev,
      "initialization failed: no memory for rx buffers\n");
  FUNC_14(VAR_40);
  return;
 }

 if (VAR_40->sis_type == VAR_37) {
  if (VAR_40->sis_manual_pad != 0)
   VAR_40->sis_flags |= VAR_23;
  else
   VAR_40->sis_flags &= ~VAR_23;
 }
 if (VAR_40->sis_type == VAR_37 && VAR_40->sis_srr <= VAR_12) {
  FUNC_1(VAR_40, VAR_9, 0x0001);
  FUNC_1(VAR_40, VAR_7, 0x189C);

  FUNC_1(VAR_40, VAR_11, 0x0000);

  FUNC_1(VAR_40, VAR_8, 0x5040);

  FUNC_1(VAR_40, VAR_10, 0x008C);
  FUNC_1(VAR_40, VAR_9, 0);
 }

 FUNC_13(VAR_40);




 FUNC_1(VAR_40, VAR_33, FUNC_3(VAR_40->sis_rx_paddr));
 FUNC_1(VAR_40, VAR_36, FUNC_3(VAR_40->sis_tx_paddr));





 if (FUNC_0(VAR_40, VAR_14) & VAR_15) {
  FUNC_1(VAR_40, VAR_32, VAR_28);
 } else {
  FUNC_1(VAR_40, VAR_32, VAR_27);
 }


 FUNC_6(VAR_40, VAR_32, VAR_29);





 FUNC_1(VAR_40, VAR_35, VAR_34);




 FUNC_1(VAR_40, VAR_25, VAR_26);
 FUNC_1(VAR_40, VAR_24, 1);


 FUNC_4(VAR_40, VAR_16, VAR_18 | VAR_17);

 VAR_40->sis_flags &= ~VAR_22;
 FUNC_10(VAR_42);

 VAR_41->if_drv_flags |= VAR_2;
 VAR_41->if_drv_flags &= ~VAR_1;

 FUNC_7(&VAR_40->sis_stat_ch, VAR_38, VAR_39, VAR_40);
}
