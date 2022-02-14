
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2860_tx_ring {scalar_t__ next; scalar_t__ cur; scalar_t__ queued; struct rt2860_tx_data** data; } ;
struct rt2860_tx_data {int * ni; int * m; int map; } ;
struct rt2860_softc {int data_pool; int txwi_dmat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct rt2860_tx_data*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

void
FUNC_5(struct rt2860_softc *VAR_3, struct rt2860_tx_ring *VAR_4)
{
 struct rt2860_tx_data *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if ((VAR_5 = VAR_4->data[VAR_6]) == ((void*)0))
   continue;

  if (VAR_5->m != ((void*)0)) {
   FUNC_1(VAR_3->txwi_dmat, VAR_5->map,
       VAR_0);
   FUNC_2(VAR_3->txwi_dmat, VAR_5->map);
   FUNC_4(VAR_5->m);
   VAR_5->m = ((void*)0);
  }
  if (VAR_5->ni != ((void*)0)) {
   FUNC_3(VAR_5->ni);
   VAR_5->ni = ((void*)0);
  }

  FUNC_0(&VAR_3->data_pool, VAR_5, VAR_2);
  VAR_4->data[VAR_6] = ((void*)0);
 }

 VAR_4->queued = 0;
 VAR_4->cur = VAR_4->next = 0;
}
