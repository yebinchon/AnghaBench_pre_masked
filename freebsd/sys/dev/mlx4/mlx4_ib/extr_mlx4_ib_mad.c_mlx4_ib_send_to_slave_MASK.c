
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_28__ TYPE_9__ ;
typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_14__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u16 ;
struct TYPE_20__ {int g_ml_path; void* slid_mac_47_32; void* sl_vid; int mac_31_0; int flags_src_qp; void* pkey_index; } ;
struct mlx4_rcv_tunnel_mad {char grh; char mad; TYPE_1__ hdr; } ;
struct TYPE_24__ {int*** virt2phys_pkey; } ;
struct TYPE_23__ {TYPE_3__* demux; } ;
struct mlx4_ib_dev {int ib_dev; TYPE_12__* dev; TYPE_5__ pkeys; TYPE_4__ sriov; } ;
struct mlx4_ib_demux_pv_qp {int tx_ix_head; int tx_ix_tail; TYPE_11__* tx_ring; int tx_lock; struct ib_qp* qp; } ;
struct mlx4_ib_demux_pv_ctx {scalar_t__ state; TYPE_14__* pd; struct mlx4_ib_demux_pv_qp* qp; } ;
struct ib_wc {int src_qp; int wc_flags; int vlan_id; int slid; scalar_t__ sl; struct ib_mad* smac; int pkey_index; } ;
struct TYPE_18__ {int wr_id; int num_sge; int send_flags; int opcode; struct ib_sge* sg_list; int * next; } ;
struct ib_ud_wr {size_t port_num; int remote_qpn; TYPE_13__ wr; int remote_qkey; struct ib_ah* ah; } ;
struct ib_sge {int length; int lkey; int addr; } ;
struct ib_send_wr {int dummy; } ;
struct ib_qp {int dummy; } ;
struct TYPE_28__ {struct ib_mad* raw; } ;
struct ib_mad {TYPE_9__ dgid; } ;
struct ib_grh {TYPE_9__ dgid; } ;
struct TYPE_26__ {char* raw; } ;
struct TYPE_27__ {TYPE_7__ dgid; } ;
struct ib_ah_attr {size_t port_num; int ah_flags; TYPE_8__ grh; } ;
struct ib_ah {int dummy; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_25__ {int base_proxy_sqpn; } ;
struct TYPE_22__ {struct mlx4_ib_demux_pv_ctx** tun; } ;
struct TYPE_21__ {scalar_t__* port_type; } ;
struct TYPE_19__ {int local_dma_lkey; } ;
struct TYPE_17__ {TYPE_6__ phys_caps; TYPE_2__ caps; } ;
struct TYPE_15__ {int map; scalar_t__ addr; } ;
struct TYPE_16__ {struct ib_ah* ah; TYPE_10__ buf; } ;


 scalar_t__ VAR_0 ;
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
 scalar_t__ FUNC_0 (struct ib_ah*) ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int) ;
 void* FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct mlx4_ib_dev*,int,size_t,int,int*) ;
 struct ib_ah* FUNC_5 (TYPE_14__*,struct ib_ah_attr*) ;
 int FUNC_6 (struct ib_ah*) ;
 int FUNC_7 (int *,int ,int,int ) ;
 int FUNC_8 (int *,int ,int,int ) ;
 int FUNC_9 (int *,size_t,int ,int*) ;
 int FUNC_10 (struct ib_qp*,TYPE_13__*,struct ib_send_wr**) ;
 int FUNC_11 (char*,struct ib_mad*,int) ;
 int FUNC_12 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_13 (TYPE_12__*,size_t,int,int*,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

int FUNC_16(struct mlx4_ib_dev *VAR_14, int VAR_15, u8 VAR_16,
     enum ib_qp_type VAR_17, struct ib_wc *VAR_18,
     struct ib_grh *VAR_19, struct ib_mad *VAR_20)
{
 struct ib_sge VAR_21;
 struct ib_ud_wr VAR_22;
 struct ib_send_wr *VAR_23;
 struct mlx4_ib_demux_pv_ctx *VAR_24;
 struct mlx4_ib_demux_pv_qp *VAR_25;
 struct mlx4_rcv_tunnel_mad *VAR_26;
 struct ib_ah_attr VAR_27;
 struct ib_ah *VAR_28;
 struct ib_qp *VAR_29 = ((void*)0);
 unsigned VAR_30 = 0;
 int VAR_31;
 int VAR_32 = 0;
 u16 VAR_33;
 u16 VAR_34;
 u8 VAR_35 = VAR_14->dev->caps.port_type[VAR_16] == VAR_13;

 if (VAR_17 > VAR_7)
  return -VAR_3;

 VAR_24 = VAR_14->sriov.demux[VAR_16-1].tun[VAR_15];


 if (!VAR_24 || VAR_24->state != VAR_0)
  return -VAR_2;

 if (!VAR_17)
  VAR_25 = &VAR_24->qp[0];
 else
  VAR_25 = &VAR_24->qp[1];


 if (VAR_17) {
  u16 VAR_36;
  VAR_32 = FUNC_9(&VAR_14->ib_dev, VAR_16, VAR_18->pkey_index, &VAR_34);
  if (VAR_32)
   return -VAR_3;

  VAR_32 = FUNC_4(VAR_14, VAR_15, VAR_16, VAR_34, &VAR_36);
  if (VAR_32)
   return -VAR_3;
  VAR_33 = VAR_36;
 } else
  VAR_33 = VAR_14->pkeys.virt2phys_pkey[VAR_15][VAR_16 - 1][0];

 VAR_31 = VAR_14->dev->phys_caps.base_proxy_sqpn + 8 * VAR_15 + VAR_16 + (VAR_17 * 2) - 1;


 VAR_29 = VAR_25->qp;



 FUNC_12(&VAR_27, 0, sizeof VAR_27);
 VAR_27.port_num = VAR_16;
 if (VAR_35) {
  FUNC_11(&VAR_27.grh.dgid.raw[0], &VAR_19->dgid.raw[0], 16);
  VAR_27.ah_flags = VAR_6;
 }
 VAR_28 = FUNC_5(VAR_24->pd, &VAR_27);
 if (FUNC_0(VAR_28))
  return -VAR_4;


 FUNC_14(&VAR_25->tx_lock);
 if (VAR_25->tx_ix_head - VAR_25->tx_ix_tail >=
     (VAR_12 - 1))
  VAR_32 = -VAR_2;
 else
  VAR_30 = (++VAR_25->tx_ix_head) & (VAR_12 - 1);
 FUNC_15(&VAR_25->tx_lock);
 if (VAR_32)
  goto end;

 VAR_26 = (struct mlx4_rcv_tunnel_mad *) (VAR_25->tx_ring[VAR_30].buf.addr);
 if (VAR_25->tx_ring[VAR_30].ah)
  FUNC_6(VAR_25->tx_ring[VAR_30].ah);
 VAR_25->tx_ring[VAR_30].ah = VAR_28;
 FUNC_7(&VAR_14->ib_dev,
       VAR_25->tx_ring[VAR_30].buf.map,
       sizeof (struct mlx4_rcv_tunnel_mad),
       VAR_1);


 if (VAR_19)
  FUNC_11(&VAR_26->grh, VAR_19, sizeof *VAR_19);
 FUNC_11(&VAR_26->mad, VAR_20, sizeof *VAR_20);


 VAR_26->hdr.pkey_index = FUNC_2(VAR_33);
 VAR_26->hdr.flags_src_qp = FUNC_3(VAR_18->src_qp & 0xFFFFFF);
 VAR_26->hdr.g_ml_path = (VAR_19 && (VAR_18->wc_flags & VAR_10)) ? 0x80 : 0;

 if (VAR_35) {
  u16 VAR_37 = 0;
  if (FUNC_13(VAR_14->dev, VAR_16, VAR_15, &VAR_37,
      ((void*)0))) {

   if (VAR_37 != VAR_18->vlan_id) {



    VAR_32 = -VAR_5;
    goto out;
   } else {



    VAR_37 = 0xffff;
   }
  } else {
   VAR_37 = VAR_18->vlan_id;
  }

  VAR_26->hdr.sl_vid = FUNC_2(VAR_37);
  FUNC_11((char *)&VAR_26->hdr.mac_31_0, &(VAR_18->smac[0]), 4);
  FUNC_11((char *)&VAR_26->hdr.slid_mac_47_32, &(VAR_18->smac[4]), 2);
 } else {
  VAR_26->hdr.sl_vid = FUNC_2(((u16)(VAR_18->sl)) << 12);
  VAR_26->hdr.slid_mac_47_32 = FUNC_2(VAR_18->slid);
 }

 FUNC_8(&VAR_14->ib_dev,
          VAR_25->tx_ring[VAR_30].buf.map,
          sizeof (struct mlx4_rcv_tunnel_mad),
          VAR_1);

 VAR_21.addr = VAR_25->tx_ring[VAR_30].buf.map;
 VAR_21.length = sizeof (struct mlx4_rcv_tunnel_mad);
 VAR_21.lkey = VAR_24->pd->local_dma_lkey;

 VAR_22.ah = VAR_28;
 VAR_22.port_num = VAR_16;
 VAR_22.remote_qkey = VAR_8;
 VAR_22.remote_qpn = VAR_31;
 VAR_22.wr.next = ((void*)0);
 VAR_22.wr.wr_id = ((u64) VAR_30) | FUNC_1(VAR_17);
 VAR_22.wr.sg_list = &VAR_21;
 VAR_22.wr.num_sge = 1;
 VAR_22.wr.opcode = VAR_11;
 VAR_22.wr.send_flags = VAR_9;

 VAR_32 = FUNC_10(VAR_29, &VAR_22.wr, &VAR_23);
 if (!VAR_32)
  return 0;
 out:
 FUNC_14(&VAR_25->tx_lock);
 VAR_25->tx_ix_tail++;
 FUNC_15(&VAR_25->tx_lock);
 VAR_25->tx_ring[VAR_30].ah = ((void*)0);
end:
 FUNC_6(VAR_28);
 return VAR_32;
}
