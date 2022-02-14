
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cbb_softc {scalar_t__ cardok; } ;
struct cbb_intrhand {int arg; int (* intr ) (int ) ;int * filt; struct cbb_softc* sc; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct cbb_softc*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1)
{
 struct cbb_intrhand *VAR_2 = (struct cbb_intrhand *)VAR_1;
 struct cbb_softc *VAR_3 = VAR_2->sc;
 if (VAR_2->filt == ((void*)0)) {
  if (!VAR_3->cardok)
   return;
  if (!FUNC_0(FUNC_1(VAR_3, VAR_0))) {
   VAR_3->cardok = 0;
   return;
  }
 }






 VAR_2->intr(VAR_2->arg);
}
