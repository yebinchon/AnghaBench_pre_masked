
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ bge_parent_tag; scalar_t__ bge_buffer_tag; scalar_t__ bge_stats_tag; int bge_stats_map; scalar_t__ bge_status_tag; int bge_status_map; scalar_t__ bge_tx_ring_tag; int bge_tx_ring_map; scalar_t__ bge_rx_return_ring_tag; int bge_rx_return_ring_map; scalar_t__ bge_rx_jumbo_ring_tag; int bge_rx_jumbo_ring_map; scalar_t__ bge_rx_std_ring_tag; int bge_rx_std_ring_map; scalar_t__ bge_tx_mtag; scalar_t__ bge_mtag_jumbo; scalar_t__ bge_rx_mtag; scalar_t__* bge_tx_dmamap; scalar_t__ bge_rx_jumbo_sparemap; scalar_t__* bge_rx_jumbo_dmamap; scalar_t__ bge_rx_std_sparemap; scalar_t__* bge_rx_std_dmamap; } ;
struct TYPE_3__ {scalar_t__ bge_stats; scalar_t__ bge_stats_paddr; scalar_t__ bge_status_block; scalar_t__ bge_status_block_paddr; scalar_t__ bge_tx_ring; scalar_t__ bge_tx_ring_paddr; scalar_t__ bge_rx_return_ring; scalar_t__ bge_rx_return_ring_paddr; scalar_t__ bge_rx_jumbo_ring; scalar_t__ bge_rx_jumbo_ring_paddr; scalar_t__ bge_rx_std_ring; scalar_t__ bge_rx_std_ring_paddr; } ;
struct bge_softc {TYPE_2__ bge_cdata; TYPE_1__ bge_ldata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_4(struct bge_softc *VAR_3)
{
 int VAR_4;


 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3->bge_cdata.bge_rx_std_dmamap[VAR_4])
   FUNC_1(VAR_3->bge_cdata.bge_rx_mtag,
       VAR_3->bge_cdata.bge_rx_std_dmamap[VAR_4]);
 }
 if (VAR_3->bge_cdata.bge_rx_std_sparemap)
  FUNC_1(VAR_3->bge_cdata.bge_rx_mtag,
      VAR_3->bge_cdata.bge_rx_std_sparemap);


 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->bge_cdata.bge_rx_jumbo_dmamap[VAR_4])
   FUNC_1(VAR_3->bge_cdata.bge_mtag_jumbo,
       VAR_3->bge_cdata.bge_rx_jumbo_dmamap[VAR_4]);
 }
 if (VAR_3->bge_cdata.bge_rx_jumbo_sparemap)
  FUNC_1(VAR_3->bge_cdata.bge_mtag_jumbo,
      VAR_3->bge_cdata.bge_rx_jumbo_sparemap);


 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  if (VAR_3->bge_cdata.bge_tx_dmamap[VAR_4])
   FUNC_1(VAR_3->bge_cdata.bge_tx_mtag,
       VAR_3->bge_cdata.bge_tx_dmamap[VAR_4]);
 }

 if (VAR_3->bge_cdata.bge_rx_mtag)
  FUNC_0(VAR_3->bge_cdata.bge_rx_mtag);
 if (VAR_3->bge_cdata.bge_mtag_jumbo)
  FUNC_0(VAR_3->bge_cdata.bge_mtag_jumbo);
 if (VAR_3->bge_cdata.bge_tx_mtag)
  FUNC_0(VAR_3->bge_cdata.bge_tx_mtag);


 if (VAR_3->bge_ldata.bge_rx_std_ring_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_rx_std_ring_tag,
      VAR_3->bge_cdata.bge_rx_std_ring_map);
 if (VAR_3->bge_ldata.bge_rx_std_ring)
  FUNC_3(VAR_3->bge_cdata.bge_rx_std_ring_tag,
      VAR_3->bge_ldata.bge_rx_std_ring,
      VAR_3->bge_cdata.bge_rx_std_ring_map);

 if (VAR_3->bge_cdata.bge_rx_std_ring_tag)
  FUNC_0(VAR_3->bge_cdata.bge_rx_std_ring_tag);


 if (VAR_3->bge_ldata.bge_rx_jumbo_ring_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_rx_jumbo_ring_tag,
      VAR_3->bge_cdata.bge_rx_jumbo_ring_map);

 if (VAR_3->bge_ldata.bge_rx_jumbo_ring)
  FUNC_3(VAR_3->bge_cdata.bge_rx_jumbo_ring_tag,
      VAR_3->bge_ldata.bge_rx_jumbo_ring,
      VAR_3->bge_cdata.bge_rx_jumbo_ring_map);

 if (VAR_3->bge_cdata.bge_rx_jumbo_ring_tag)
  FUNC_0(VAR_3->bge_cdata.bge_rx_jumbo_ring_tag);


 if (VAR_3->bge_ldata.bge_rx_return_ring_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_rx_return_ring_tag,
      VAR_3->bge_cdata.bge_rx_return_ring_map);

 if (VAR_3->bge_ldata.bge_rx_return_ring)
  FUNC_3(VAR_3->bge_cdata.bge_rx_return_ring_tag,
      VAR_3->bge_ldata.bge_rx_return_ring,
      VAR_3->bge_cdata.bge_rx_return_ring_map);

 if (VAR_3->bge_cdata.bge_rx_return_ring_tag)
  FUNC_0(VAR_3->bge_cdata.bge_rx_return_ring_tag);


 if (VAR_3->bge_ldata.bge_tx_ring_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_tx_ring_tag,
      VAR_3->bge_cdata.bge_tx_ring_map);

 if (VAR_3->bge_ldata.bge_tx_ring)
  FUNC_3(VAR_3->bge_cdata.bge_tx_ring_tag,
      VAR_3->bge_ldata.bge_tx_ring,
      VAR_3->bge_cdata.bge_tx_ring_map);

 if (VAR_3->bge_cdata.bge_tx_ring_tag)
  FUNC_0(VAR_3->bge_cdata.bge_tx_ring_tag);


 if (VAR_3->bge_ldata.bge_status_block_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_status_tag,
      VAR_3->bge_cdata.bge_status_map);

 if (VAR_3->bge_ldata.bge_status_block)
  FUNC_3(VAR_3->bge_cdata.bge_status_tag,
      VAR_3->bge_ldata.bge_status_block,
      VAR_3->bge_cdata.bge_status_map);

 if (VAR_3->bge_cdata.bge_status_tag)
  FUNC_0(VAR_3->bge_cdata.bge_status_tag);


 if (VAR_3->bge_ldata.bge_stats_paddr)
  FUNC_2(VAR_3->bge_cdata.bge_stats_tag,
      VAR_3->bge_cdata.bge_stats_map);

 if (VAR_3->bge_ldata.bge_stats)
  FUNC_3(VAR_3->bge_cdata.bge_stats_tag,
      VAR_3->bge_ldata.bge_stats,
      VAR_3->bge_cdata.bge_stats_map);

 if (VAR_3->bge_cdata.bge_stats_tag)
  FUNC_0(VAR_3->bge_cdata.bge_stats_tag);

 if (VAR_3->bge_cdata.bge_buffer_tag)
  FUNC_0(VAR_3->bge_cdata.bge_buffer_tag);


 if (VAR_3->bge_cdata.bge_parent_tag)
  FUNC_0(VAR_3->bge_cdata.bge_parent_tag);
}
