
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_qp_path {scalar_t__ port; int dci_cfi_prio_sl; int grh_mlid; int rgid; int tclass_flowlabel; int hop_limit; int mgid_index; scalar_t__ static_rate; int rlid; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct TYPE_3__ {int raw; } ;
struct TYPE_4__ {int traffic_class; int flow_label; TYPE_1__ dgid; int hop_limit; int sgid_index; } ;
struct ib_ah_attr {scalar_t__ port_num; int sl; int src_path_bits; int ah_flags; TYPE_2__ grh; scalar_t__ static_rate; int dlid; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlx5_core_dev*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (struct ib_ah_attr*,int ,int) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_2, struct ib_ah_attr *VAR_3,
    struct mlx5_qp_path *VAR_4)
{
 struct mlx5_core_dev *VAR_5 = VAR_2->mdev;

 FUNC_4(VAR_3, 0, sizeof(*VAR_3));
 VAR_3->port_num = VAR_4->port;

 if (VAR_3->port_num == 0 ||
     VAR_3->port_num > FUNC_0(VAR_5, VAR_1))
  return;

 VAR_3->sl = VAR_4->dci_cfi_prio_sl & 0xf;

 VAR_3->dlid = FUNC_1(VAR_4->rlid);
 VAR_3->src_path_bits = VAR_4->grh_mlid & 0x7f;
 VAR_3->static_rate = VAR_4->static_rate ? VAR_4->static_rate - 5 : 0;
 VAR_3->ah_flags = (VAR_4->grh_mlid & (1 << 7)) ? VAR_0 : 0;
 if (VAR_3->ah_flags) {
  VAR_3->grh.sgid_index = VAR_4->mgid_index;
  VAR_3->grh.hop_limit = VAR_4->hop_limit;
  VAR_3->grh.traffic_class =
   (FUNC_2(VAR_4->tclass_flowlabel) >> 20) & 0xff;
  VAR_3->grh.flow_label =
   FUNC_2(VAR_4->tclass_flowlabel) & 0xfffff;
  FUNC_3(VAR_3->grh.dgid.raw,
         VAR_4->rgid, sizeof(VAR_3->grh.dgid.raw));
 }
}
