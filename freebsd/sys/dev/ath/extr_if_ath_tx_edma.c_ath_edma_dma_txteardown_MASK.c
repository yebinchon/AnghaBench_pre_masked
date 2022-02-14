
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_txsdma; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath_softc*,int *,int *) ;
 int FUNC_1 (struct ath_softc*,int) ;

__attribute__((used)) static int
FUNC_2(struct ath_softc *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  FUNC_1(VAR_1, VAR_2);
 }

 FUNC_0(VAR_1, &VAR_1->sc_txsdma, ((void*)0));
 return (0);
}
