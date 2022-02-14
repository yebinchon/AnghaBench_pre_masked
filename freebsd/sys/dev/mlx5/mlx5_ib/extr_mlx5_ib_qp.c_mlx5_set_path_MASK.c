
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx5_qp_path {int dci_cfi_prio_sl; int ecn_dscp; int fl_free_ar; int grh_mlid; scalar_t__ mgid_index; int static_rate; int port; int ackto_lt; int rgid; int tclass_flowlabel; int hop_limit; void* rlid; int udp_sport; int rmac; void* pkey_index; } ;
struct TYPE_13__ {int sq; } ;
struct TYPE_12__ {scalar_t__ wqe_cnt; } ;
struct TYPE_11__ {scalar_t__ qp_type; } ;
struct mlx5_ib_qp {TYPE_6__ raw_packet_qp; TYPE_5__ sq; TYPE_4__ ibqp; } ;
struct mlx5_ib_dev {TYPE_7__* mdev; int ib_dev; } ;
struct ib_qp_attr {int alt_timeout; int timeout; int pkey_index; int alt_pkey_index; } ;
struct TYPE_9__ {int raw; } ;
struct TYPE_10__ {scalar_t__ sgid_index; int traffic_class; int flow_label; TYPE_2__ dgid; int hop_limit; } ;
struct ib_ah_attr {int ah_flags; int sl; int src_path_bits; int static_rate; TYPE_3__ grh; int dlid; int dmac; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_14__ {TYPE_1__* port_caps; } ;
struct TYPE_8__ {scalar_t__ gid_table_len; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct mlx5_ib_dev*,int,scalar_t__,int*) ;
 int FUNC_5 (struct mlx5_ib_dev*,int,scalar_t__) ;
 int FUNC_6 (TYPE_7__*,int *,int) ;
 int FUNC_7 (char*,scalar_t__,scalar_t__) ;
 int FUNC_8 (int *,int) ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_dev *VAR_9, struct mlx5_ib_qp *VAR_10,
    const struct ib_ah_attr *VAR_11,
    struct mlx5_qp_path *VAR_12, u8 VAR_13, int VAR_14,
    u32 VAR_15, const struct ib_qp_attr *VAR_16,
    bool VAR_17)
{
 enum rdma_link_layer VAR_18 = FUNC_8(&VAR_9->ib_dev, VAR_13);
 int VAR_19;
 enum ib_gid_type VAR_20;

 if (VAR_14 & VAR_5)
  VAR_12->pkey_index = FUNC_0(VAR_17 ? VAR_16->alt_pkey_index :
           VAR_16->pkey_index);

 if (VAR_11->ah_flags & VAR_1) {
  if (VAR_11->grh.sgid_index >=
      VAR_9->mdev->port_caps[VAR_13 - 1].gid_table_len) {
   FUNC_7("sgid_index (%u) too large. max is %d\n",
          VAR_11->grh.sgid_index,
          VAR_9->mdev->port_caps[VAR_13 - 1].gid_table_len);
   return -VAR_0;
  }
 }

 if (VAR_18 == VAR_3) {
  if (!(VAR_11->ah_flags & VAR_1))
   return -VAR_0;
  VAR_19 = FUNC_4(VAR_9, VAR_13, VAR_11->grh.sgid_index,
          &VAR_20);
  if (VAR_19)
   return VAR_19;
  FUNC_3(VAR_12->rmac, VAR_11->dmac, sizeof(VAR_11->dmac));
  VAR_12->udp_sport = FUNC_5(VAR_9, VAR_13,
         VAR_11->grh.sgid_index);
  VAR_12->dci_cfi_prio_sl = (VAR_11->sl & 0x7) << 4;
  if (VAR_20 == VAR_2)
   VAR_12->ecn_dscp = (VAR_11->grh.traffic_class >> 2) & 0x3f;
 } else {
  VAR_12->fl_free_ar = (VAR_15 & VAR_7) ? 0x80 : 0;
  VAR_12->fl_free_ar |=
   (VAR_15 & VAR_8) ? 0x40 : 0;
  VAR_12->rlid = FUNC_0(VAR_11->dlid);
  VAR_12->grh_mlid = VAR_11->src_path_bits & 0x7f;
  if (VAR_11->ah_flags & VAR_1)
   VAR_12->grh_mlid |= 1 << 7;
  VAR_12->dci_cfi_prio_sl = VAR_11->sl & 0xf;
 }

 if (VAR_11->ah_flags & VAR_1) {
  VAR_12->mgid_index = VAR_11->grh.sgid_index;
  VAR_12->hop_limit = VAR_11->grh.hop_limit;
  VAR_12->tclass_flowlabel =
   FUNC_1((VAR_11->grh.traffic_class << 20) |
        (VAR_11->grh.flow_label));
  FUNC_3(VAR_12->rgid, VAR_11->grh.dgid.raw, 16);
 }

 VAR_19 = FUNC_2(VAR_9, VAR_11->static_rate);
 if (VAR_19 < 0)
  return VAR_19;
 VAR_12->static_rate = VAR_19;
 VAR_12->port = VAR_13;

 if (VAR_14 & VAR_6)
  VAR_12->ackto_lt = (VAR_17 ? VAR_16->alt_timeout : VAR_16->timeout) << 3;

 if ((VAR_10->ibqp.qp_type == VAR_4) && VAR_10->sq.wqe_cnt)
  return FUNC_6(VAR_9->mdev,
        &VAR_10->raw_packet_qp.sq,
        VAR_11->sl & 0xf);

 return 0;
}
