
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; } ;
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

 int const FUNC_0 (int) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;
 int FUNC_3 (struct ifmedia_entry*) ;

__attribute__((used)) static int
FUNC_4(struct mii_softc *VAR_20, struct ifmedia_entry *VAR_21)
{
 uint16_t VAR_22, VAR_23, VAR_24;

 VAR_24 = 0;
 VAR_23 = FUNC_1(VAR_20, VAR_19);
 switch (FUNC_0(VAR_21->ifm_media)) {
 case 129:
  VAR_24 |= VAR_8 | VAR_9;
  break;
 case 132:
  VAR_24 |= VAR_8 | VAR_9;
  break;
 case 131:
 case 130:
  break;
 case 128:
  FUNC_2(VAR_20, VAR_19, VAR_23 | VAR_3 | VAR_4);
  return (VAR_7);
 default:
  return (VAR_6);
 }

 VAR_22 = FUNC_3(VAR_21);
 if ((FUNC_0(VAR_21->ifm_media) == 129 ||
     (VAR_21->ifm_media & VAR_13) != 0) &&
     ((VAR_21->ifm_media & VAR_14) != 0 ||
     (VAR_20->mii_flags & VAR_15) != 0))
  VAR_22 |= VAR_1;

 if ((VAR_20->mii_flags & VAR_16) != 0) {
  if (FUNC_0(VAR_21->ifm_media) == 132) {
   VAR_24 |= VAR_11;
   if ((VAR_21->ifm_media & VAR_12) != 0)
    VAR_24 |= VAR_10;
  }
  FUNC_2(VAR_20, VAR_17, VAR_24);
 }
 FUNC_2(VAR_20, VAR_18, VAR_22 | VAR_0);
 FUNC_2(VAR_20, VAR_19, VAR_23 | VAR_2 | VAR_5);

 return (VAR_7);
}
