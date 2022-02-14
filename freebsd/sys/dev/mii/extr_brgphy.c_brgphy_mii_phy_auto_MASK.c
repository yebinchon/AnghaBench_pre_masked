
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mii_softc {int mii_flags; scalar_t__ mii_mpd_model; int mii_capabilities; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
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
 scalar_t__ VAR_20 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*) ;
 int FUNC_3 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_4(struct mii_softc *VAR_21, int VAR_22)
{
 int VAR_23, VAR_24 = 0;

 FUNC_2(VAR_21);

 if ((VAR_21->mii_flags & VAR_19) == 0) {
  VAR_23 = FUNC_0(VAR_21->mii_capabilities) | VAR_0;
  if ((VAR_22 & VAR_17) != 0 ||
      (VAR_21->mii_flags & VAR_18) != 0)
   VAR_23 |= VAR_6 | VAR_5;
  FUNC_3(VAR_21, VAR_10, VAR_23);
  VAR_24 = VAR_1 | VAR_2;
  if (VAR_21->mii_mpd_model == VAR_20)
   VAR_24 |= VAR_4 | VAR_3;
  FUNC_3(VAR_21, VAR_9, VAR_24);
  FUNC_1(VAR_21, VAR_9);
 } else {
  VAR_23 = VAR_15 | VAR_16;
  if ((VAR_22 & VAR_17) != 0 ||
      (VAR_21->mii_flags & VAR_18) != 0)
   VAR_23 |= VAR_14;
  FUNC_3(VAR_21, VAR_13, VAR_23);
 }

 FUNC_3(VAR_21, VAR_11, VAR_7 |
     VAR_8);
 FUNC_3(VAR_21, VAR_12, 0xFF00);
}
