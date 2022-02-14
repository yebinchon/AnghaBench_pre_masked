
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

 int FUNC_0 (int) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;



 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;
 int FUNC_4 (struct ifmedia_entry*) ;
 int FUNC_5 (struct mii_softc*,int) ;
 int FUNC_6 (struct mii_softc*,int) ;

__attribute__((used)) static int
FUNC_7(struct mii_softc *VAR_22, struct mii_data *VAR_23, int VAR_24)
{
 struct ifmedia_entry *VAR_25 = VAR_23->mii_media.ifm_cur;
 uint16_t VAR_26, VAR_27, VAR_28;

 switch (VAR_24) {
 case 129:
  break;

 case 130:
  if (FUNC_0(VAR_25->ifm_media) == VAR_14 ||
      FUNC_0(VAR_25->ifm_media) == VAR_13) {
   FUNC_5(VAR_22, VAR_25->ifm_media);
   break;
  }

  VAR_27 = 0;
  switch (FUNC_0(VAR_25->ifm_media)) {
  case 133:
   VAR_27 = VAR_7;
   break;
  case 132:
   VAR_27 = VAR_6;
   break;
  case 131:
   VAR_27 = FUNC_1(VAR_22, VAR_20);
   FUNC_3(VAR_22, VAR_20, VAR_27 | VAR_4);
   goto done;
  default:
   return (VAR_10);
  }

  VAR_26 = FUNC_4(VAR_25);
  if ((VAR_25->ifm_media & VAR_15) != 0) {
   VAR_27 |= VAR_3;
   if ((VAR_25->ifm_media & VAR_16) != 0 ||
       (VAR_22->mii_flags & VAR_17) != 0)
    VAR_26 |= VAR_1;
  }

  if ((VAR_22->mii_extcapabilities & (VAR_11 |
      VAR_12)) != 0)
   FUNC_3(VAR_22, VAR_18, 0);
  FUNC_3(VAR_22, VAR_19, VAR_26 | VAR_0);




  FUNC_3(VAR_22, VAR_20, VAR_27 | VAR_5 | VAR_2 |
      VAR_8);
done:
  break;

 case 128:



  if (FUNC_0(VAR_25->ifm_media) != VAR_14) {
   VAR_22->mii_ticks = 0;
   break;
  }





  VAR_28 = FUNC_1(VAR_22, VAR_21) | FUNC_1(VAR_22, VAR_21);
  if (VAR_28 & VAR_9) {
   VAR_22->mii_ticks = 0;
   break;
  }


  if (VAR_22->mii_ticks++ == 0)
   break;
  if (VAR_22->mii_ticks <= VAR_22->mii_anegticks)
   return (0);

  VAR_22->mii_ticks = 0;
  FUNC_5(VAR_22, VAR_25->ifm_media);
  break;
 }


 FUNC_2(VAR_22);


 FUNC_6(VAR_22, VAR_24);
 return (0);
}
