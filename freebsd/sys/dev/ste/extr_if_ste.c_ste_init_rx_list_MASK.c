
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ste_chain_data {int ste_rx_list_map; int ste_rx_list_tag; TYPE_1__* ste_rx_chain; TYPE_1__* ste_rx_head; } ;
struct ste_list_data {scalar_t__ ste_rx_list_paddr; TYPE_2__* ste_rx_list; } ;
struct ste_softc {struct ste_chain_data ste_cdata; struct ste_list_data ste_ldata; scalar_t__ ste_int_rx_act; } ;
struct ste_desc_onefrag {int dummy; } ;
struct TYPE_4__ {void* ste_next; } ;
struct TYPE_3__ {struct TYPE_3__* ste_next; TYPE_2__* ste_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 void* FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct ste_softc*,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_4(struct ste_softc *VAR_4)
{
 struct ste_chain_data *VAR_5;
 struct ste_list_data *VAR_6;
 int VAR_7, VAR_8;

 VAR_4->ste_int_rx_act = 0;
 VAR_5 = &VAR_4->ste_cdata;
 VAR_6 = &VAR_4->ste_ldata;
 FUNC_1(VAR_6->ste_rx_list, VAR_3);
 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_5->ste_rx_chain[VAR_8].ste_ptr = &VAR_6->ste_rx_list[VAR_8];
  VAR_7 = FUNC_3(VAR_4, &VAR_5->ste_rx_chain[VAR_8]);
  if (VAR_7 != 0)
   return (VAR_7);
  if (VAR_8 == (VAR_2 - 1)) {
   VAR_5->ste_rx_chain[VAR_8].ste_next = &VAR_5->ste_rx_chain[0];
   VAR_6->ste_rx_list[VAR_8].ste_next =
       FUNC_2(VAR_6->ste_rx_list_paddr +
       (sizeof(struct ste_desc_onefrag) * 0));
  } else {
   VAR_5->ste_rx_chain[VAR_8].ste_next = &VAR_5->ste_rx_chain[VAR_8 + 1];
   VAR_6->ste_rx_list[VAR_8].ste_next =
       FUNC_2(VAR_6->ste_rx_list_paddr +
       (sizeof(struct ste_desc_onefrag) * (VAR_8 + 1)));
  }
 }

 VAR_5->ste_rx_head = &VAR_5->ste_rx_chain[0];
 FUNC_0(VAR_4->ste_cdata.ste_rx_list_tag,
     VAR_4->ste_cdata.ste_rx_list_map,
     VAR_0 | VAR_1);

 return (0);
}
