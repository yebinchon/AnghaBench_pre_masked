
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_long ;
struct mii_softc {scalar_t__ mii_mpd_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct mii_softc*,int ) ;
 int FUNC_1 (struct mii_softc*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct mii_softc *VAR_6, u_long VAR_7)
{
 uint32_t VAR_8;


 if (VAR_7 > VAR_4) {
  if (VAR_6->mii_mpd_model == VAR_5) {

   FUNC_1(VAR_6, VAR_1, 0x4c20);
  } else {
   FUNC_1(VAR_6, VAR_1, 0x7);
   VAR_8 = FUNC_0(VAR_6, VAR_1);
   FUNC_1(VAR_6, VAR_1,
       VAR_8 | VAR_0);
  }

  VAR_8 = FUNC_0(VAR_6, VAR_2);
  FUNC_1(VAR_6, VAR_2,
      VAR_8 | VAR_3);
 } else {
  FUNC_1(VAR_6, VAR_1, 0x7);
  VAR_8 = FUNC_0(VAR_6, VAR_1);
  FUNC_1(VAR_6, VAR_1,
      VAR_8 & ~(VAR_0 | 0x7));

  VAR_8 = FUNC_0(VAR_6, VAR_2);
  FUNC_1(VAR_6, VAR_2,
   VAR_8 & ~VAR_3);
 }
}
