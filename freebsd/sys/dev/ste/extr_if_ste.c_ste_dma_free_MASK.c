
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * ste_parent_tag; int * ste_rx_list_tag; int ste_rx_list_map; int * ste_tx_list_tag; int ste_tx_list_map; int * ste_rx_tag; int * ste_rx_sparemap; struct ste_chain_onefrag* ste_rx_chain; int * ste_tx_tag; struct ste_chain* ste_tx_chain; } ;
struct TYPE_3__ {scalar_t__ ste_tx_list_paddr; scalar_t__ ste_rx_list_paddr; int * ste_rx_list; int * ste_tx_list; } ;
struct ste_softc {TYPE_2__ ste_cdata; TYPE_1__ ste_ldata; } ;
struct ste_chain_onefrag {int * ste_map; } ;
struct ste_chain {int * ste_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct ste_softc *VAR_2)
{
 struct ste_chain *VAR_3;
 struct ste_chain_onefrag *VAR_4;
 int VAR_5;


 if (VAR_2->ste_cdata.ste_tx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
   VAR_3 = &VAR_2->ste_cdata.ste_tx_chain[VAR_5];
   if (VAR_3->ste_map != ((void*)0)) {
    FUNC_1(VAR_2->ste_cdata.ste_tx_tag,
        VAR_3->ste_map);
    VAR_3->ste_map = ((void*)0);
   }
  }
  FUNC_0(VAR_2->ste_cdata.ste_tx_tag);
  VAR_2->ste_cdata.ste_tx_tag = ((void*)0);
 }

 if (VAR_2->ste_cdata.ste_rx_tag != ((void*)0)) {
  for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
   VAR_4 = &VAR_2->ste_cdata.ste_rx_chain[VAR_5];
   if (VAR_4->ste_map != ((void*)0)) {
    FUNC_1(VAR_2->ste_cdata.ste_rx_tag,
        VAR_4->ste_map);
    VAR_4->ste_map = ((void*)0);
   }
  }
  if (VAR_2->ste_cdata.ste_rx_sparemap != ((void*)0)) {
   FUNC_1(VAR_2->ste_cdata.ste_rx_tag,
       VAR_2->ste_cdata.ste_rx_sparemap);
   VAR_2->ste_cdata.ste_rx_sparemap = ((void*)0);
  }
  FUNC_0(VAR_2->ste_cdata.ste_rx_tag);
  VAR_2->ste_cdata.ste_rx_tag = ((void*)0);
 }

 if (VAR_2->ste_cdata.ste_tx_list_tag != ((void*)0)) {
  if (VAR_2->ste_ldata.ste_tx_list_paddr != 0)
   FUNC_2(VAR_2->ste_cdata.ste_tx_list_tag,
       VAR_2->ste_cdata.ste_tx_list_map);
  if (VAR_2->ste_ldata.ste_tx_list != ((void*)0))
   FUNC_3(VAR_2->ste_cdata.ste_tx_list_tag,
       VAR_2->ste_ldata.ste_tx_list,
       VAR_2->ste_cdata.ste_tx_list_map);
  VAR_2->ste_ldata.ste_tx_list = ((void*)0);
  VAR_2->ste_ldata.ste_tx_list_paddr = 0;
  FUNC_0(VAR_2->ste_cdata.ste_tx_list_tag);
  VAR_2->ste_cdata.ste_tx_list_tag = ((void*)0);
 }

 if (VAR_2->ste_cdata.ste_rx_list_tag != ((void*)0)) {
  if (VAR_2->ste_ldata.ste_rx_list_paddr != 0)
   FUNC_2(VAR_2->ste_cdata.ste_rx_list_tag,
       VAR_2->ste_cdata.ste_rx_list_map);
  if (VAR_2->ste_ldata.ste_rx_list != ((void*)0))
   FUNC_3(VAR_2->ste_cdata.ste_rx_list_tag,
       VAR_2->ste_ldata.ste_rx_list,
       VAR_2->ste_cdata.ste_rx_list_map);
  VAR_2->ste_ldata.ste_rx_list = ((void*)0);
  VAR_2->ste_ldata.ste_rx_list_paddr = 0;
  FUNC_0(VAR_2->ste_cdata.ste_rx_list_tag);
  VAR_2->ste_cdata.ste_rx_list_tag = ((void*)0);
 }
 if (VAR_2->ste_cdata.ste_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->ste_cdata.ste_parent_tag);
  VAR_2->ste_cdata.ste_parent_tag = ((void*)0);
 }
}
