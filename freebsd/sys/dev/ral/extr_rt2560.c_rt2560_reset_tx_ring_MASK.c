
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt2560_tx_ring {int count; scalar_t__ next_encrypt; scalar_t__ cur_encrypt; scalar_t__ next; scalar_t__ cur; scalar_t__ queued; int desc_map; int desc_dmat; int data_dmat; struct rt2560_tx_data* data; struct rt2560_tx_desc* desc; } ;
struct rt2560_tx_desc {scalar_t__ flags; } ;
struct rt2560_tx_data {int * ni; int * m; int map; } ;
struct rt2560_softc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct rt2560_softc *VAR_2, struct rt2560_tx_ring *VAR_3)
{
 struct rt2560_tx_desc *VAR_4;
 struct rt2560_tx_data *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_3->count; VAR_6++) {
  VAR_4 = &VAR_3->desc[VAR_6];
  VAR_5 = &VAR_3->data[VAR_6];

  if (VAR_5->m != ((void*)0)) {
   FUNC_0(VAR_3->data_dmat, VAR_5->map,
       VAR_0);
   FUNC_1(VAR_3->data_dmat, VAR_5->map);
   FUNC_3(VAR_5->m);
   VAR_5->m = ((void*)0);
  }

  if (VAR_5->ni != ((void*)0)) {
   FUNC_2(VAR_5->ni);
   VAR_5->ni = ((void*)0);
  }

  VAR_4->flags = 0;
 }

 FUNC_0(VAR_3->desc_dmat, VAR_3->desc_map, VAR_1);

 VAR_3->queued = 0;
 VAR_3->cur = VAR_3->next = 0;
 VAR_3->cur_encrypt = VAR_3->next_encrypt = 0;
}
