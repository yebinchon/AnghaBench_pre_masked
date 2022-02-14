
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ural_tx_data {int * ni; int * m; } ;
struct ural_softc {struct ural_tx_data* tx_data; int tx_free; int tx_q; scalar_t__ tx_nfree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct ural_softc *VAR_1)
{
 struct ural_tx_data *VAR_2;
 int VAR_3;


 VAR_1->tx_nfree = 0;
 FUNC_0(&VAR_1->tx_q);
 FUNC_0(&VAR_1->tx_free);


 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_2 = &VAR_1->tx_data[VAR_3];

  if (VAR_2->m != ((void*)0)) {
   FUNC_2(VAR_2->m);
   VAR_2->m = ((void*)0);
  }
  if (VAR_2->ni != ((void*)0)) {
   FUNC_1(VAR_2->ni);
   VAR_2->ni = ((void*)0);
  }
 }
}
