
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; int mii_extcapabilities; scalar_t__ mii_mpd_model; int mii_capabilities; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_2 (struct mii_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct mii_softc *VAR_18, int VAR_19)
{
 uint16_t VAR_20;

 VAR_20 = FUNC_0(VAR_18->mii_capabilities) | VAR_0;
 if ((FUNC_1(VAR_19) == VAR_10 || (VAR_19 & VAR_11) != 0) &&
     ((VAR_19 & VAR_12) != 0 ||
     (VAR_18->mii_flags & VAR_13) != 0))
  VAR_20 |= VAR_1;
 FUNC_2(VAR_18, VAR_15, VAR_20);
 if ((VAR_18->mii_extcapabilities &
      (VAR_6 | VAR_7)) != 0)
  FUNC_2(VAR_18, VAR_14, VAR_8 |
      VAR_9);
 else if (VAR_18->mii_mpd_model == VAR_17) {
  FUNC_2(VAR_18, VAR_14, 0);
 }
 FUNC_2(VAR_18, VAR_16, VAR_3 | VAR_2 | VAR_4);

 return (VAR_5);
}
