
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {int g_slid; int dgid; int gid_index; int hop_limit; int sl_tclass_flowlabel; scalar_t__ stat_rate; int dlid; int port_pd; } ;
struct TYPE_6__ {int sl_tclass_flowlabel; } ;
struct TYPE_10__ {TYPE_4__ ib; TYPE_1__ eth; } ;
struct mlx4_ib_ah {TYPE_5__ av; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_8__ {int traffic_class; int flow_label; TYPE_2__ dgid; int sgid_index; int hop_limit; } ;
struct ib_ah_attr {int port_num; int sl; int src_path_bits; TYPE_3__ grh; int ah_flags; scalar_t__ static_rate; int dlid; } ;
struct ib_ah {int device; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_4 (struct mlx4_ib_ah*) ;
 int FUNC_5 (int ,int) ;
 struct mlx4_ib_ah* FUNC_6 (struct ib_ah*) ;

int FUNC_7(struct ib_ah *VAR_4, struct ib_ah_attr *VAR_5)
{
 struct mlx4_ib_ah *VAR_6 = FUNC_6(VAR_4);
 enum rdma_link_layer VAR_7;

 FUNC_3(VAR_5, 0, sizeof *VAR_5);
 VAR_5->port_num = FUNC_1(VAR_6->av.ib.port_pd) >> 24;
 VAR_7 = FUNC_5(VAR_4->device, VAR_5->port_num);
 if (VAR_7 == VAR_1)
  VAR_5->sl = FUNC_1(VAR_6->av.eth.sl_tclass_flowlabel) >> 29;
 else
  VAR_5->sl = FUNC_1(VAR_6->av.ib.sl_tclass_flowlabel) >> 28;

 VAR_5->dlid = VAR_7 == VAR_2 ? FUNC_0(VAR_6->av.ib.dlid) : 0;
 if (VAR_6->av.ib.stat_rate)
  VAR_5->static_rate = VAR_6->av.ib.stat_rate - VAR_3;
 VAR_5->src_path_bits = VAR_6->av.ib.g_slid & 0x7F;

 if (FUNC_4(VAR_6)) {
  VAR_5->ah_flags = VAR_0;

  VAR_5->grh.traffic_class =
   FUNC_1(VAR_6->av.ib.sl_tclass_flowlabel) >> 20;
  VAR_5->grh.flow_label =
   FUNC_1(VAR_6->av.ib.sl_tclass_flowlabel) & 0xfffff;
  VAR_5->grh.hop_limit = VAR_6->av.ib.hop_limit;
  VAR_5->grh.sgid_index = VAR_6->av.ib.gid_index;
  FUNC_2(VAR_5->grh.dgid.raw, VAR_6->av.ib.dgid, 16);
 }

 return 0;
}
