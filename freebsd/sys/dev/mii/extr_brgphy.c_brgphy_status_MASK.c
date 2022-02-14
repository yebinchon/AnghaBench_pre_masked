
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct mii_softc {int mii_flags; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; int mii_media_status; } ;
struct brgphy_softc {int serdes_flags; } ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;







 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_45 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int ) ;
 scalar_t__ FUNC_3 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_46)
{
 struct brgphy_softc *VAR_47 = (struct brgphy_softc *)VAR_46;
 struct mii_data *VAR_48 = VAR_46->mii_pdata;
 int VAR_49, VAR_50, VAR_51, VAR_52, VAR_53;
 u_int VAR_54;

 VAR_48->mii_media_status = VAR_38;
 VAR_48->mii_media_active = VAR_39;

 VAR_51 = FUNC_1(VAR_46, VAR_24) | FUNC_1(VAR_46, VAR_24);
 VAR_50 = FUNC_1(VAR_46, VAR_23);

 if (VAR_50 & VAR_15) {
  VAR_48->mii_media_active |= VAR_43;
 }

 if ((VAR_50 & VAR_14) &&
     (VAR_51 & VAR_16) == 0 &&
     (VAR_47->serdes_flags & VAR_25) == 0) {

  VAR_48->mii_media_active |= VAR_44;
  return;
 }

 if ((VAR_46->mii_flags & VAR_45) == 0) {




  VAR_54 = FUNC_3(VAR_46);
  VAR_53 = FUNC_1(VAR_46, VAR_21);
  VAR_49 = FUNC_1(VAR_46, VAR_22);


  if (VAR_49 & VAR_10) {
   VAR_48->mii_media_status |= VAR_37;
   switch (VAR_49 & VAR_9) {
   case 134:
    VAR_48->mii_media_active |= VAR_30 | VAR_41; break;
   case 133:
    VAR_48->mii_media_active |= VAR_30 | VAR_42; break;
   case 132:
    VAR_48->mii_media_active |= VAR_33 | VAR_41; break;
   case 130:
    VAR_48->mii_media_active |= VAR_32; break;
   case 131:
    VAR_48->mii_media_active |= VAR_33 | VAR_42; break;
   case 129:
    VAR_48->mii_media_active |= VAR_35 | VAR_41; break;
   case 128:
    VAR_48->mii_media_active |= VAR_35 | VAR_42; break;
   default:
    VAR_48->mii_media_active |= VAR_44; break;
   }

   if ((VAR_48->mii_media_active & VAR_41) != 0)
    VAR_48->mii_media_active |= VAR_54;

   if (FUNC_0(VAR_48->mii_media_active) == VAR_30 &&
       (VAR_53 & VAR_0) != 0)
    VAR_48->mii_media_active |= VAR_40;
  }
 } else {


  if (VAR_51 & VAR_17) {
   VAR_48->mii_media_status |= VAR_37;
  }


  if (VAR_47->serdes_flags & VAR_1) {
   VAR_48->mii_media_active |= VAR_29;


   if (VAR_50 & VAR_14) {
    VAR_52 = FUNC_1(VAR_46, VAR_26) & FUNC_1(VAR_46, VAR_28);
    if (VAR_52 & VAR_27)
     VAR_48->mii_media_active |= VAR_41;
    else
     VAR_48->mii_media_active |= VAR_42;
   }
  } else if (VAR_47->serdes_flags & VAR_2) {
   FUNC_2(VAR_46, VAR_3, VAR_4);
   VAR_53 = FUNC_1(VAR_46, VAR_5);


   switch (VAR_53 & VAR_7) {
   case 142:
    VAR_48->mii_media_active |= VAR_34; break;
   case 141:
    VAR_48->mii_media_active |= VAR_31; break;
   case 140:
    VAR_48->mii_media_active |= VAR_29; break;
   case 139:
    VAR_48->mii_media_active |= VAR_36; break;
   }


   if (VAR_53 & VAR_6)
    VAR_48->mii_media_active |= VAR_41;
   else
    VAR_48->mii_media_active |= VAR_42;
  } else if (VAR_47->serdes_flags & VAR_8) {

   FUNC_2(VAR_46, VAR_11, VAR_13);
   VAR_53 = FUNC_1(VAR_46, VAR_20);


   FUNC_2(VAR_46, VAR_11, VAR_12);


   switch (VAR_53 & VAR_19) {
    case 138:
     VAR_48->mii_media_active |= VAR_34; break;
    case 137:
     VAR_48->mii_media_active |= VAR_31; break;
    case 136:
     VAR_48->mii_media_active |= VAR_29; break;
    case 135:
     VAR_48->mii_media_active |= VAR_36; break;
   }


   if (VAR_53 & VAR_18)
    VAR_48->mii_media_active |= VAR_41;
   else
    VAR_48->mii_media_active |= VAR_42;
  }
 }
}
