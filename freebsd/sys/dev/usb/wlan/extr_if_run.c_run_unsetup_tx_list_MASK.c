
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct run_tx_data {int * ni; int * m; } ;
struct run_softc {int dummy; } ;
struct run_endpoint_queue {struct run_tx_data* tx_data; int tx_qh; int tx_fh; scalar_t__ tx_nfree; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct run_softc *VAR_1, struct run_endpoint_queue *VAR_2)
{
 struct run_tx_data *VAR_3;


 VAR_2->tx_nfree = 0;
 FUNC_0(&VAR_2->tx_fh);
 FUNC_0(&VAR_2->tx_qh);


 for (VAR_3 = &VAR_2->tx_data[0];
     VAR_3 < &VAR_2->tx_data[VAR_0]; VAR_3++) {
  if (VAR_3->m != ((void*)0)) {
   FUNC_2(VAR_3->m);
   VAR_3->m = ((void*)0);
  }
  if (VAR_3->ni != ((void*)0)) {
   FUNC_1(VAR_3->ni);
   VAR_3->ni = ((void*)0);
  }
 }
}
