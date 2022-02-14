
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifmedia {int ifm_media; } ;
struct mii_data {struct ifmedia mii_media; } ;
struct ifnet {int if_drv_flags; int if_capenable; } ;
struct dc_softc {int dc_flags; int dc_cachesize; scalar_t__ dc_txthresh; scalar_t__ dc_type; int dc_link; int dc_wdog_ch; scalar_t__ dc_wdog_timer; int dc_stat_ch; int dc_dev; int dc_miibus; struct ifnet* dc_ifp; } ;


 int FUNC_0 (struct dc_softc*,int ) ;
 int FUNC_1 (struct dc_softc*,int ,int) ;
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
 int FUNC_2 (struct dc_softc*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_3 (struct dc_softc*) ;
 scalar_t__ FUNC_4 (struct dc_softc*) ;
 scalar_t__ FUNC_5 (struct dc_softc*) ;
 scalar_t__ FUNC_6 (struct dc_softc*) ;
 scalar_t__ FUNC_7 (struct dc_softc*) ;
 scalar_t__ FUNC_8 (struct dc_softc*) ;
 scalar_t__ FUNC_9 (struct dc_softc*) ;
 int FUNC_10 (struct dc_softc*) ;
 int VAR_15 ;
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
 int FUNC_11 (struct dc_softc*,int ) ;
 int VAR_26 ;
 int FUNC_12 (struct dc_softc*,int ,int) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_13 (struct dc_softc*,int ) ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 scalar_t__ VAR_50 ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int *,int,int ,struct dc_softc*) ;
 int FUNC_17 (struct dc_softc*,int ) ;
 int FUNC_18 (struct dc_softc*) ;
 scalar_t__ FUNC_19 (struct dc_softc*) ;
 int FUNC_20 (struct dc_softc*) ;
 int FUNC_21 (struct dc_softc*) ;
 int FUNC_22 (struct dc_softc*) ;
 int FUNC_23 (struct dc_softc*) ;
 int VAR_51 ;
 int VAR_52 ;
 struct mii_data* FUNC_24 (int ) ;
 int FUNC_25 (int ,char*) ;
 int VAR_53 ;

__attribute__((used)) static void
FUNC_26(struct dc_softc *VAR_54)
{
 struct ifnet *VAR_55 = VAR_54->dc_ifp;
 struct mii_data *VAR_56;
 struct ifmedia *VAR_57;

 FUNC_10(VAR_54);

 if ((VAR_55->if_drv_flags & VAR_49) != 0)
  return;

 VAR_56 = FUNC_24(VAR_54->dc_miibus);




 FUNC_23(VAR_54);
 FUNC_21(VAR_54);
 if (FUNC_5(VAR_54)) {
  VAR_57 = &VAR_56->mii_media;
  FUNC_17(VAR_54, VAR_57->ifm_media);
 }




 if (FUNC_3(VAR_54) || FUNC_4(VAR_54) || FUNC_8(VAR_54))
  FUNC_1(VAR_54, VAR_3, 0);
 else
  FUNC_1(VAR_54, VAR_3, VAR_6 | VAR_5);



 if (FUNC_5(VAR_54))
  FUNC_12(VAR_54, VAR_3, VAR_4);
 if (FUNC_4(VAR_54) || FUNC_5(VAR_54)) {
  FUNC_12(VAR_54, VAR_3, VAR_2);
 } else {
  FUNC_12(VAR_54, VAR_3, VAR_1);
 }
 if (VAR_54->dc_flags & VAR_37)
  FUNC_12(VAR_54, VAR_3, VAR_34);
 switch(VAR_54->dc_cachesize) {
 case 32:
  FUNC_12(VAR_54, VAR_3, VAR_8);
  break;
 case 16:
  FUNC_12(VAR_54, VAR_3, VAR_7);
  break;
 case 8:
  FUNC_12(VAR_54, VAR_3, VAR_9);
  break;
 case 0:
 default:
  FUNC_12(VAR_54, VAR_3, VAR_10);
  break;
 }

 if (VAR_54->dc_flags & VAR_38)
  FUNC_12(VAR_54, VAR_18, VAR_21);
 else {
  if (VAR_54->dc_txthresh > VAR_35) {
   FUNC_12(VAR_54, VAR_18, VAR_21);
  } else {
   FUNC_2(VAR_54, VAR_18, VAR_21);
   FUNC_12(VAR_54, VAR_18, VAR_54->dc_txthresh);
  }
 }

 FUNC_12(VAR_54, VAR_18, VAR_19);
 FUNC_2(VAR_54, VAR_18, VAR_22);

 if (FUNC_6(VAR_54) || FUNC_7(VAR_54)) {
  FUNC_2(VAR_54, VAR_15, 0xFFFF0000);
  if (VAR_54->dc_type == VAR_39)
   FUNC_12(VAR_54, VAR_15, VAR_16);
  else
   FUNC_12(VAR_54, VAR_15, VAR_17);
 }

 if (FUNC_9(VAR_54)) {




  FUNC_1(VAR_54, VAR_27, VAR_31 | VAR_28 |
      VAR_30 | VAR_29);
  FUNC_14(10);
  FUNC_1(VAR_54, VAR_27, VAR_28 |
      VAR_30 | VAR_29);
  FUNC_14(10);
 }

 FUNC_2(VAR_54, VAR_18, VAR_24);
 FUNC_12(VAR_54, VAR_18, VAR_36);


 if (FUNC_19(VAR_54) == VAR_46) {
  FUNC_25(VAR_54->dc_dev,
      "initialization failed: no memory for rx buffers\n");
  FUNC_23(VAR_54);
  return;
 }




 FUNC_20(VAR_54);




 FUNC_1(VAR_54, VAR_25, FUNC_11(VAR_54, 0));
 FUNC_1(VAR_54, VAR_33, FUNC_13(VAR_54, 0));
 FUNC_1(VAR_54, VAR_12, VAR_13);
 FUNC_1(VAR_54, VAR_14, 0xFFFFFFFF);


 if (FUNC_8(VAR_54))
  FUNC_1(VAR_54, VAR_40, VAR_44 |
      VAR_43);


 FUNC_12(VAR_54, VAR_18, VAR_23);






 if (VAR_54->dc_flags & VAR_32) {
  FUNC_1(VAR_54, VAR_40,
      VAR_42 | VAR_45 | VAR_41);
  FUNC_1(VAR_54, VAR_40, 0);
 }







 FUNC_22(VAR_54);


 FUNC_12(VAR_54, VAR_18, VAR_20);
 FUNC_1(VAR_54, VAR_26, 0xFFFFFFFF);

 VAR_55->if_drv_flags |= VAR_49;
 VAR_55->if_drv_flags &= ~VAR_48;

 FUNC_18(VAR_54);


 FUNC_0(VAR_54, VAR_11);


 if (FUNC_15(VAR_56->mii_media.ifm_media) == VAR_50)
  VAR_54->dc_link = 1;
 else {
  if (VAR_54->dc_flags & VAR_0)
   FUNC_16(&VAR_54->dc_stat_ch, VAR_53/10, VAR_51, VAR_54);
  else
   FUNC_16(&VAR_54->dc_stat_ch, VAR_53, VAR_51, VAR_54);
 }

 VAR_54->dc_wdog_timer = 0;
 FUNC_16(&VAR_54->dc_wdog_ch, VAR_53, VAR_52, VAR_54);
}
