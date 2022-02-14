
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
struct mii_softc {int mii_flags; int mii_extcapabilities; int mii_ticks; int mii_anegticks; } ;
struct TYPE_2__ {struct ifmedia_entry* ifm_cur; } ;
struct mii_data {TYPE_1__ mii_media; } ;
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




 int const VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;

 int const FUNC_0 (int) ;
 int VAR_23 ;
 int VAR_24 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*,int ,int) ;
 int FUNC_5 (struct mii_softc*,int) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_25, struct mii_data *VAR_26, int VAR_27)
{
 struct ifmedia_entry *VAR_28 = VAR_26->mii_media.ifm_cur;
 uint16_t VAR_29, VAR_30;
 int VAR_31;

 switch (VAR_27) {
 case 129:
  break;

 case 130:
  if (FUNC_0(VAR_28->ifm_media) == VAR_20) {
   FUNC_5(VAR_25, VAR_28->ifm_media);
   break;
  }

  VAR_29 = 0;
  switch (FUNC_0(VAR_28->ifm_media)) {
  case 134:
   if ((VAR_25->mii_flags & VAR_23) == 0)
    return (VAR_17);
   VAR_29 = VAR_16;
   break;
  case 135:
   if ((VAR_25->mii_extcapabilities &
       (VAR_18 | VAR_19)) == 0)
    return (VAR_17);
   VAR_29 = VAR_16;
   break;
  case 133:
   VAR_29 = VAR_15;
   break;
  case 132:
   VAR_29 = VAR_14;
   break;
  case 131:
   VAR_31 = FUNC_1(VAR_25, VAR_8);
   FUNC_4(VAR_25, VAR_8,
       VAR_31 | VAR_11 | VAR_12);
   goto done;
  default:
   return (VAR_17);
  }

  if ((VAR_28->ifm_media & VAR_22) != 0) {
   VAR_29 |= VAR_10;
   VAR_30 = VAR_3;
  } else
   VAR_30 = VAR_2;

  VAR_31 = FUNC_1(VAR_25, VAR_8);
  VAR_31 &= ~VAR_9;
  FUNC_4(VAR_25, VAR_8, VAR_31 | VAR_13);

  if (FUNC_0(VAR_28->ifm_media) == 134) {
   VAR_30 |= VAR_4;
   if ((VAR_28->ifm_media & VAR_21) != 0)
    VAR_30 |= VAR_5;
  } else if ((VAR_25->mii_flags & VAR_23) != 0)
   VAR_30 = 0;
  FUNC_4(VAR_25, VAR_1, VAR_30);
  FUNC_4(VAR_25, VAR_6, VAR_7);
  FUNC_4(VAR_25, VAR_8, VAR_29 | VAR_13);
done:
  break;
 case 128:



  if (FUNC_0(VAR_28->ifm_media) != VAR_20) {
   VAR_25->mii_ticks = 0;
   break;
  }





  VAR_31 = FUNC_1(VAR_25, VAR_24) | FUNC_1(VAR_25, VAR_24);
  if (VAR_31 & VAR_0) {
   VAR_25->mii_ticks = 0;
   break;
  }


  if (VAR_25->mii_ticks++ == 0)
   break;
  if (VAR_25->mii_ticks <= VAR_25->mii_anegticks)
   break;

  VAR_25->mii_ticks = 0;
  FUNC_2(VAR_25);
  FUNC_5(VAR_25, VAR_28->ifm_media);
  break;
 }


 FUNC_3(VAR_25);


 FUNC_6(VAR_25, VAR_27);
 return (0);
}
