
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mii_softc {scalar_t__ mii_mpd_model; int mii_flags; } ;


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
 scalar_t__ VAR_20 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct mii_softc *VAR_21, int VAR_22)
{
 uint32_t VAR_23;

 VAR_23 = 0;
 if (VAR_21->mii_mpd_model == VAR_20) {
  VAR_23 = FUNC_0(VAR_21, VAR_17);
  VAR_23 &= ~(VAR_12 | VAR_9);
  VAR_23 |= VAR_11;
 }
 VAR_23 |= VAR_7 | VAR_8 |
     VAR_5 | VAR_6;
 if ((VAR_22 & VAR_1) != 0 || (VAR_21->mii_flags & VAR_19) != 0)
  VAR_23 |= VAR_12 | VAR_9;
 FUNC_1(VAR_21, VAR_17, VAR_23 | VAR_10);

 VAR_23 = VAR_2 | VAR_3;
 if (VAR_21->mii_mpd_model != VAR_20)
  VAR_23 |= VAR_4;
 FUNC_1(VAR_21, VAR_16, VAR_23);
 FUNC_1(VAR_21, VAR_18, (VAR_14 |
     VAR_13 | VAR_15));

 return (VAR_0);
}
