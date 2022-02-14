
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_flags; scalar_t__ mii_mpd_rev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_1(struct mii_softc *VAR_11)
{
 int VAR_12;
 uint16_t VAR_13;

 VAR_12 = 0;
 if ((VAR_11->mii_flags & VAR_0) == 0 &&
     VAR_11->mii_mpd_rev >= VAR_2) {
  if (VAR_11->mii_mpd_rev == VAR_3) {
   VAR_13 = FUNC_0(VAR_11, VAR_4);
   if (VAR_13 & VAR_5)
    VAR_12++;
  } else {
   VAR_13 = FUNC_0(VAR_11, VAR_6);
   if (VAR_13 & VAR_7)
    VAR_12++;
  }
 } else {
  if (VAR_11->mii_flags & VAR_1)
   VAR_13 = FUNC_0(VAR_11, VAR_10);
  else
   VAR_13 = FUNC_0(VAR_11, VAR_8);
  if (VAR_13 & VAR_9)
   VAR_12++;
 }

 return (VAR_12);
}
