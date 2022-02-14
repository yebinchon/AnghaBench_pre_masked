
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ale_txdesc {int * tx_dmamap; } ;
struct TYPE_3__ {scalar_t__ ale_tx_ring_paddr; scalar_t__ ale_tx_cmb_paddr; int * ale_parent_tag; int * ale_buffer_tag; int * ale_tx_cmb_tag; int * ale_tx_cmb; int ale_tx_cmb_map; TYPE_2__* ale_rx_page; int * ale_tx_ring_tag; int * ale_tx_ring; int ale_tx_ring_map; int * ale_tx_tag; struct ale_txdesc* ale_txdesc; } ;
struct ale_softc {TYPE_1__ ale_cdata; } ;
struct TYPE_4__ {scalar_t__ page_paddr; scalar_t__ cmb_paddr; int * cmb_tag; int * cmb_addr; int cmb_map; int * page_tag; int * page_addr; int page_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct ale_softc *VAR_2)
{
 struct ale_txdesc *VAR_3;
 int VAR_4;


 if (VAR_2->ale_cdata.ale_tx_tag != ((void*)0)) {
  for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
   VAR_3 = &VAR_2->ale_cdata.ale_txdesc[VAR_4];
   if (VAR_3->tx_dmamap != ((void*)0)) {
    FUNC_1(VAR_2->ale_cdata.ale_tx_tag,
        VAR_3->tx_dmamap);
    VAR_3->tx_dmamap = ((void*)0);
   }
  }
  FUNC_0(VAR_2->ale_cdata.ale_tx_tag);
  VAR_2->ale_cdata.ale_tx_tag = ((void*)0);
 }

 if (VAR_2->ale_cdata.ale_tx_ring_tag != ((void*)0)) {
  if (VAR_2->ale_cdata.ale_tx_ring_paddr != 0)
   FUNC_2(VAR_2->ale_cdata.ale_tx_ring_tag,
       VAR_2->ale_cdata.ale_tx_ring_map);
  if (VAR_2->ale_cdata.ale_tx_ring != ((void*)0))
   FUNC_3(VAR_2->ale_cdata.ale_tx_ring_tag,
       VAR_2->ale_cdata.ale_tx_ring,
       VAR_2->ale_cdata.ale_tx_ring_map);
  VAR_2->ale_cdata.ale_tx_ring_paddr = 0;
  VAR_2->ale_cdata.ale_tx_ring = ((void*)0);
  FUNC_0(VAR_2->ale_cdata.ale_tx_ring_tag);
  VAR_2->ale_cdata.ale_tx_ring_tag = ((void*)0);
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->ale_cdata.ale_rx_page[VAR_4].page_tag != ((void*)0)) {
   if (VAR_2->ale_cdata.ale_rx_page[VAR_4].page_paddr != 0)
    FUNC_2(
        VAR_2->ale_cdata.ale_rx_page[VAR_4].page_tag,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].page_map);
   if (VAR_2->ale_cdata.ale_rx_page[VAR_4].page_addr != ((void*)0))
    FUNC_3(
        VAR_2->ale_cdata.ale_rx_page[VAR_4].page_tag,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].page_addr,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].page_map);
   VAR_2->ale_cdata.ale_rx_page[VAR_4].page_paddr = 0;
   VAR_2->ale_cdata.ale_rx_page[VAR_4].page_addr = ((void*)0);
   FUNC_0(
       VAR_2->ale_cdata.ale_rx_page[VAR_4].page_tag);
   VAR_2->ale_cdata.ale_rx_page[VAR_4].page_tag = ((void*)0);
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_tag != ((void*)0)) {
   if (VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_paddr != 0)
    FUNC_2(
        VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_tag,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_map);
   if (VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_addr != ((void*)0))
    FUNC_3(
        VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_tag,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_addr,
        VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_map);
   VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_paddr = 0;
   VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_addr = ((void*)0);
   FUNC_0(
       VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_tag);
   VAR_2->ale_cdata.ale_rx_page[VAR_4].cmb_tag = ((void*)0);
  }
 }

 if (VAR_2->ale_cdata.ale_tx_cmb_tag != ((void*)0)) {
  if (VAR_2->ale_cdata.ale_tx_cmb_paddr != 0)
   FUNC_2(VAR_2->ale_cdata.ale_tx_cmb_tag,
       VAR_2->ale_cdata.ale_tx_cmb_map);
  if (VAR_2->ale_cdata.ale_tx_cmb != ((void*)0))
   FUNC_3(VAR_2->ale_cdata.ale_tx_cmb_tag,
       VAR_2->ale_cdata.ale_tx_cmb,
       VAR_2->ale_cdata.ale_tx_cmb_map);
  VAR_2->ale_cdata.ale_tx_cmb_paddr = 0;
  VAR_2->ale_cdata.ale_tx_cmb = ((void*)0);
  FUNC_0(VAR_2->ale_cdata.ale_tx_cmb_tag);
  VAR_2->ale_cdata.ale_tx_cmb_tag = ((void*)0);
 }
 if (VAR_2->ale_cdata.ale_buffer_tag != ((void*)0)) {
  FUNC_0(VAR_2->ale_cdata.ale_buffer_tag);
  VAR_2->ale_cdata.ale_buffer_tag = ((void*)0);
 }
 if (VAR_2->ale_cdata.ale_parent_tag != ((void*)0)) {
  FUNC_0(VAR_2->ale_cdata.ale_parent_tag);
  VAR_2->ale_cdata.ale_parent_tag = ((void*)0);
 }
}
