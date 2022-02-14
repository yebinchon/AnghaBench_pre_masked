
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rum_tx_data {int * ni; int * m; struct rum_softc* sc; } ;
struct rum_softc {int tx_nfree; int tx_free; } ;


 int FUNC_0 (int *,struct rum_tx_data*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct rum_tx_data *VAR_1, int VAR_2)
{
 struct rum_softc *VAR_3 = VAR_1->sc;

 if (VAR_1->m != ((void*)0)) {
  FUNC_1(VAR_1->ni, VAR_1->m, VAR_2);
  VAR_1->m = ((void*)0);
  VAR_1->ni = ((void*)0);
 }
 FUNC_0(&VAR_3->tx_free, VAR_1, VAR_0);
 VAR_3->tx_nfree++;
}
