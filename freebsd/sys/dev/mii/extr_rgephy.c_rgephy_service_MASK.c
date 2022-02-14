
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {int mii_flags; scalar_t__ mii_media_active; scalar_t__ mii_media_status; int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {int ifm_media; struct ifmedia_entry* ifm_cur; } ;
struct mii_data {scalar_t__ mii_media_active; scalar_t__ mii_media_status; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int const FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int ,int) ;
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
 int FUNC_5 (struct mii_softc*,int) ;
 int FUNC_6 (struct mii_softc*) ;
 int FUNC_7 (struct mii_softc*) ;
 int FUNC_8 (struct mii_softc*) ;
 int FUNC_9 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_10(struct mii_softc *VAR_28, struct mii_data *VAR_29, int VAR_30)
{
 struct ifmedia_entry *VAR_31 = VAR_29->mii_media.ifm_cur;
 int VAR_32, VAR_33, VAR_34;

 switch (VAR_30) {
 case 129:
  break;

 case 130:
  FUNC_2(VAR_28);

  VAR_34 = FUNC_1(VAR_28, VAR_23);
  VAR_34 &= ~(VAR_16 | VAR_15 |
      VAR_18 | VAR_17 |
      VAR_14 | VAR_13);

  switch (FUNC_0(VAR_31->ifm_media)) {
  case 132:







   (void)FUNC_9(VAR_28, VAR_31->ifm_media);
   break;
  case 135:
   VAR_32 = VAR_27;
   goto setit;
  case 134:
   VAR_32 = VAR_26;
   VAR_34 |= VAR_18 | VAR_17;
   goto setit;
  case 133:
   VAR_32 = VAR_25;
   VAR_34 |= VAR_14 | VAR_13;
setit:
   if ((VAR_31->ifm_media & VAR_6) != 0 &&
       (VAR_29->mii_media.ifm_media & VAR_5) != 0)
    return (VAR_2);

   if ((VAR_31->ifm_media & VAR_4) != 0) {
    VAR_32 |= VAR_20;
    VAR_33 = VAR_9;
    VAR_34 &= ~(VAR_17 | VAR_13);
    if ((VAR_31->ifm_media & VAR_6) != 0 ||
        (VAR_28->mii_flags & VAR_7) != 0)
     VAR_34 |=
         VAR_16 | VAR_15;
   } else {
    VAR_33 = VAR_10;
    VAR_34 &=
        ~(VAR_18 | VAR_14);
   }
   if (FUNC_0(VAR_31->ifm_media) == 135) {
    VAR_33 |= VAR_12;
    if ((VAR_31->ifm_media & VAR_3) != 0)
        VAR_33 |= VAR_11;
   } else {
    VAR_33 = 0;
    VAR_34 &= ~VAR_15;
   }
   if ((VAR_29->mii_media.ifm_media & VAR_5) == 0)
    VAR_32 |=
        VAR_19 | VAR_21;
   FUNC_8(VAR_28);
   FUNC_4(VAR_28, VAR_22, VAR_33);
   FUNC_4(VAR_28, VAR_23, VAR_34);
   FUNC_4(VAR_28, VAR_24, VAR_32);
   break;
  case 131:
   FUNC_4(VAR_28, VAR_8, VAR_0 | VAR_1);
   break;
  default:
   return (VAR_2);
  }
  break;

 case 128:



  if (FUNC_0(VAR_31->ifm_media) != 132) {
   VAR_28->mii_ticks = 0;
   break;
  }





  if (FUNC_6(VAR_28) != 0) {
   VAR_28->mii_ticks = 0;
   break;
  }


  if (VAR_28->mii_ticks++ == 0)
   break;


  if (VAR_28->mii_ticks <= VAR_28->mii_anegticks)
   return (0);

  VAR_28->mii_ticks = 0;
  FUNC_9(VAR_28, VAR_31->ifm_media);
  break;
 }


 FUNC_3(VAR_28);






 if (VAR_28->mii_media_active != VAR_29->mii_media_active ||
     VAR_28->mii_media_status != VAR_29->mii_media_status ||
     VAR_30 == 130) {
  FUNC_7(VAR_28);
 }
 FUNC_5(VAR_28, VAR_30);
 return (0);
}
