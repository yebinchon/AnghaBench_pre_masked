
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int * sc_txq; } ;


 int FUNC_0 (struct ath_softc*) ;
 scalar_t__ FUNC_1 (struct ath_softc*,int) ;
 int VAR_0 ;
 int FUNC_2 (struct ath_softc*,int *) ;

__attribute__((used)) static void
FUNC_3(struct ath_softc *VAR_1)
{
 int VAR_2;

 FUNC_0(VAR_1);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  if (FUNC_1(VAR_1, VAR_2))
   FUNC_2(VAR_1, &VAR_1->sc_txq[VAR_2]);
}
