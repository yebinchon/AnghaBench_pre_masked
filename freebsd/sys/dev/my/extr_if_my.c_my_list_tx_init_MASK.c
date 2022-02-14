
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct my_chain_data {int * my_tx_head; int my_tx_tail; TYPE_1__* my_tx_chain; TYPE_1__* my_tx_free; } ;
struct my_softc {struct my_list_data* my_ldata; struct my_chain_data my_cdata; } ;
struct my_list_data {int * my_tx_list; } ;
struct TYPE_2__ {struct TYPE_2__* my_nextdesc; int * my_ptr; } ;


 int FUNC_0 (struct my_softc*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_1(struct my_softc * VAR_1)
{
 struct my_chain_data *VAR_2;
 struct my_list_data *VAR_3;
 int VAR_4;

 FUNC_0(VAR_1);
 VAR_2 = &VAR_1->my_cdata;
 VAR_3 = VAR_1->my_ldata;
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  VAR_2->my_tx_chain[VAR_4].my_ptr = &VAR_3->my_tx_list[VAR_4];
  if (VAR_4 == (VAR_0 - 1))
   VAR_2->my_tx_chain[VAR_4].my_nextdesc = &VAR_2->my_tx_chain[0];
  else
   VAR_2->my_tx_chain[VAR_4].my_nextdesc =
       &VAR_2->my_tx_chain[VAR_4 + 1];
 }
 VAR_2->my_tx_free = &VAR_2->my_tx_chain[0];
 VAR_2->my_tx_tail = *(VAR_2->my_tx_head = ((void*)0));
 return (0);
}
