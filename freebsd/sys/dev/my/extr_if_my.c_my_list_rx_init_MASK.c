
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct my_chain_data {TYPE_2__* my_rx_chain; TYPE_2__* my_rx_head; } ;
struct my_softc {struct my_list_data* my_ldata; struct my_chain_data my_cdata; } ;
struct my_list_data {TYPE_1__* my_rx_list; } ;
struct my_desc {int dummy; } ;
struct TYPE_4__ {struct TYPE_4__* my_nextdesc; struct my_desc* my_ptr; } ;
struct TYPE_3__ {void* my_next; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct my_softc*) ;
 int VAR_1 ;
 int FUNC_1 (struct my_softc*) ;
 scalar_t__ FUNC_2 (struct my_softc*,TYPE_2__*) ;
 void* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct my_softc * VAR_2)
{
 struct my_chain_data *VAR_3;
 struct my_list_data *VAR_4;
 int VAR_5;

 FUNC_0(VAR_2);
 VAR_3 = &VAR_2->my_cdata;
 VAR_4 = VAR_2->my_ldata;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_3->my_rx_chain[VAR_5].my_ptr =
      (struct my_desc *) & VAR_4->my_rx_list[VAR_5];
  if (FUNC_2(VAR_2, &VAR_3->my_rx_chain[VAR_5]) == VAR_0) {
   FUNC_1(VAR_2);
   return (VAR_0);
  }
  if (VAR_5 == (VAR_1 - 1)) {
   VAR_3->my_rx_chain[VAR_5].my_nextdesc = &VAR_3->my_rx_chain[0];
   VAR_4->my_rx_list[VAR_5].my_next = FUNC_3(&VAR_4->my_rx_list[0]);
  } else {
   VAR_3->my_rx_chain[VAR_5].my_nextdesc =
       &VAR_3->my_rx_chain[VAR_5 + 1];
   VAR_4->my_rx_list[VAR_5].my_next =
       FUNC_3(&VAR_4->my_rx_list[VAR_5 + 1]);
  }
 }
 VAR_3->my_rx_head = &VAR_3->my_rx_chain[0];
 return (0);
}
