
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {int dummy; } ;
struct ib_ah {int dummy; } ;
struct TYPE_4__ {int stat_rate_sl; int fl_mlid; int rlid; int udp_sport; int rmac; int tclass; int hop_limit; int grh_gid_fl; int rgid; } ;
struct mlx5_ib_ah {struct ib_ah ibah; TYPE_2__ av; } ;
struct TYPE_3__ {int flow_label; int sgid_index; int traffic_class; int hop_limit; int dgid; } ;
struct ib_ah_attr {int ah_flags; int static_rate; int sl; int src_path_bits; int dlid; TYPE_1__ grh; int port_num; int * dmac; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,int ,int) ;

__attribute__((used)) static struct ib_ah *FUNC_4(struct mlx5_ib_dev *VAR_2,
      struct mlx5_ib_ah *VAR_3,
      struct ib_ah_attr *VAR_4,
      enum rdma_link_layer VAR_5)
{
 if (VAR_4->ah_flags & VAR_0) {
  FUNC_2(VAR_3->av.rgid, &VAR_4->grh.dgid, 16);
  VAR_3->av.grh_gid_fl = FUNC_1(VAR_4->grh.flow_label |
      (1 << 30) |
      VAR_4->grh.sgid_index << 20);
  VAR_3->av.hop_limit = VAR_4->grh.hop_limit;
  VAR_3->av.tclass = VAR_4->grh.traffic_class;
 }

 VAR_3->av.stat_rate_sl = (VAR_4->static_rate << 4);

 if (VAR_5 == VAR_1) {
  FUNC_2(VAR_3->av.rmac, VAR_4->dmac, sizeof(VAR_4->dmac));
  VAR_3->av.udp_sport =
   FUNC_3(VAR_2,
      VAR_4->port_num,
      VAR_4->grh.sgid_index);
  VAR_3->av.stat_rate_sl |= (VAR_4->sl & 0x7) << 1;
 } else {
  VAR_3->av.rlid = FUNC_0(VAR_4->dlid);
  VAR_3->av.fl_mlid = VAR_4->src_path_bits & 0x7f;
  VAR_3->av.stat_rate_sl |= (VAR_4->sl & 0xf);
 }

 return &VAR_3->ibah;
}
