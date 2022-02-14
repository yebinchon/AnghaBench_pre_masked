
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
struct mii_softc {scalar_t__ mii_mpd_model; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct mii_softc*,int) ;
 int FUNC_1 (struct mii_softc*,int,int) ;
 int FUNC_2 (struct mii_softc*) ;

__attribute__((used)) static void
FUNC_3(struct mii_softc *VAR_3)
{
 u_int16_t VAR_4;

 FUNC_2(VAR_3);

 if (VAR_3->mii_mpd_model == VAR_2) {

  VAR_4 = FUNC_0(VAR_3, 0x1f);
  FUNC_1(VAR_3, 0x1f, VAR_4 | 0x0080);


  VAR_4 = FUNC_0(VAR_3, VAR_0);
  FUNC_1(VAR_3, VAR_0, VAR_4 | 0x0020);


  VAR_4 = FUNC_0(VAR_3, VAR_1);
  FUNC_1(VAR_3, VAR_1, VAR_4 | 0x0004);


  VAR_4 = FUNC_0(VAR_3, 0x1f);
  FUNC_1(VAR_3, 0x1f, VAR_4 & ~0x0080);
 }
}
