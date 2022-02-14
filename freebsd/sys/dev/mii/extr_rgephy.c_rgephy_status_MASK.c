
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; scalar_t__ mii_mpd_rev; struct mii_data* mii_pdata; } ;
struct mii_data {int mii_media_active; int mii_media_status; } ;


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
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
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
 int FUNC_2 (struct mii_softc*) ;
 scalar_t__ FUNC_3 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_35)
{
 struct mii_data *VAR_36 = VAR_35->mii_pdata;
 int VAR_37, VAR_38;
 uint16_t VAR_39;

 VAR_36->mii_media_status = VAR_4;
 VAR_36->mii_media_active = VAR_5;

 if (FUNC_3(VAR_35) != 0)
  VAR_36->mii_media_status |= VAR_3;

 VAR_37 = FUNC_1(VAR_35, VAR_25);
 VAR_38 = FUNC_1(VAR_35, VAR_24);
 if (VAR_38 & VAR_17) {
  VAR_36->mii_media_active |= VAR_10;
  VAR_36->mii_media_status = 0;
  return;
 }

 if (VAR_38 & VAR_18)
  VAR_36->mii_media_active |= VAR_9;

 if (VAR_38 & VAR_16) {
  if ((VAR_37 & VAR_19) == 0) {

   VAR_36->mii_media_active |= VAR_10;
   return;
  }
 }

 if ((VAR_35->mii_flags & VAR_11) == 0 &&
     VAR_35->mii_mpd_rev >= VAR_14) {
  if (VAR_35->mii_mpd_rev == VAR_15) {
   VAR_39 = FUNC_1(VAR_35, VAR_20);
   switch (VAR_39 & VAR_22) {
   case 131:
    VAR_36->mii_media_active |= VAR_0;
    break;
   case 132:
    VAR_36->mii_media_active |= VAR_1;
    break;
   case 133:
    VAR_36->mii_media_active |= VAR_2;
    break;
   default:
    VAR_36->mii_media_active |= VAR_10;
    break;
   }
   if (VAR_39 & VAR_21)
    VAR_36->mii_media_active |= VAR_7;
   else
    VAR_36->mii_media_active |= VAR_8;

  } else {
   VAR_39 = FUNC_1(VAR_35, VAR_26);
   switch (VAR_39 & VAR_28) {
   case 128:
    VAR_36->mii_media_active |= VAR_0;
    break;
   case 129:
    VAR_36->mii_media_active |= VAR_1;
    break;
   case 130:
    VAR_36->mii_media_active |= VAR_2;
    break;
   default:
    VAR_36->mii_media_active |= VAR_10;
    break;
   }
   if (VAR_39 & VAR_27)
    VAR_36->mii_media_active |= VAR_7;
   else
    VAR_36->mii_media_active |= VAR_8;
  }
 } else {
  if (VAR_35->mii_flags & VAR_12)
   VAR_37 = FUNC_1(VAR_35, VAR_34);
  else
   VAR_37 = FUNC_1(VAR_35, VAR_29);
  if (VAR_37 & VAR_30)
   VAR_36->mii_media_active |= VAR_0;
  else if (VAR_37 & VAR_31)
   VAR_36->mii_media_active |= VAR_1;
  else if (VAR_37 & VAR_32)
   VAR_36->mii_media_active |= VAR_2;
  else
   VAR_36->mii_media_active |= VAR_10;
  if (VAR_37 & VAR_33)
   VAR_36->mii_media_active |= VAR_7;
  else
   VAR_36->mii_media_active |= VAR_8;
 }

 if ((VAR_36->mii_media_active & VAR_7) != 0)
  VAR_36->mii_media_active |= FUNC_2(VAR_35);

 if ((FUNC_0(VAR_36->mii_media_active) == VAR_0) &&
     (FUNC_1(VAR_35, VAR_23) & VAR_13) != 0)
  VAR_36->mii_media_active |= VAR_6;
}
