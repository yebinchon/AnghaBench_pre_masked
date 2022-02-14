
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwi_tx_ring {int count; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; int data_dmat; struct iwi_tx_data* data; } ;
struct iwi_tx_data {int * ni; int * m; int map; } ;
struct iwi_softc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct iwi_softc *VAR_1, struct iwi_tx_ring *VAR_2)
{
 struct iwi_tx_data *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->count; VAR_4++) {
  VAR_3 = &VAR_2->data[VAR_4];

  if (VAR_3->m != ((void*)0)) {
   FUNC_0(VAR_2->data_dmat, VAR_3->map,
       VAR_0);
   FUNC_1(VAR_2->data_dmat, VAR_3->map);
   FUNC_3(VAR_3->m);
   VAR_3->m = ((void*)0);
  }

  if (VAR_3->ni != ((void*)0)) {
   FUNC_2(VAR_3->ni);
   VAR_3->ni = ((void*)0);
  }
 }

 VAR_2->queued = 0;
 VAR_2->cur = VAR_2->next = 0;
}
