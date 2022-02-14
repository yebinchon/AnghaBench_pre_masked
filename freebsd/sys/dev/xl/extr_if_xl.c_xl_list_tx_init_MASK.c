
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xl_list_data {int xl_tx_dmamap; int xl_tx_tag; scalar_t__ xl_tx_dmaaddr; int * xl_tx_list; } ;
struct xl_chain_data {int * xl_tx_head; int xl_tx_tail; TYPE_1__* xl_tx_chain; TYPE_1__* xl_tx_free; } ;
struct xl_softc {int xl_mtag; struct xl_list_data xl_ldata; struct xl_chain_data xl_cdata; } ;
struct xl_list {int dummy; } ;
struct TYPE_2__ {struct TYPE_2__* xl_next; scalar_t__ xl_phys; int xl_map; int * xl_ptr; } ;


 int VAR_0 ;
 int FUNC_0 (struct xl_softc*) ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int
FUNC_3(struct xl_softc *VAR_2)
{
 struct xl_chain_data *VAR_3;
 struct xl_list_data *VAR_4;
 int VAR_5, VAR_6;

 FUNC_0(VAR_2);

 VAR_3 = &VAR_2->xl_cdata;
 VAR_4 = &VAR_2->xl_ldata;
 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_3->xl_tx_chain[VAR_6].xl_ptr = &VAR_4->xl_tx_list[VAR_6];
  VAR_5 = FUNC_1(VAR_2->xl_mtag, 0,
      &VAR_3->xl_tx_chain[VAR_6].xl_map);
  if (VAR_5)
   return (VAR_5);
  VAR_3->xl_tx_chain[VAR_6].xl_phys = VAR_4->xl_tx_dmaaddr +
      VAR_6 * sizeof(struct xl_list);
  if (VAR_6 == (VAR_1 - 1))
   VAR_3->xl_tx_chain[VAR_6].xl_next = ((void*)0);
  else
   VAR_3->xl_tx_chain[VAR_6].xl_next = &VAR_3->xl_tx_chain[VAR_6 + 1];
 }

 VAR_3->xl_tx_free = &VAR_3->xl_tx_chain[0];
 VAR_3->xl_tx_tail = *(VAR_3->xl_tx_head = ((void*)0));

 FUNC_2(VAR_4->xl_tx_tag, VAR_4->xl_tx_dmamap, VAR_0);
 return (0);
}
