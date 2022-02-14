
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_20__ {scalar_t__ gso_segs; int gso_size; } ;
union lio_tx_info {TYPE_2__ s; } ;
struct TYPE_16__ {int gatherptrs; int datasize; } ;
struct TYPE_15__ {int iq_no; int ip_csum; int transport_csum; int gather; TYPE_11__ u; } ;
union lio_cmd_setup {TYPE_10__ s; scalar_t__ cmd_setup64; } ;
typedef void* uint64_t ;
typedef int uint32_t ;
struct octeon_instr_irh {int priority; int vlan; } ;
struct octeon_device {TYPE_5__** instr_queue; } ;
struct TYPE_27__ {int csum_flags; int ether_vtag; int tso_segsz; scalar_t__ len; } ;
struct mbuf {int m_flags; TYPE_9__ m_pkthdr; } ;
struct lio_mbuf_free_info {struct lio_gather* g; struct mbuf* mb; int map; } ;
struct lio_request_list {struct lio_mbuf_free_info finfo; int map; } ;
struct lio_iq_stats {int tx_dropped; int tx_tot_bytes; scalar_t__ tx_done; int tx_gso; int tx_dmamap_fail; int mbuf_defrag_failed; int tx_iq_busy; } ;
struct TYPE_21__ {int q_no; } ;
struct TYPE_22__ {TYPE_3__ s; } ;
struct lio_instr_queue {int host_write_index; int txtag; struct lio_request_list* request_list; TYPE_4__ txpciq; struct octeon_device* oct_dev; } ;
struct lio_gather {int sg_size; void* sg_dma_ptr; struct lio_data_pkt* sg; } ;
struct TYPE_19__ {int * ossp; int irh; void* dptr; } ;
struct TYPE_18__ {TYPE_1__ cmd3; } ;
struct lio_data_pkt {int q_no; scalar_t__ datasize; TYPE_13__ cmd; int reqtype; void** ptr; void* buf; } ;
struct TYPE_24__ {int link_up; } ;
struct TYPE_25__ {TYPE_6__ s; } ;
struct TYPE_26__ {TYPE_7__ link; } ;
struct lio {int * glist_lock; int * ghead; TYPE_8__ linfo; int ifstate; } ;
typedef int bus_dmamap_t ;
struct TYPE_17__ {int ds_len; void* ds_addr; } ;
typedef TYPE_12__ bus_dma_segment_t ;
struct TYPE_23__ {struct lio_iq_stats stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,struct mbuf*,TYPE_12__*,int*,int ) ;
 int FUNC_3 (struct lio_data_pkt*,int) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (struct lio_data_pkt*,int ,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (struct octeon_device*,char*,int,...) ;
 int FUNC_8 (struct octeon_device*,char*,...) ;
 int FUNC_9 (struct octeon_device*,char*,int ) ;
 scalar_t__ FUNC_10 (struct octeon_device*,int) ;
 int FUNC_11 (struct octeon_device*,TYPE_13__*,union lio_cmd_setup*,int) ;
 int FUNC_12 (struct octeon_device*,struct lio_data_pkt*) ;
 struct mbuf* FUNC_13 (struct mbuf*,int ) ;
 int FUNC_14 (struct mbuf*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

int
FUNC_17(struct lio *VAR_19, struct lio_instr_queue *VAR_20,
  struct mbuf **VAR_21)
{
 struct lio_data_pkt VAR_22;
 union lio_cmd_setup VAR_23;
 struct lio_mbuf_free_info *VAR_24 = ((void*)0);
 struct octeon_device *VAR_25 = VAR_20->oct_dev;
 struct lio_iq_stats *VAR_26;
 struct octeon_instr_irh *VAR_27;
 struct lio_request_list *VAR_28;
 union lio_tx_info *VAR_29;
 struct mbuf *VAR_30;
 bus_dma_segment_t VAR_31[VAR_14];
 bus_dmamap_t VAR_32;
 uint64_t VAR_33 = 0;
 uint32_t VAR_34 = 0;
 int VAR_35 = 0;
 int VAR_36;
 int VAR_37 = 0;

 VAR_35 = VAR_20->txpciq.s.q_no;
 VAR_34 = VAR_35;
 VAR_26 = &VAR_25->instr_queue[VAR_35]->stats;
 VAR_28 = VAR_20->request_list + VAR_20->host_write_index;





 if (!(FUNC_1(&VAR_19->ifstate) & VAR_12) ||
     (!VAR_19->linfo.link.s.link_up)) {
  FUNC_9(VAR_25, "Transmit failed link_status : %d\n",
        VAR_19->linfo.link.s.link_up);
  VAR_37 = VAR_9;
  goto drop_packet;
 }

 if (FUNC_10(VAR_25, VAR_35)) {

  FUNC_7(VAR_25, "Transmit failed iq:%d full\n", VAR_35);
  VAR_26->tx_iq_busy++;
  return (VAR_10);
 }

 VAR_32 = VAR_28->map;
 VAR_37 = FUNC_2(VAR_20->txtag, VAR_32, *VAR_21, VAR_31, &VAR_36,
      VAR_0);
 if (VAR_37 == VAR_8) {
  struct mbuf *VAR_38;

  VAR_38 = FUNC_13(*VAR_21, VAR_17);
  if (VAR_38 == ((void*)0)) {
   VAR_26->mbuf_defrag_failed++;
   goto drop_packet;
  }

  *VAR_21 = VAR_38;
  VAR_37 = FUNC_2(VAR_20->txtag, VAR_32,
       *VAR_21, VAR_31, &VAR_36,
       VAR_0);
 }

 if (VAR_37 == VAR_11) {
  goto retry;
 } else if (VAR_37) {
  VAR_26->tx_dmamap_fail++;
  FUNC_7(VAR_25, "bus_dmamap_load_mbuf_sg failed with error %d. iq:%d",
       VAR_37, VAR_35);
  goto drop_packet;
 }

 VAR_30 = *VAR_21;


 VAR_24 = &VAR_28->finfo;
 VAR_24->map = VAR_32;
 VAR_24->mb = VAR_30;


 FUNC_3(&VAR_22, sizeof(struct lio_data_pkt));

 VAR_22.buf = (void *)VAR_24;
 VAR_22.q_no = VAR_35;
 VAR_22.datasize = VAR_30->m_pkthdr.len;

 VAR_23.cmd_setup64 = 0;
 VAR_23.s.iq_no = VAR_35;

 if (VAR_30->m_pkthdr.csum_flags & VAR_1)
  VAR_23.s.ip_csum = 1;

 if ((VAR_30->m_pkthdr.csum_flags & (VAR_5 | VAR_2)) ||
     (VAR_30->m_pkthdr.csum_flags & (VAR_7 | VAR_4)))
  VAR_23.s.transport_csum = 1;

 if (VAR_36 == 1) {
  VAR_23.s.u.datasize = VAR_31[0].ds_len;
  FUNC_11(VAR_25, &VAR_22.cmd, &VAR_23, VAR_34);

  VAR_33 = VAR_31[0].ds_addr;
  VAR_22.cmd.cmd3.dptr = VAR_33;
  VAR_22.reqtype = VAR_15;

 } else {
  struct lio_gather *VAR_39;
  int VAR_40;

  FUNC_15(&VAR_19->glist_lock[VAR_35]);
  VAR_39 = (struct lio_gather *)
   FUNC_6(&VAR_19->ghead[VAR_35]);
  FUNC_16(&VAR_19->glist_lock[VAR_35]);

  if (VAR_39 == ((void*)0)) {
   FUNC_8(VAR_25,
        "Transmit scatter gather: glist null!\n");
   goto retry;
  }

  VAR_23.s.gather = 1;
  VAR_23.s.u.gatherptrs = VAR_36;
  FUNC_11(VAR_25, &VAR_22.cmd, &VAR_23, VAR_34);

  FUNC_3(VAR_39->sg, VAR_39->sg_size);

  VAR_40 = 0;
  while (VAR_36--) {
   VAR_39->sg[(VAR_40 >> 2)].ptr[(VAR_40 & 3)] = VAR_31[VAR_40].ds_addr;
   FUNC_5(&VAR_39->sg[(VAR_40 >> 2)], VAR_31[VAR_40].ds_len,
     (VAR_40 & 3));
   VAR_40++;
  }

  VAR_33 = VAR_39->sg_dma_ptr;

  VAR_22.cmd.cmd3.dptr = VAR_33;
  VAR_24->g = VAR_39;

  VAR_22.reqtype = VAR_16;
 }

 VAR_27 = (struct octeon_instr_irh *)&VAR_22.cmd.cmd3.irh;
 VAR_29 = (union lio_tx_info *)&VAR_22.cmd.cmd3.ossp[0];

 if (VAR_30->m_pkthdr.csum_flags & (VAR_6 | VAR_3)) {
  VAR_29->s.gso_size = VAR_30->m_pkthdr.tso_segsz;
  VAR_29->s.gso_segs = FUNC_4(VAR_30->m_pkthdr.len,
           VAR_30->m_pkthdr.tso_segsz);
  VAR_26->tx_gso++;
 }


 if (VAR_30->m_flags & VAR_18) {
  VAR_27->priority = VAR_30->m_pkthdr.ether_vtag >> 13;
  VAR_27->vlan = VAR_30->m_pkthdr.ether_vtag & 0xfff;
 }

 VAR_37 = FUNC_12(VAR_25, &VAR_22);
 if (VAR_37 == VAR_13)
  goto retry;

 if (VAR_29->s.gso_segs)
  VAR_26->tx_done += VAR_29->s.gso_segs;
 else
  VAR_26->tx_done++;

 VAR_26->tx_tot_bytes += VAR_22.datasize;

 return (0);

retry:
 return (VAR_10);

drop_packet:
 VAR_26->tx_dropped++;
 FUNC_8(VAR_25, "IQ%d Transmit dropped: %llu\n", VAR_35,
      FUNC_0(VAR_26->tx_dropped));

 FUNC_14(*VAR_21);
 *VAR_21 = ((void*)0);

 return (VAR_37);
}
