
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ste_chain_data {int ste_tx_list_map; int ste_tx_list_tag; scalar_t__ ste_tx_cnt; scalar_t__ ste_tx_cons; scalar_t__ ste_tx_prod; int * ste_last_tx; TYPE_1__* ste_tx_chain; } ;
struct ste_list_data {scalar_t__ ste_tx_list_paddr; int * ste_tx_list; } ;
struct ste_softc {struct ste_chain_data ste_cdata; struct ste_list_data ste_ldata; } ;
struct ste_desc {int dummy; } ;
struct TYPE_2__ {void* ste_phys; struct TYPE_2__* ste_next; int * ste_mbuf; int * ste_ptr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ) ;
 void* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(struct ste_softc *VAR_4)
{
 struct ste_chain_data *VAR_5;
 struct ste_list_data *VAR_6;
 int VAR_7;

 VAR_5 = &VAR_4->ste_cdata;
 VAR_6 = &VAR_4->ste_ldata;
 FUNC_2(VAR_6->ste_tx_list, VAR_3);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  VAR_5->ste_tx_chain[VAR_7].ste_ptr = &VAR_6->ste_tx_list[VAR_7];
  VAR_5->ste_tx_chain[VAR_7].ste_mbuf = ((void*)0);
  if (VAR_7 == (VAR_2 - 1)) {
   VAR_5->ste_tx_chain[VAR_7].ste_next = &VAR_5->ste_tx_chain[0];
   VAR_5->ste_tx_chain[VAR_7].ste_phys = FUNC_3(FUNC_0(
       VAR_6->ste_tx_list_paddr +
       (sizeof(struct ste_desc) * 0)));
  } else {
   VAR_5->ste_tx_chain[VAR_7].ste_next = &VAR_5->ste_tx_chain[VAR_7 + 1];
   VAR_5->ste_tx_chain[VAR_7].ste_phys = FUNC_3(FUNC_0(
       VAR_6->ste_tx_list_paddr +
       (sizeof(struct ste_desc) * (VAR_7 + 1))));
  }
 }

 VAR_5->ste_last_tx = ((void*)0);
 VAR_5->ste_tx_prod = 0;
 VAR_5->ste_tx_cons = 0;
 VAR_5->ste_tx_cnt = 0;

 FUNC_1(VAR_4->ste_cdata.ste_tx_list_tag,
     VAR_4->ste_cdata.ste_tx_list_map,
     VAR_0 | VAR_1);
}
