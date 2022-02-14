
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct bce_softc {int bce_phy_flags; } ;


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
 int FUNC_0 (struct bce_softc*,int ) ;
 int FUNC_1 (struct bce_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct bce_softc *VAR_13)
{
 u32 VAR_14, VAR_15, VAR_16;

 VAR_14 = 0;
 VAR_15 = FUNC_0(VAR_13, VAR_3);
 if ((VAR_15 & VAR_7) !=
     VAR_6)
  return;
 if ((VAR_15 & (VAR_4 | VAR_2)) ==
     (VAR_4 | VAR_2))
  VAR_14 |= VAR_1 |
      VAR_4 | VAR_2;
 if ((VAR_13->bce_phy_flags & VAR_12) != 0 &&
     (VAR_15 & VAR_5) != 0) {
  VAR_13->bce_phy_flags &= ~VAR_11;
  VAR_13->bce_phy_flags |= VAR_10;
  VAR_16 = FUNC_0(VAR_13, VAR_8);
  if ((VAR_16 & VAR_9) != 0)
   VAR_13->bce_phy_flags |= VAR_11;
  VAR_14 |= VAR_1 |
      VAR_5;
 }

 if (VAR_14 != 0)
  FUNC_1(VAR_13, VAR_0, VAR_14);
}
