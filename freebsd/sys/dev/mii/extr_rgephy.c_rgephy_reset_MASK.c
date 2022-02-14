
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct mii_softc {int mii_mpd_rev; int mii_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct mii_softc*,int ) ;
 int FUNC_2 (struct mii_softc*,int ,int) ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct mii_softc*) ;
 int FUNC_4 (struct mii_softc*) ;
 int FUNC_5 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_6(struct mii_softc *VAR_10)
{
 uint16_t VAR_11, VAR_12;

 switch (VAR_10->mii_mpd_rev) {
 case 128:
  VAR_11 = FUNC_1(VAR_10, VAR_2);
  VAR_11 &= ~(VAR_4 | VAR_3);
  FUNC_2(VAR_10, VAR_2, VAR_11);
  FUNC_4(VAR_10);
  break;
 case 129:
  if ((VAR_10->mii_flags & VAR_0) == 0) {

   VAR_12 = FUNC_1(VAR_10, VAR_6);
   if ((VAR_12 & VAR_9) != 0) {
    VAR_12 &= ~VAR_9;
    FUNC_2(VAR_10, VAR_6, VAR_12);
   }
  }

 default:
  if (VAR_10->mii_mpd_rev >= VAR_1) {
   VAR_11 = FUNC_1(VAR_10, VAR_5);
   if ((VAR_11 & VAR_7) == 0) {
    VAR_11 &= ~VAR_8;
    VAR_11 |= VAR_7;
    FUNC_2(VAR_10, VAR_5, VAR_11);
   }
  }
  break;
 }

 FUNC_3(VAR_10);
 FUNC_0(1000);
 FUNC_5(VAR_10);
}
