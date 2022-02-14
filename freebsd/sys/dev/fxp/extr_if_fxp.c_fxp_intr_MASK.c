
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct fxp_softc {scalar_t__ suspended; int ifp; } ;
typedef int if_t ;


 int FUNC_0 (struct fxp_softc*,int ) ;
 int FUNC_1 (struct fxp_softc*,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (struct fxp_softc*) ;
 int FUNC_3 (struct fxp_softc*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct fxp_softc*,int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(void *VAR_3)
{
 struct fxp_softc *VAR_4 = VAR_3;
 if_t VAR_5 = VAR_4->ifp;
 uint8_t VAR_6;

 FUNC_2(VAR_4);
 if (VAR_4->suspended) {
  FUNC_3(VAR_4);
  return;
 }







 while ((VAR_6 = FUNC_0(VAR_4, VAR_0)) != 0) {






  if (VAR_6 == 0xff) {
   FUNC_3(VAR_4);
   return;
  }




  FUNC_1(VAR_4, VAR_0, VAR_6);
  if ((FUNC_6(VAR_5) & VAR_2) != 0)
   FUNC_4(VAR_4, VAR_5, VAR_6, -1);
 }
 FUNC_3(VAR_4);
}
