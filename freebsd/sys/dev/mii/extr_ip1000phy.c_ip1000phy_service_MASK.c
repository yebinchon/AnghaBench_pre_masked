
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_softc {int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
struct ifmedia_entry {int ifm_media; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int const FUNC_0 (int) ;
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



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int ,int) ;
 int FUNC_5 (struct mii_softc*,int) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_16, struct mii_data *VAR_17, int VAR_18)
{
 struct ifmedia_entry *VAR_19 = VAR_17->mii_media.ifm_cur;
 uint32_t VAR_20, VAR_21, VAR_22;

 switch (VAR_18) {
 case 129:
  break;

 case 130:
  FUNC_2(VAR_16);
  switch (FUNC_0(VAR_19->ifm_media)) {
  case 131:
   (void)FUNC_5(VAR_16, VAR_19->ifm_media);
   goto done;

  case 134:




   VAR_22 = VAR_11;
   break;

  case 133:
   VAR_22 = VAR_10;
   break;

  case 132:
   VAR_22 = VAR_9;
   break;

  default:
   return (VAR_1);
  }

  if ((VAR_19->ifm_media & VAR_3) != 0) {
   VAR_22 |= VAR_12;
   VAR_20 = VAR_5;
  } else
   VAR_20 = VAR_4;

  if (FUNC_0(VAR_19->ifm_media) == 134) {
   VAR_20 |=
       VAR_7 | VAR_6;
   if ((VAR_19->ifm_media & VAR_2) != 0)
    VAR_20 |= VAR_8;
  } else
   VAR_20 = 0;
  FUNC_4(VAR_16, VAR_13, VAR_20);
  FUNC_4(VAR_16, VAR_14, VAR_22);

done:
  break;

 case 128:



  if (FUNC_0(VAR_19->ifm_media) != 131) {
   VAR_16->mii_ticks = 0;
   break;
  }




  VAR_21 = FUNC_1(VAR_16, VAR_15) | FUNC_1(VAR_16, VAR_15);
  if (VAR_21 & VAR_0) {
   VAR_16->mii_ticks = 0;
   break;
  }


  if (VAR_16->mii_ticks++ == 0)
   break;




  if (VAR_16->mii_ticks <= VAR_16->mii_anegticks)
   break;

  VAR_16->mii_ticks = 0;
  FUNC_5(VAR_16, VAR_19->ifm_media);
  break;
 }


 FUNC_3(VAR_16);


 FUNC_6(VAR_16, VAR_18);
 return (0);
}
