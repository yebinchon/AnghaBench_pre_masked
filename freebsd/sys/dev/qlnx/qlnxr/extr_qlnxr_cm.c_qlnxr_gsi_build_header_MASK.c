
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_12__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


union ib_gid {int * raw; } ;
typedef int * u8 ;
typedef void* u32 ;
typedef int u16 ;
struct qlnxr_qp {int sq_psn; } ;
struct qlnxr_dev {TYPE_12__* ha; union ib_gid* sgid_tbl; } ;
struct TYPE_19__ {void* source_qpn; void* qkey; } ;
struct TYPE_18__ {int solicited_event; int opcode; void* psn; void* destination_qpn; int pkey; } ;
struct TYPE_17__ {void* daddr; void* saddr; int ttl; void* frag_off; int tos; int protocol; } ;
struct TYPE_24__ {int * raw; } ;
struct TYPE_23__ {int * raw; } ;
struct TYPE_25__ {int next_header; TYPE_8__ source_gid; TYPE_7__ destination_gid; int hop_limit; int flow_label; int traffic_class; } ;
struct TYPE_22__ {int ** smac_h; int ** dmac_h; void* type; } ;
struct TYPE_21__ {void* type; void* tag; } ;
struct ib_ud_header {TYPE_3__ deth; TYPE_2__ bth; TYPE_1__ ip4; TYPE_9__ grh; TYPE_6__ eth; TYPE_5__ vlan; } ;
struct ib_send_wr {int num_sge; int send_flags; int wr_id; int opcode; TYPE_4__* sg_list; } ;
struct ib_global_route {size_t sgid_index; TYPE_7__ dgid; int hop_limit; int flow_label; int traffic_class; } ;
struct ib_ah_attr {int ** dmac; struct ib_global_route grh; } ;
struct TYPE_20__ {scalar_t__ length; } ;
struct TYPE_16__ {int ** primary_mac; } ;
struct TYPE_15__ {struct ib_ah_attr attr; } ;
struct TYPE_14__ {int remote_qpn; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 (int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (TYPE_12__*,char*) ;
 int FUNC_2 (TYPE_12__*,char*,...) ;
 int VAR_10 ;
 TYPE_11__* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int,int,int,int,int,int,...) ;
 int FUNC_7 (int **,int **,int) ;
 void* FUNC_8 (int *) ;
 int FUNC_9 (struct qlnxr_dev*,struct ib_ah_attr*,int **) ;
 int FUNC_10 (struct ib_ah_attr*,int *) ;
 TYPE_10__* FUNC_11 (struct ib_send_wr*) ;

__attribute__((used)) static inline int
FUNC_12(struct qlnxr_dev *VAR_11,
  struct qlnxr_qp *VAR_12,
  struct ib_send_wr *VAR_13,
  struct ib_ud_header *VAR_14,
  int *VAR_15)
{
 bool VAR_16 = 0, VAR_17 = 1;
 struct ib_ah_attr *VAR_18 = &FUNC_3((FUNC_11(VAR_13)->ah))->attr;
 struct ib_global_route *VAR_19 = &VAR_18->grh;
 union ib_gid VAR_20;
 int VAR_21 = 0;
 u16 VAR_22 = 0;
 u16 VAR_23;
 u8 VAR_24[VAR_0];

 int VAR_25;

 VAR_21 = 0;
 for (VAR_25 = 0; VAR_25 < VAR_13->num_sge; ++VAR_25)
  VAR_21 += VAR_13->sg_list[VAR_25].length;

 VAR_16 = FUNC_10(VAR_18, &VAR_22);
 VAR_23 = VAR_2;
 *VAR_15 = VAR_10;
 if (VAR_19->sgid_index < VAR_8)
  VAR_20 = VAR_11->sgid_tbl[VAR_19->sgid_index];
 else
  VAR_20 = VAR_11->sgid_tbl[0];
 FUNC_6(VAR_21, 0 , 1 ,
     VAR_16, VAR_17, 0 , VAR_14);







 FUNC_9(VAR_11, VAR_18, VAR_24);
 FUNC_7(VAR_14->eth.dmac_h, VAR_24, VAR_0);

 FUNC_7(VAR_14->eth.smac_h, VAR_11->ha->primary_mac, VAR_0);
 if (VAR_16) {
  VAR_14->eth.type = FUNC_5(VAR_1);
  VAR_14->vlan.tag = FUNC_5(VAR_22);
  VAR_14->vlan.type = FUNC_5(VAR_23);
 } else {
  VAR_14->eth.type = FUNC_5(VAR_23);
 }

 for (int VAR_26 = 0; VAR_26 < 4; VAR_26++) {
  FUNC_2(VAR_11->ha, "destination mac: %x\n",
    VAR_14->eth.dmac_h[VAR_26]);
 }
 for (int VAR_27 = 0; VAR_27 < 4; VAR_27++) {
  FUNC_2(VAR_11->ha, "source mac: %x\n",
    VAR_14->eth.smac_h[VAR_27]);
 }

 FUNC_2(VAR_11->ha, "QP: %p, opcode: %d, wq: %lx, roce: %x, hops:%d,"
   "imm : %d, vlan :%d, AH: %p\n",
   VAR_12, VAR_13->opcode, VAR_13->wr_id, *VAR_15, VAR_19->hop_limit,
   0, VAR_16, FUNC_3((FUNC_11(VAR_13)->ah)));

 if (VAR_17) {

  VAR_14->grh.traffic_class = VAR_19->traffic_class;
  VAR_14->grh.flow_label = VAR_19->flow_label;
  VAR_14->grh.hop_limit = VAR_19->hop_limit;
  VAR_14->grh.destination_gid = VAR_19->dgid;
  FUNC_7(&VAR_14->grh.source_gid.raw, &VAR_20.raw,
         sizeof(VAR_14->grh.source_gid.raw));
  FUNC_2(VAR_11->ha, "header: tc: %x, flow_label : %x, "
   "hop_limit: %x \n", VAR_14->grh.traffic_class,
   VAR_14->grh.flow_label, VAR_14->grh.hop_limit);
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   FUNC_2(VAR_11->ha, "udh dgid = %x\n", VAR_14->grh.destination_gid.raw[VAR_25]);
  }
  for (VAR_25 = 0; VAR_25 < 16; VAR_25++) {
   FUNC_2(VAR_11->ha, "udh sgid = %x\n", VAR_14->grh.source_gid.raw[VAR_25]);
  }
  VAR_14->grh.next_header = 0x1b;
 }
 VAR_14->bth.solicited_event = !!(VAR_13->send_flags & VAR_4);
 VAR_14->bth.pkey = VAR_9;

 VAR_14->bth.destination_qpn = FUNC_0(FUNC_11(VAR_13)->remote_qpn);

 VAR_14->bth.psn = FUNC_0((VAR_12->sq_psn++) & ((1 << 24) - 1));
 VAR_14->bth.opcode = VAR_3;




 VAR_14->deth.qkey = FUNC_0(0x80010000);
 VAR_14->deth.source_qpn = FUNC_0(VAR_7);
 FUNC_2(VAR_11->ha, "exit\n");
 return 0;
}
