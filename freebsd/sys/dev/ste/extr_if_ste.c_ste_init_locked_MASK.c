
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {int ste_rx_list_paddr; } ;
struct ste_softc {int ste_tx_thresh; int ste_callout; int ste_flags; TYPE_1__ ste_ldata; int ste_dev; struct ifnet* ste_ifp; int ste_miibus; } ;
struct mii_data {int dummy; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;


 int FUNC_0 (struct ste_softc*,int ) ;
 int FUNC_1 (struct ste_softc*,int ,int) ;
 int FUNC_2 (struct ste_softc*,scalar_t__,int) ;
 int FUNC_3 (struct ste_softc*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_4 (struct ifnet*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ste_softc*,int ,int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (struct ste_softc*) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 scalar_t__ VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_8 (struct ste_softc*,scalar_t__,int ) ;
 int FUNC_9 (struct ste_softc*,int ,int ) ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_10 (int *,int ,int ,struct ste_softc*) ;
 struct mii_data* FUNC_11 (int ) ;
 int FUNC_12 (int ,char*) ;
 int VAR_38 ;
 int FUNC_13 (struct mii_data*) ;
 scalar_t__ FUNC_14 (struct ste_softc*) ;
 int FUNC_15 (struct ste_softc*) ;
 int FUNC_16 (struct ste_softc*) ;
 int FUNC_17 (struct ste_softc*) ;
 int FUNC_18 (struct ste_softc*) ;
 int FUNC_19 (struct ste_softc*) ;
 int VAR_39 ;
 int FUNC_20 (struct ste_softc*) ;

__attribute__((used)) static void
FUNC_21(struct ste_softc *VAR_40)
{
 struct ifnet *VAR_41;
 struct mii_data *VAR_42;
 uint8_t VAR_43;
 int VAR_44;

 FUNC_7(VAR_40);
 VAR_41 = VAR_40->ste_ifp;
 VAR_42 = FUNC_11(VAR_40->ste_miibus);

 if ((VAR_41->if_drv_flags & VAR_5) != 0)
  return;

 FUNC_19(VAR_40);

 FUNC_16(VAR_40);


 for (VAR_44 = 0; VAR_44 < VAR_0; VAR_44 += 2) {
  FUNC_2(VAR_40, VAR_25 + VAR_44,
      ((FUNC_4(VAR_40->ste_ifp)[VAR_44] & 0xff) |
       FUNC_4(VAR_40->ste_ifp)[VAR_44 + 1] << 8));
 }


 if (FUNC_14(VAR_40) != 0) {
  FUNC_12(VAR_40->ste_dev,
      "initialization failed: no memory for RX buffers\n");
  FUNC_19(VAR_40);
  return;
 }


 FUNC_1(VAR_40, VAR_27, 64);


 FUNC_15(VAR_40);


 VAR_43 = FUNC_0(VAR_40, VAR_37);
 VAR_43 &= ~(VAR_36 | VAR_34 |
     VAR_33 | VAR_35);
 FUNC_1(VAR_40, VAR_37, VAR_43);


 FUNC_1(VAR_40, VAR_28, VAR_24 >> 8);


 FUNC_2(VAR_40, VAR_32, VAR_40->ste_tx_thresh);


 FUNC_1(VAR_40, VAR_31, (VAR_24 >> 4));


 FUNC_2(VAR_40, VAR_23, VAR_1 + VAR_2);


 FUNC_17(VAR_40);


 FUNC_9(VAR_40, VAR_7, VAR_10);
 FUNC_20(VAR_40);
 FUNC_3(VAR_40, VAR_26,
     FUNC_5(VAR_40->ste_ldata.ste_rx_list_paddr));
 FUNC_9(VAR_40, VAR_7, VAR_11);
 FUNC_9(VAR_40, VAR_7, VAR_11);


 FUNC_1(VAR_40, VAR_30, 0);


 FUNC_9(VAR_40, VAR_7, VAR_12);
 FUNC_20(VAR_40);
 FUNC_3(VAR_40, VAR_29, 0);
 FUNC_9(VAR_40, VAR_7, VAR_13);
 FUNC_9(VAR_40, VAR_7, VAR_13);
 FUNC_20(VAR_40);

 FUNC_6(VAR_40, VAR_7, VAR_9 |
     VAR_8);


 FUNC_2(VAR_40, VAR_18, 0);
 FUNC_2(VAR_40, VAR_19, 0);
 FUNC_8(VAR_40, VAR_19, VAR_22);
 FUNC_8(VAR_40, VAR_19, VAR_20);


 FUNC_8(VAR_40, VAR_19, VAR_21);

 FUNC_18(VAR_40);

 FUNC_2(VAR_40, VAR_6, 0);
 FUNC_2(VAR_40, VAR_17, 0xFFFF);







 FUNC_2(VAR_40, VAR_15, VAR_16);

 VAR_40->ste_flags &= ~VAR_14;

 FUNC_13(VAR_42);

 VAR_41->if_drv_flags |= VAR_5;
 VAR_41->if_drv_flags &= ~VAR_4;

 FUNC_10(&VAR_40->ste_callout, VAR_38, VAR_39, VAR_40);
}
