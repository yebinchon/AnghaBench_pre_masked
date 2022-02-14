
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_flags; struct mii_data* mii_pdata; } ;
struct mii_data {scalar_t__ mii_media_active; int mii_media_status; } ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_23 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 scalar_t__ FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_24)
{
 struct mii_data *VAR_25 = VAR_24->mii_pdata;
 int VAR_26, VAR_27, VAR_28;

 VAR_25->mii_media_status = VAR_16;
 VAR_25->mii_media_active = VAR_17;

 VAR_27 = FUNC_1(VAR_24, VAR_5) | FUNC_1(VAR_24, VAR_5);
 VAR_26 = FUNC_1(VAR_24, VAR_2);
 VAR_28 = FUNC_1(VAR_24, VAR_7);

 if (VAR_27 & VAR_6)
  VAR_25->mii_media_status |= VAR_15;

 if (VAR_26 & VAR_4)
  VAR_25->mii_media_active |= VAR_21;

 if ((VAR_26 & VAR_3) != 0 &&
     (VAR_28 & VAR_9) == 0) {

  VAR_25->mii_media_active |= VAR_22;
  return;
 }

 if ((VAR_24->mii_flags & VAR_23) == 0) {
  switch (VAR_28 & VAR_10) {
  case 130:
   VAR_25->mii_media_active |= VAR_12;
   break;
  case 129:
   VAR_25->mii_media_active |= VAR_13;
   break;
  case 128:
   VAR_25->mii_media_active |= VAR_14;
   break;
  default:
   VAR_25->mii_media_active |= VAR_22;
   return;
  }
 } else {




  VAR_25->mii_media_active |= VAR_11;
 }

 if (VAR_28 & VAR_8) {
  VAR_25->mii_media_active |= VAR_19;
  if ((VAR_24->mii_flags & VAR_23) == 0)
   VAR_25->mii_media_active |= FUNC_2(VAR_24);
 } else
  VAR_25->mii_media_active |= VAR_20;

 if (FUNC_0(VAR_25->mii_media_active) == VAR_12) {
  if (((FUNC_1(VAR_24, VAR_0) | FUNC_1(VAR_24, VAR_0)) &
      VAR_1) != 0)
   VAR_25->mii_media_active |= VAR_18;
 }
}
