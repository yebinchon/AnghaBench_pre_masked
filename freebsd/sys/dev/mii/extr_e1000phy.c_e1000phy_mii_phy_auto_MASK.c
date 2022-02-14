
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; int mii_extcapabilities; } ;


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
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mii_softc *VAR_23, int VAR_24)
{
 uint16_t VAR_25;

 if ((VAR_23->mii_flags & VAR_21) == 0) {
  VAR_25 = FUNC_0(VAR_23, VAR_3);
  VAR_25 &= ~(VAR_9 | VAR_8);
  VAR_25 |= VAR_6 | VAR_7 |
      VAR_4 | VAR_5;
  if ((VAR_24 & VAR_19) != 0 ||
      (VAR_23->mii_flags & VAR_20) != 0)
   VAR_25 |= VAR_9 | VAR_8;
  FUNC_1(VAR_23, VAR_3, VAR_25 | VAR_10);
 } else
  FUNC_1(VAR_23, VAR_3, VAR_15 | VAR_14);
 if ((VAR_23->mii_flags & VAR_22) != 0) {
  VAR_25 = 0;
  if ((VAR_23->mii_extcapabilities & VAR_17) != 0)
   VAR_25 |= VAR_2;
  if ((VAR_23->mii_extcapabilities & VAR_18) != 0)
   VAR_25 |= VAR_1;
  FUNC_1(VAR_23, VAR_0, VAR_25);
 }
 FUNC_1(VAR_23, VAR_11,
     VAR_12 | VAR_13);

 return (VAR_16);
}
