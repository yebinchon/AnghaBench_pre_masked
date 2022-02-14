
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mii_softc {scalar_t__ mii_media_active; scalar_t__ mii_media_status; int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {scalar_t__ mii_media_active; scalar_t__ mii_media_status; TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


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

 int const FUNC_0 (int) ;
 int VAR_20 ;
 int VAR_21 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_22, struct mii_data *VAR_23, int VAR_24)
{
 struct ifmedia_entry *VAR_25 = VAR_23->mii_media.ifm_cur;
 int VAR_26, VAR_27, VAR_28;

 switch (VAR_24) {
 case 129:
  break;

 case 130:
  FUNC_4(VAR_22);

  switch (FUNC_0(VAR_25->ifm_media)) {
  case 132:







   (void)FUNC_5(VAR_22);
   break;
  case 135:
   VAR_27 = VAR_15;
   goto setit;
  case 134:
   VAR_27 = VAR_14;
   goto setit;
  case 133:
   VAR_27 = VAR_13;
setit:
   if ((VAR_25->ifm_media & VAR_19) != 0) {
    VAR_27 |= VAR_8;
    VAR_28 = VAR_3;
   } else
    VAR_28 = VAR_4;

   if (FUNC_0(VAR_25->ifm_media) == 135) {
    VAR_28 |= VAR_6;
    if ((VAR_25->ifm_media & VAR_18) != 0)
     VAR_28 |= VAR_5;
    VAR_27 |=
        VAR_7 | VAR_9;
   } else
    VAR_28 = 0;
   FUNC_3(VAR_22, VAR_10, VAR_28);
   FUNC_3(VAR_22, VAR_12, VAR_27);
   FUNC_3(VAR_22, VAR_11, VAR_16);
   break;
  case 131:
   FUNC_3(VAR_22, VAR_20, VAR_0 | VAR_1);
   break;
  default:
   return (VAR_17);
  }
  break;

 case 128:



  if (FUNC_0(VAR_25->ifm_media) != 132)
   break;






  VAR_26 = FUNC_1(VAR_22, VAR_21) | FUNC_1(VAR_22, VAR_21);
  if (VAR_26 & VAR_2)
   break;


  if (++VAR_22->mii_ticks == 0)
   break;



  if (VAR_22->mii_ticks <= VAR_22->mii_anegticks)
   break;

  VAR_22->mii_ticks = 0;
  FUNC_5(VAR_22);
  break;
 }


 FUNC_2(VAR_22);





 if (VAR_22->mii_media_active != VAR_23->mii_media_active ||
     VAR_22->mii_media_status != VAR_23->mii_media_status ||
     VAR_24 == 130) {
  FUNC_4(VAR_22);
 }
 FUNC_6(VAR_22, VAR_24);
 return (0);
}
