
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_23__ ;
typedef struct TYPE_38__ TYPE_21__ ;
typedef struct TYPE_37__ TYPE_20__ ;
typedef struct TYPE_36__ TYPE_1__ ;
typedef struct TYPE_35__ TYPE_19__ ;
typedef struct TYPE_34__ TYPE_18__ ;
typedef struct TYPE_33__ TYPE_17__ ;
typedef struct TYPE_32__ TYPE_16__ ;
typedef struct TYPE_31__ TYPE_15__ ;
typedef struct TYPE_30__ TYPE_14__ ;
typedef struct TYPE_29__ TYPE_13__ ;
typedef struct TYPE_28__ TYPE_12__ ;
typedef struct TYPE_27__ TYPE_11__ ;
typedef struct TYPE_26__ TYPE_10__ ;


struct TYPE_40__ {int interface_id; int subnet_prefix; } ;
union ib_gid {struct mlx4_wqe_inline_seg* raw; TYPE_2__ global; } ;
typedef int u16 ;
struct mlx4_wqe_mlx_seg {int flags; void* sched_prio; void* rlid; } ;
struct mlx4_wqe_inline_seg {int byte_count; } ;
struct mlx4_wqe_ctrl_seg {struct mlx4_wqe_inline_seg imm; struct mlx4_wqe_inline_seg* srcrb_flags16; } ;
struct TYPE_34__ {int qkey; int source_qpn; } ;
struct TYPE_33__ {int solicited_event; int destination_qpn; int psn; void* pkey; int opcode; } ;
struct TYPE_31__ {int service_level; int virtual_lane; void* source_lid; void* destination_lid; } ;
struct TYPE_30__ {void* tag; void* type; } ;
struct TYPE_29__ {void* type; struct mlx4_wqe_inline_seg* dmac_h; union ib_gid* smac_h; } ;
struct TYPE_46__ {scalar_t__ csum; void* sport; void* dport; } ;
struct TYPE_45__ {int tos; int check; struct mlx4_wqe_inline_seg daddr; struct mlx4_wqe_inline_seg saddr; int ttl; void* frag_off; scalar_t__ id; } ;
struct TYPE_43__ {struct mlx4_wqe_inline_seg* raw; } ;
struct TYPE_44__ {int traffic_class; int flow_label; TYPE_5__ destination_gid; union ib_gid source_gid; int hop_limit; } ;
struct TYPE_39__ {int immediate_present; TYPE_18__ deth; TYPE_17__ bth; TYPE_15__ lrh; TYPE_14__ vlan; TYPE_13__ eth; int immediate_data; TYPE_8__ udp; TYPE_7__ ip4; TYPE_6__ grh; } ;
struct TYPE_35__ {unsigned int qp_num; struct ib_device* device; } ;
struct TYPE_37__ {int port; TYPE_19__ ibqp; } ;
struct mlx4_ib_sqp {unsigned int qkey; struct mlx4_wqe_inline_seg* header_buf; TYPE_23__ ud_header; TYPE_20__ qp; int send_psn; int pkey_index; } ;
struct TYPE_27__ {void* vlan; struct mlx4_wqe_inline_seg* mac; int s_mac; int hop_limit; } ;
struct TYPE_26__ {int port_pd; size_t gid_index; int sl_tclass_flowlabel; int g_slid; struct mlx4_wqe_inline_seg* dgid; int hop_limit; void* dlid; } ;
struct TYPE_28__ {TYPE_11__ eth; TYPE_10__ ib; } ;
struct mlx4_ib_ah {TYPE_12__ av; } ;
struct in6_addr {int byte_count; } ;
struct TYPE_47__ {int imm_data; } ;
struct TYPE_32__ {int num_sge; int opcode; int send_flags; TYPE_9__ ex; TYPE_1__* sg_list; } ;
struct ib_ud_wr {unsigned int remote_qpn; int remote_qkey; int pkey_index; TYPE_16__ wr; int ah; } ;
struct ib_gid_attr {scalar_t__ gid_type; scalar_t__ ndev; } ;
struct ib_device {int dummy; } ;
typedef int sgid ;
typedef int in6 ;
typedef int __be32 ;
struct TYPE_42__ {TYPE_3__* demux; } ;
struct TYPE_41__ {int * guid_cache; int subnet_prefix; } ;
struct TYPE_38__ {TYPE_4__ sriov; int dev; } ;
struct TYPE_36__ {scalar_t__ length; } ;


 unsigned int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (union ib_gid*,int ) ;
 void* FUNC_9 (int ) ;
 int FUNC_10 (struct ib_device*,int,size_t,union ib_gid*,struct ib_gid_attr*) ;
 int FUNC_11 (struct ib_device*,int,int ,int*) ;
 int FUNC_12 (int,int,int,int,int,int,int,int ,TYPE_23__*) ;
 int FUNC_13 (TYPE_23__*,struct mlx4_wqe_inline_seg*) ;
 int FUNC_14 (TYPE_23__*) ;
 scalar_t__ FUNC_15 (struct mlx4_wqe_inline_seg*) ;
 int FUNC_16 (union ib_gid*,struct mlx4_wqe_inline_seg*,int) ;
 int FUNC_17 (struct mlx4_wqe_inline_seg*,struct mlx4_wqe_inline_seg*,int) ;
 int FUNC_18 (int ,int,size_t,struct mlx4_wqe_inline_seg*) ;
 int FUNC_19 (struct mlx4_ib_ah*) ;
 scalar_t__ FUNC_20 (int ) ;
 int FUNC_21 (char*,...) ;
 int FUNC_22 (char*,...) ;
 scalar_t__ FUNC_23 (struct ib_device*,int) ;
 int FUNC_24 (TYPE_21__*,int,int) ;
 struct mlx4_ib_ah* FUNC_25 (int ) ;
 TYPE_21__* FUNC_26 (struct ib_device*) ;
 int FUNC_27 () ;
 struct mlx4_wqe_inline_seg VAR_19 ;

__attribute__((used)) static int FUNC_28(struct mlx4_ib_sqp *VAR_20, struct ib_ud_wr *VAR_21,
       void *VAR_22, unsigned *VAR_23)
{
 struct ib_device *VAR_24 = VAR_20->qp.ibqp.device;
 struct mlx4_wqe_mlx_seg *VAR_25 = VAR_22;
 struct mlx4_wqe_ctrl_seg *VAR_26 = VAR_22;
 struct mlx4_wqe_inline_seg *VAR_27 = VAR_22 + sizeof *VAR_25;
 struct mlx4_ib_ah *VAR_28 = FUNC_25(VAR_21->ah);
 union ib_gid VAR_29;
 u16 VAR_30;
 int VAR_31;
 int VAR_32;
 int VAR_33;
 int VAR_34;
 int VAR_35 = 0;
 u16 VAR_36 = 0xffff;
 bool VAR_37;
 bool VAR_38 = 0;
 bool VAR_39;
 bool VAR_40 = 0;
 int VAR_41 = 0;

 VAR_31 = 0;
 for (VAR_34 = 0; VAR_34 < VAR_21->wr.num_sge; ++VAR_34)
  VAR_31 += VAR_21->wr.sg_list[VAR_34].length;

 VAR_37 = FUNC_23(VAR_20->qp.ibqp.device, VAR_20->qp.port) == VAR_6;
 VAR_39 = FUNC_19(VAR_28);
 if (VAR_37) {
  struct ib_gid_attr VAR_42;

  if (FUNC_20(FUNC_26(VAR_24)->dev)) {



   VAR_35 = FUNC_18(FUNC_26(VAR_24)->dev,
          FUNC_3(VAR_28->av.ib.port_pd) >> 24,
          VAR_28->av.ib.gid_index, &VAR_29.raw[0]);
   if (VAR_35)
    return VAR_35;
  } else {
   VAR_35 = FUNC_10(VAR_24,
      FUNC_3(VAR_28->av.ib.port_pd) >> 24,
      VAR_28->av.ib.gid_index, &VAR_29,
      &VAR_42);
   if (!VAR_35) {
    if (VAR_42.ndev)
     FUNC_7(VAR_42.ndev);
    if (!FUNC_16(&VAR_29, &VAR_19, sizeof(VAR_29)))
     VAR_35 = -VAR_1;
   }
   if (!VAR_35) {
    VAR_40 = VAR_42.gid_type == VAR_4;
    if (VAR_40) {
     if (FUNC_15((struct in6_addr *)&VAR_29))
      VAR_41 = 4;
     else
      VAR_41 = 6;
     VAR_39 = 0;
    }
   } else {
    return VAR_35;
   }
  }
  if (VAR_28->av.eth.vlan != FUNC_4(0xffff)) {
   VAR_36 = FUNC_2(VAR_28->av.eth.vlan) & 0x0fff;
   VAR_38 = 1;
  }
 }
 VAR_35 = FUNC_12(VAR_31, !VAR_37, VAR_37, VAR_38, VAR_39,
     VAR_41, VAR_40, 0, &VAR_20->ud_header);
 if (VAR_35)
  return VAR_35;

 if (!VAR_37) {
  VAR_20->ud_header.lrh.service_level =
   FUNC_3(VAR_28->av.ib.sl_tclass_flowlabel) >> 28;
  VAR_20->ud_header.lrh.destination_lid = VAR_28->av.ib.dlid;
  VAR_20->ud_header.lrh.source_lid = FUNC_4(VAR_28->av.ib.g_slid & 0x7f);
 }

 if (VAR_39 || (VAR_41 == 6)) {
  VAR_20->ud_header.grh.traffic_class =
   (FUNC_3(VAR_28->av.ib.sl_tclass_flowlabel) >> 20) & 0xff;
  VAR_20->ud_header.grh.flow_label =
   VAR_28->av.ib.sl_tclass_flowlabel & FUNC_5(0xfffff);
  VAR_20->ud_header.grh.hop_limit = VAR_28->av.ib.hop_limit;
  if (VAR_37) {
   FUNC_17(VAR_20->ud_header.grh.source_gid.raw, VAR_29.raw, 16);
  } else {
   if (FUNC_20(FUNC_26(VAR_24)->dev)) {




    VAR_20->ud_header.grh.source_gid.global.subnet_prefix =
     FUNC_6(FUNC_1(&(FUNC_26(VAR_24)->sriov.
            demux[VAR_20->qp.port - 1].
            subnet_prefix)));
    VAR_20->ud_header.grh.source_gid.global.interface_id =
     FUNC_26(VAR_24)->sriov.demux[VAR_20->qp.port - 1].
             guid_cache[VAR_28->av.ib.gid_index];
   } else {
    FUNC_10(VAR_24,
        FUNC_3(VAR_28->av.ib.port_pd) >> 24,
        VAR_28->av.ib.gid_index,
        &VAR_20->ud_header.grh.source_gid, ((void*)0));
   }
  }
  FUNC_17(VAR_20->ud_header.grh.destination_gid.raw,
         VAR_28->av.ib.dgid, 16);
 }

 if (VAR_41 == 4) {
  VAR_20->ud_header.ip4.tos =
   (FUNC_3(VAR_28->av.ib.sl_tclass_flowlabel) >> 20) & 0xff;
  VAR_20->ud_header.ip4.id = 0;
  VAR_20->ud_header.ip4.frag_off = FUNC_9(VAR_10);
  VAR_20->ud_header.ip4.ttl = VAR_28->av.eth.hop_limit;

  FUNC_17(&VAR_20->ud_header.ip4.saddr,
         VAR_29.raw + 12, 4);
  FUNC_17(&VAR_20->ud_header.ip4.daddr, VAR_28->av.ib.dgid + 12, 4);
  VAR_20->ud_header.ip4.check = FUNC_14(&VAR_20->ud_header);
 }

 if (VAR_40) {
  VAR_20->ud_header.udp.dport = FUNC_9(VAR_18);
  VAR_20->ud_header.udp.sport = FUNC_9(VAR_13);
  VAR_20->ud_header.udp.csum = 0;
 }

 VAR_25->flags &= FUNC_5(VAR_14);

 if (!VAR_37) {
  VAR_25->flags |= FUNC_5((!VAR_20->qp.ibqp.qp_num ? VAR_17 : 0) |
       (VAR_20->ud_header.lrh.destination_lid ==
        VAR_5 ? VAR_16 : 0) |
       (VAR_20->ud_header.lrh.service_level << 8));
  if (VAR_28->av.ib.port_pd & FUNC_5(0x80000000))
   VAR_25->flags |= FUNC_5(0x1);
  VAR_25->rlid = VAR_20->ud_header.lrh.destination_lid;
 }

 switch (VAR_21->wr.opcode) {
 case 129:
  VAR_20->ud_header.bth.opcode = VAR_7;
  VAR_20->ud_header.immediate_present = 0;
  break;
 case 128:
  VAR_20->ud_header.bth.opcode = VAR_8;
  VAR_20->ud_header.immediate_present = 1;
  VAR_20->ud_header.immediate_data = VAR_21->wr.ex.imm_data;
  break;
 default:
  return -VAR_0;
 }

 if (VAR_37) {
  struct in6_addr VAR_43;
  u16 VAR_44;
  u16 VAR_45 = (FUNC_3(VAR_28->av.ib.sl_tclass_flowlabel) >> 29) << 13;

  VAR_44 = (!VAR_40) ? VAR_11 :
   (VAR_41 == 4 ? VAR_2 : VAR_3);

  VAR_25->sched_prio = FUNC_4(VAR_45);

  FUNC_8(VAR_20->ud_header.eth.smac_h, VAR_28->av.eth.s_mac);
  FUNC_17(VAR_20->ud_header.eth.dmac_h, VAR_28->av.eth.mac, 6);
  FUNC_17(&VAR_26->srcrb_flags16[0], VAR_28->av.eth.mac, 2);
  FUNC_17(&VAR_26->imm, VAR_28->av.eth.mac + 2, 4);
  FUNC_17(&VAR_43, VAR_29.raw, sizeof(VAR_43));


  if (!FUNC_16(VAR_20->ud_header.eth.smac_h, VAR_20->ud_header.eth.dmac_h, 6))
   VAR_25->flags |= FUNC_5(VAR_15);
  if (!VAR_38) {
   VAR_20->ud_header.eth.type = FUNC_4(VAR_44);
  } else {
   VAR_20->ud_header.vlan.type = FUNC_4(VAR_44);
   VAR_20->ud_header.vlan.tag = FUNC_4(VAR_36 | VAR_45);
  }
 } else {
  VAR_20->ud_header.lrh.virtual_lane = !VAR_20->qp.ibqp.qp_num ? 15 :
       FUNC_24(FUNC_26(VAR_24),
         VAR_20->ud_header.lrh.service_level,
         VAR_20->qp.port);
  if (VAR_20->qp.ibqp.qp_num && VAR_20->ud_header.lrh.virtual_lane == 15)
   return -VAR_0;
  if (VAR_20->ud_header.lrh.destination_lid == VAR_5)
   VAR_20->ud_header.lrh.source_lid = VAR_5;
 }
 VAR_20->ud_header.bth.solicited_event = !!(VAR_21->wr.send_flags & VAR_9);
 if (!VAR_20->qp.ibqp.qp_num)
  FUNC_11(VAR_24, VAR_20->qp.port, VAR_20->pkey_index, &VAR_30);
 else
  FUNC_11(VAR_24, VAR_20->qp.port, VAR_21->pkey_index, &VAR_30);
 VAR_20->ud_header.bth.pkey = FUNC_4(VAR_30);
 VAR_20->ud_header.bth.destination_qpn = FUNC_5(VAR_21->remote_qpn);
 VAR_20->ud_header.bth.psn = FUNC_5((VAR_20->send_psn++) & ((1 << 24) - 1));
 VAR_20->ud_header.deth.qkey = FUNC_5(VAR_21->remote_qkey & 0x80000000 ?
            VAR_20->qkey : VAR_21->remote_qkey);
 VAR_20->ud_header.deth.source_qpn = FUNC_5(VAR_20->qp.ibqp.qp_num);

 VAR_32 = FUNC_13(&VAR_20->ud_header, VAR_20->header_buf);

 if (0) {
  FUNC_22("built UD header of size %d:\n", VAR_32);
  for (VAR_34 = 0; VAR_34 < VAR_32 / 4; ++VAR_34) {
   if (VAR_34 % 8 == 0)
    FUNC_22("  [%02x] ", VAR_34 * 4);
   FUNC_21(" %08x",
    FUNC_3(((__be32 *) VAR_20->header_buf)[VAR_34]));
   if ((VAR_34 + 1) % 8 == 0)
    FUNC_21("\n");
  }
  FUNC_22("\n");
 }







 VAR_33 = VAR_12 -
  ((unsigned long) (VAR_27 + 1) & (VAR_12 - 1));
 if (VAR_32 <= VAR_33) {
  VAR_27->byte_count = FUNC_5(1U << 31 | VAR_32);
  FUNC_17(VAR_27 + 1, VAR_20->header_buf, VAR_32);
  VAR_34 = 1;
 } else {
  VAR_27->byte_count = FUNC_5(1U << 31 | VAR_33);
  FUNC_17(VAR_27 + 1, VAR_20->header_buf, VAR_33);

  VAR_27 = (void *) (VAR_27 + 1) + VAR_33;
  FUNC_17(VAR_27 + 1, VAR_20->header_buf + VAR_33, VAR_32 - VAR_33);
  FUNC_27();
  VAR_27->byte_count = FUNC_5(1U << 31 | (VAR_32 - VAR_33));
  VAR_34 = 2;
 }

 *VAR_23 =
  FUNC_0(VAR_34 * sizeof (struct mlx4_wqe_inline_seg) + VAR_32, 16);
 return 0;
}
