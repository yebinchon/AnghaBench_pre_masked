
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int * sc_spectral; int sc_ah; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;

int
FUNC_2(struct ath_softc *VAR_1)
{

 if (! FUNC_0(VAR_1->sc_ah))
  return (0);

 if (VAR_1->sc_spectral != ((void*)0)) {
  FUNC_1(VAR_1->sc_spectral, VAR_0);
 }
 return (0);
}
