
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {scalar_t__ mii_mpd_model; struct mii_data* mii_pdata; } ;
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
 int FUNC_0 (int) ;




 int VAR_23 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int VAR_24 ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_25)
{
 struct mii_data *VAR_26 = VAR_25->mii_pdata;
 uint32_t VAR_27, VAR_28, VAR_29;

 VAR_26->mii_media_status = VAR_4;
 VAR_26->mii_media_active = VAR_5;

 VAR_27 = FUNC_1(VAR_25, VAR_21) |
     FUNC_1(VAR_25, VAR_21);
 if ((VAR_27 & VAR_15) != 0)
  VAR_26->mii_media_status |= VAR_3;

 VAR_28 = FUNC_1(VAR_25, VAR_20);
 if ((VAR_28 & VAR_13) != 0)
  VAR_26->mii_media_active |= VAR_9;

 if ((VAR_28 & VAR_12) != 0) {
  if ((VAR_27 & VAR_14) == 0) {

   VAR_26->mii_media_active |= VAR_10;
   return;
                }
        }

 if (VAR_25->mii_mpd_model == VAR_22) {
  VAR_29 = FUNC_1(VAR_25, VAR_16);
  switch (VAR_29 & VAR_18) {
  case 134:
   VAR_26->mii_media_active |= VAR_2;
   break;
  case 133:
   VAR_26->mii_media_active |= VAR_1;
   break;
  case 132:
   VAR_26->mii_media_active |= VAR_0;
   break;
  default:
   VAR_26->mii_media_active |= VAR_10;
   return;
  }
  if ((VAR_29 & VAR_17) != 0)
   VAR_26->mii_media_active |= VAR_7;
  else
   VAR_26->mii_media_active |= VAR_8;
 } else {
  VAR_29 = FUNC_1(VAR_25, VAR_24);
  switch (FUNC_0(VAR_29)) {
  case 128:
   VAR_26->mii_media_active |= VAR_10;
   return;
  case 131:
   VAR_26->mii_media_active |= VAR_2;
   break;
  case 130:
   VAR_26->mii_media_active |= VAR_1;
   break;
  case 129:
   VAR_26->mii_media_active |= VAR_0;
   break;
  default:
   VAR_26->mii_media_active |= VAR_10;
   return;
  }
  if ((VAR_29 & VAR_23) != 0)
   VAR_26->mii_media_active |= VAR_7;
  else
   VAR_26->mii_media_active |= VAR_8;
 }

 if ((VAR_26->mii_media_active & VAR_7) != 0)
  VAR_26->mii_media_active |= FUNC_2(VAR_25);

 if ((VAR_26->mii_media_active & VAR_0) != 0) {
  VAR_29 = FUNC_1(VAR_25, VAR_19);
  if ((VAR_29 & VAR_11) != 0)
   VAR_26->mii_media_active |= VAR_6;
 }
}
