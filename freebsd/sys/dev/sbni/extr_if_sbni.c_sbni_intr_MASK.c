
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbni_softc {struct sbni_softc* slave_sc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sbni_softc*) ;
 int FUNC_1 (struct sbni_softc*) ;
 int VAR_2 ;
 int FUNC_2 (struct sbni_softc*) ;
 int FUNC_3 (struct sbni_softc*,int ) ;

void
FUNC_4(void *VAR_3)
{
 struct sbni_softc *VAR_4;
 int VAR_5;

 VAR_4 = (struct sbni_softc *)VAR_3;

 do {
  VAR_5 = 0;
  FUNC_0(VAR_4);
  if (FUNC_3(VAR_4, VAR_0) & (VAR_1 | VAR_2)) {
   FUNC_2(VAR_4);
   VAR_5 = 1;
  }
  FUNC_1(VAR_4);
  if (VAR_4->slave_sc) {

   FUNC_0(VAR_4->slave_sc);
   if (FUNC_3(VAR_4->slave_sc, VAR_0) & (VAR_1 | VAR_2)) {
    FUNC_2(VAR_4->slave_sc);
    VAR_5 = 1;
   }
   FUNC_1(VAR_4->slave_sc);
  }
 } while (VAR_5);
}
