
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_14__ {int req; int mask; int queue_active; int* send_go; int activate; TYPE_6__* req_list; TYPE_2__* info; TYPE_7__* seg_list; int dmat; int defrag; } ;
struct mxge_slice_state {int oerrors; TYPE_5__* sc; TYPE_4__ tx; } ;
struct mxge_pkt_info {scalar_t__ ip_off; scalar_t__ ip_hlen; int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_13__ {int csum_flags; scalar_t__ len; scalar_t__ csum_data; } ;
struct mbuf {int m_flags; TYPE_3__ m_pkthdr; } ;
struct ifnet {int dummy; } ;
typedef TYPE_4__ mxge_tx_ring_t ;
struct TYPE_11__ {int bus_addr; } ;
struct TYPE_15__ {int num_slices; TYPE_1__ zeropad_dma; int dev; struct ifnet* ifp; } ;
typedef TYPE_5__ mxge_softc_t ;
struct TYPE_16__ {int cksum_offset; scalar_t__ flags; int length; int pseudo_hdr_offset; int rdma_count; void* addr_low; void* addr_high; scalar_t__ pad; } ;
typedef TYPE_6__ mcp_kreq_ether_send_t ;
struct TYPE_17__ {int ds_len; int ds_addr; } ;
typedef TYPE_7__ bus_dma_segment_t ;
struct TYPE_12__ {int flag; struct mbuf* m; int map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,struct mbuf*,TYPE_7__*,int*,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char*,int,scalar_t__) ;
 void* FUNC_6 (int) ;
 void* FUNC_7 (int ) ;
 struct mbuf* FUNC_8 (struct mbuf*,int ) ;
 int FUNC_9 (struct mbuf*) ;
 int FUNC_10 (struct mxge_slice_state*,struct mbuf*,int,struct mxge_pkt_info*) ;
 scalar_t__ FUNC_11 (struct mxge_slice_state*,struct mbuf*,struct mxge_pkt_info*) ;
 int FUNC_12 (TYPE_4__*,TYPE_6__*,int) ;
 struct mbuf* FUNC_13 (struct mbuf*) ;
 scalar_t__ FUNC_14 (void*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 () ;

__attribute__((used)) static void
FUNC_18(struct mxge_slice_state *VAR_14, struct mbuf *VAR_15)
{
 struct mxge_pkt_info VAR_16 = {0,0,0,0};
 mxge_softc_t *VAR_17;
 mcp_kreq_ether_send_t *VAR_18;
 bus_dma_segment_t *VAR_19;
 struct mbuf *VAR_20;
 struct ifnet *VAR_21;
 mxge_tx_ring_t *VAR_22;
 int VAR_23, VAR_24, VAR_25, VAR_26, VAR_27, VAR_28;
 uint16_t VAR_29;
 uint8_t VAR_30, VAR_31;


 VAR_17 = VAR_14->sc;
 VAR_21 = VAR_17->ifp;
 VAR_22 = &VAR_14->tx;
 if (VAR_15->m_pkthdr.csum_flags &
     (VAR_4 | VAR_2 | VAR_3)) {
  if (FUNC_11(VAR_14, VAR_15, &VAR_16))
   goto drop;
 }


 VAR_27 = VAR_22->req & VAR_22->mask;
 VAR_25 = FUNC_3(VAR_22->dmat, VAR_22->info[VAR_27].map,
          VAR_15, VAR_22->seg_list, &VAR_23,
          VAR_1);
 if (FUNC_2(VAR_25 == VAR_5)) {


  VAR_20 = FUNC_8(VAR_15, VAR_12);
  if (VAR_20 == ((void*)0)) {
   goto drop;
  }
  VAR_14->tx.defrag++;
  VAR_15 = VAR_20;
  VAR_25 = FUNC_3(VAR_22->dmat,
           VAR_22->info[VAR_27].map,
           VAR_15, VAR_22->seg_list, &VAR_23,
           VAR_1);
 }
 if (FUNC_2(VAR_25 != 0)) {
  FUNC_5(VAR_17->dev, "bus_dmamap_load_mbuf_sg returned %d"
         " packet len = %d\n", VAR_25, VAR_15->m_pkthdr.len);
  goto drop;
 }
 FUNC_4(VAR_22->dmat, VAR_22->info[VAR_27].map,
   VAR_0);
 VAR_22->info[VAR_27].m = VAR_15;
 VAR_18 = VAR_22->req_list;
 VAR_31 = 0;
 VAR_29 = 0;
 VAR_30 = VAR_9;


 if (VAR_15->m_pkthdr.csum_flags &
     (VAR_2 | VAR_3)) {


  VAR_31 = VAR_16.ip_off + VAR_16.ip_hlen;
  VAR_29 = VAR_31 + VAR_15->m_pkthdr.csum_data;
  VAR_29 = FUNC_6(VAR_29);
  VAR_18->cksum_offset = VAR_31;
  VAR_30 |= VAR_7;
  VAR_28 = VAR_6;
 } else {
  VAR_28 = 0;
 }
 if (VAR_15->m_pkthdr.len < VAR_11)
  VAR_30 |= VAR_10;


 VAR_24 = 0;
 VAR_19 = VAR_22->seg_list;
 VAR_18->flags = VAR_8;
 for (VAR_26 = 0; VAR_26 < VAR_23; VAR_26++) {
  VAR_18->addr_low =
   FUNC_7(FUNC_1(VAR_19->ds_addr));
  VAR_18->addr_high =
   FUNC_7(FUNC_0(VAR_19->ds_addr));
  VAR_18->length = FUNC_6(VAR_19->ds_len);
  VAR_18->cksum_offset = VAR_31;
  if (VAR_31 > VAR_19->ds_len)
   VAR_31 -= VAR_19->ds_len;
  else
   VAR_31 = 0;
  VAR_18->pseudo_hdr_offset = VAR_29;
  VAR_18->pad = 0;
  VAR_18->rdma_count = 1;
  VAR_18->flags |= VAR_30 | ((VAR_24 & 1) * VAR_28);
  VAR_24 += VAR_19->ds_len;
  VAR_19++;
  VAR_18++;
  VAR_18->flags = 0;
 }
 VAR_18--;

 if (VAR_24 < 60) {
  VAR_18++;
  VAR_18->addr_low =
   FUNC_7(FUNC_1(VAR_17->zeropad_dma.bus_addr));
  VAR_18->addr_high =
   FUNC_7(FUNC_0(VAR_17->zeropad_dma.bus_addr));
  VAR_18->length = FUNC_6(60 - VAR_24);
  VAR_18->cksum_offset = 0;
  VAR_18->pseudo_hdr_offset = VAR_29;
  VAR_18->pad = 0;
  VAR_18->rdma_count = 1;
  VAR_18->flags |= VAR_30 | ((VAR_24 & 1) * VAR_28);
  VAR_23++;
 }

 VAR_22->req_list[0].rdma_count = VAR_23;
 VAR_22->info[((VAR_23 - 1) + VAR_22->req) & VAR_22->mask].flag = 1;
 FUNC_12(VAR_22, VAR_22->req_list, VAR_23);
 return;

drop:
 FUNC_9(VAR_15);
drop_without_m:
 VAR_14->oerrors++;
 return;
}
