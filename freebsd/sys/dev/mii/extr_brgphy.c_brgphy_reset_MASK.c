
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_mpd_oui; int mii_mpd_rev; TYPE_1__* mii_pdata; int mii_mpd_model; } ;
struct bge_softc {int bge_phy_flags; int bge_flags; scalar_t__ bge_asicrev; } ;
struct bce_softc {int bce_phy_flags; int bce_shared_hw_cfg; int bce_port_hw_cfg; } ;
typedef int if_t ;
struct TYPE_2__ {int mii_ifp; } ;


 scalar_t__ FUNC_0 (struct bce_softc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct bce_softc*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (struct bce_softc*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
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
 int VAR_22 ;
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
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
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
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mii_softc*,int ) ;
 int FUNC_5 (struct mii_softc*,int ,int) ;
 int FUNC_6 (struct mii_softc*) ;
 int FUNC_7 (struct mii_softc*) ;
 int FUNC_8 (struct mii_softc*) ;
 int FUNC_9 (struct mii_softc*) ;
 int FUNC_10 (struct mii_softc*) ;
 int FUNC_11 (struct mii_softc*) ;
 int FUNC_12 (struct mii_softc*) ;
 int FUNC_13 (struct mii_softc*) ;
 int FUNC_14 (struct mii_softc*) ;
 int FUNC_15 (struct mii_softc*) ;
 int FUNC_16 (struct mii_softc*) ;
 int FUNC_17 (struct mii_softc*,int ) ;
 int FUNC_18 (int ) ;
 scalar_t__ FUNC_19 (struct mii_softc*,char*) ;
 void* FUNC_20 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_21(struct mii_softc *VAR_58)
{
 struct bge_softc *VAR_59 = ((void*)0);
 struct bce_softc *VAR_60 = ((void*)0);
 if_t VAR_61;
 int VAR_62, VAR_63;







 FUNC_5(VAR_58, VAR_47, VAR_42);


 for (VAR_62 = 0; VAR_62 < 100; VAR_62++) {
  if ((FUNC_4(VAR_58, VAR_47) & VAR_42) == 0)
   break;
  FUNC_3(1000);
 }


 switch (VAR_58->mii_mpd_oui) {
 case 130:
  switch (VAR_58->mii_mpd_model) {
  case 134:
   FUNC_6(VAR_58);
   break;
  case 133:
   if (VAR_58->mii_mpd_rev == 1 || VAR_58->mii_mpd_rev == 3)
    FUNC_6(VAR_58);
   break;
  case 132:
   FUNC_7(VAR_58);
   break;
  case 131:
   FUNC_8(VAR_58);
   break;
  }
  break;
 case 129:
  switch (VAR_58->mii_mpd_model) {
  case 138:
  case 137:
  case 136:
  case 135:
   return;
  }
  break;
 case 128:
  return;
 }

 VAR_61 = VAR_58->mii_pdata->mii_ifp;


 if (FUNC_19(VAR_58, "bge"))
  VAR_59 = FUNC_20(VAR_58);
 else if (FUNC_19(VAR_58, "bce"))
  VAR_60 = FUNC_20(VAR_58);

 if (VAR_59) {

  if (VAR_59->bge_phy_flags & VAR_13)
   FUNC_10(VAR_58);
  if (VAR_59->bge_phy_flags & VAR_14)
   FUNC_11(VAR_58);
  if (VAR_59->bge_phy_flags & VAR_15)
   FUNC_12(VAR_58);
  if (VAR_59->bge_phy_flags & VAR_16)
   FUNC_13(VAR_58);
  if (VAR_59->bge_phy_flags & VAR_17)
   FUNC_14(VAR_58);
  if (VAR_59->bge_phy_flags & VAR_18)
   FUNC_16(VAR_58);

  if (VAR_59->bge_flags & VAR_12)
   FUNC_17(VAR_58, FUNC_18(VAR_61));

  if ((VAR_59->bge_phy_flags & VAR_20) == 0)
   FUNC_9(VAR_58);


  if (VAR_59->bge_phy_flags & VAR_19) {
   FUNC_5(VAR_58, VAR_49,
       FUNC_4(VAR_58, VAR_49) &
       ~VAR_54);
  }


  if (VAR_59->bge_asicrev == VAR_11)
   FUNC_5(VAR_58, VAR_48, 0x12);
 } else if (VAR_60) {
  if (FUNC_1(VAR_60) == VAR_3 &&
   (VAR_60->bce_phy_flags & VAR_8)) {


   FUNC_5(VAR_58, VAR_23, VAR_24);
   FUNC_5(VAR_58, VAR_31,
    VAR_32);
   FUNC_5(VAR_58, VAR_23, VAR_25);


   FUNC_5(VAR_58, VAR_26,
    FUNC_4(VAR_58, VAR_26) |
    VAR_27 |
    VAR_28);


   FUNC_5(VAR_58, VAR_29,
    FUNC_4(VAR_58, VAR_29) |
    VAR_30);


   if (VAR_60->bce_phy_flags & VAR_7)
    FUNC_5(VAR_58, VAR_21,
     FUNC_4(VAR_58, VAR_21) |
     VAR_22);


   if ((FUNC_0(VAR_60) == VAR_0) ||
       (FUNC_0(VAR_60) == VAR_1) ||
       (FUNC_0(VAR_60) == VAR_2)) {
    FUNC_5(VAR_58, VAR_23,
     VAR_35);
    FUNC_5(VAR_58, VAR_33,
     FUNC_4(VAR_58, VAR_33) & ~0x30);
    FUNC_5(VAR_58, VAR_23,
     VAR_25);
   }


   if ((VAR_60->bce_shared_hw_cfg & VAR_10) &&
    (VAR_60->bce_port_hw_cfg & VAR_9)) {
     FUNC_5(VAR_58, VAR_23,
      VAR_35);
     FUNC_5(VAR_58, VAR_34,
      VAR_60->bce_port_hw_cfg &
      VAR_9);
     FUNC_5(VAR_58, VAR_23,
      VAR_25);
   }
  } else if (FUNC_1(VAR_60) == VAR_4 &&
   (VAR_60->bce_phy_flags & VAR_8)) {


   FUNC_5(VAR_58, VAR_36, VAR_41);
   VAR_63 = FUNC_4(VAR_58, VAR_57);
   VAR_63 &= ~VAR_55;
   VAR_63 |= VAR_56;
   FUNC_5(VAR_58, VAR_57, VAR_63);


   FUNC_5(VAR_58, VAR_36, VAR_40);


   VAR_63 = FUNC_4(VAR_58, VAR_53);
   if (VAR_60->bce_phy_flags & VAR_7)
    VAR_63 |= VAR_22;
   else
    VAR_63 &= ~VAR_22;
   FUNC_5(VAR_58, VAR_53, VAR_63);


   FUNC_5(VAR_58, VAR_36, VAR_39);


   VAR_63 = FUNC_4(VAR_58, VAR_50);
   VAR_63 |= VAR_51 |
       VAR_52;
   FUNC_5(VAR_58, VAR_50, VAR_63);


   FUNC_5(VAR_58, VAR_36, VAR_37);


   FUNC_5(VAR_58, VAR_43,
       VAR_45 |
       VAR_46 |
       VAR_44);


   FUNC_5(VAR_58, VAR_36, VAR_38);
        } else if (FUNC_1(VAR_60) == VAR_4) {
   if ((FUNC_2(VAR_60) == VAR_5) ||
    (FUNC_2(VAR_60) == VAR_6))
    FUNC_15(VAR_58);

   FUNC_17(VAR_58, FUNC_18(VAR_61));
   FUNC_9(VAR_58);
  } else {
   FUNC_13(VAR_58);
   FUNC_17(VAR_58, FUNC_18(VAR_61));
   FUNC_9(VAR_58);
  }
 }
}
