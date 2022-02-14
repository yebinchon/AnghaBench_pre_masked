
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {scalar_t__ sc_dolnadiv; int * sc_lna_div; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

int
FUNC_1(struct ath_softc *VAR_1)
{
 if (VAR_1->sc_lna_div != ((void*)0)) {
  FUNC_0(VAR_1->sc_lna_div, VAR_0);
  VAR_1->sc_lna_div = ((void*)0);
 }
 VAR_1->sc_dolnadiv = 0;
 return (0);
}
