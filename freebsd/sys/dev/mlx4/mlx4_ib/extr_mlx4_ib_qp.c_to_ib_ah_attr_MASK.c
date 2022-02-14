
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mlx4_qp_path {int sched_queue; int grh_mylmc; int rgid; int tclass_flowlabel; int hop_limit; int mgid_index; scalar_t__ static_rate; int rlid; } ;
struct mlx4_ib_dev {int ib_dev; struct mlx4_dev* dev; } ;
struct TYPE_4__ {scalar_t__ num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int traffic_class; int flow_label; TYPE_2__ dgid; int hop_limit; int sgid_index; } ;
struct ib_ah_attr {int port_num; int sl; int src_path_bits; int ah_flags; TYPE_3__ grh; scalar_t__ static_rate; int dlid; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;
 scalar_t__ FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mlx4_ib_dev *VAR_2, struct ib_ah_attr *VAR_3,
    struct mlx4_qp_path *VAR_4)
{
 struct mlx4_dev *VAR_5 = VAR_2->dev;
 int VAR_6;

 FUNC_3(VAR_3, 0, sizeof *VAR_3);
 VAR_3->port_num = VAR_4->sched_queue & 0x40 ? 2 : 1;

 if (VAR_3->port_num == 0 || VAR_3->port_num > VAR_5->caps.num_ports)
  return;

 VAR_6 = FUNC_4(&VAR_2->ib_dev, VAR_3->port_num) ==
  VAR_1;
 if (VAR_6)
  VAR_3->sl = ((VAR_4->sched_queue >> 3) & 0x7) |
  ((VAR_4->sched_queue & 4) << 1);
 else
  VAR_3->sl = (VAR_4->sched_queue >> 2) & 0xf;

 VAR_3->dlid = FUNC_0(VAR_4->rlid);
 VAR_3->src_path_bits = VAR_4->grh_mylmc & 0x7f;
 VAR_3->static_rate = VAR_4->static_rate ? VAR_4->static_rate - 5 : 0;
 VAR_3->ah_flags = (VAR_4->grh_mylmc & (1 << 7)) ? VAR_0 : 0;
 if (VAR_3->ah_flags) {
  VAR_3->grh.sgid_index = VAR_4->mgid_index;
  VAR_3->grh.hop_limit = VAR_4->hop_limit;
  VAR_3->grh.traffic_class =
   (FUNC_1(VAR_4->tclass_flowlabel) >> 20) & 0xff;
  VAR_3->grh.flow_label =
   FUNC_1(VAR_4->tclass_flowlabel) & 0xfffff;
  FUNC_2(VAR_3->grh.dgid.raw,
   VAR_4->rgid, sizeof VAR_3->grh.dgid.raw);
 }
}
