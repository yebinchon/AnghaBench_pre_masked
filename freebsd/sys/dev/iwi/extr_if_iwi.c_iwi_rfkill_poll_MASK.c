
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_softc {int sc_rftimer; int sc_radiontask; int sc_ic; } ;


 int FUNC_0 (struct iwi_softc*) ;
 int FUNC_1 (int *,int,void (*) (void*),struct iwi_softc*) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct iwi_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct iwi_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2);






 if (!FUNC_3(VAR_2)) {
  FUNC_2(&VAR_2->sc_ic, &VAR_2->sc_radiontask);
  return;
 }
 FUNC_1(&VAR_2->sc_rftimer, 2*VAR_0, FUNC_4, VAR_2);
}
