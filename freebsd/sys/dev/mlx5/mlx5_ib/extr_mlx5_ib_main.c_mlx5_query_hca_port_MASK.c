
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u32 ;
struct mlx5_pvlc_reg {int max_msg_sz; int max_vl_num; int vl_hw_cap; void* local_port; int active_mtu; int max_mtu; void* active_speed; int active_width; void* grh_required; void* init_type_reply; void* subnet_timeout; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; int gid_tbl_len; void* port_cap_flags; void* phys_state; void* state; void* sm_sl; void* sm_lid; void* lmc; void* lid; } ;
struct mlx5_ptys_reg {int oper_mtu; int max_mtu; void* local_port; scalar_t__ ib_proto_oper; int ib_link_width_oper; int proto_mask; } ;
struct mlx5_pmtu_reg {int oper_mtu; int max_mtu; void* local_port; scalar_t__ ib_proto_oper; int ib_link_width_oper; int proto_mask; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_core_dev {int dummy; } ;
struct ib_port_attr {int max_msg_sz; int max_vl_num; int vl_hw_cap; void* local_port; int active_mtu; int max_mtu; void* active_speed; int active_width; void* grh_required; void* init_type_reply; void* subnet_timeout; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; int gid_tbl_len; void* port_cap_flags; void* phys_state; void* state; void* sm_sl; void* sm_lid; void* lmc; void* lid; } ;
struct ib_device {int dummy; } ;
typedef int pvlc ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (struct mlx5_core_dev*,int ) ;
 void* FUNC_2 (int ,void*,int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct mlx5_ptys_reg*) ;
 int FUNC_5 (int *) ;
 struct mlx5_ptys_reg* FUNC_6 (int,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (struct mlx5_pvlc_reg*,int ,int) ;
 int FUNC_8 (struct mlx5_core_dev*,struct mlx5_ptys_reg*,int ) ;
 int FUNC_9 (struct mlx5_core_dev*,struct mlx5_ptys_reg*,int ) ;
 int FUNC_10 (struct mlx5_core_dev*,struct mlx5_pvlc_reg*,int ) ;
 int FUNC_11 (int) ;
 int FUNC_12 (struct mlx5_core_dev*,void*,int ,int *,int) ;
 int FUNC_13 (int) ;
 int * FUNC_14 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 struct mlx5_ib_dev* FUNC_15 (struct ib_device*) ;
 int FUNC_16 (struct ib_device*,int ,int *) ;
 int FUNC_17 (struct ib_device*,int ,int *) ;
 int VAR_19 ;

__attribute__((used)) static int FUNC_18(struct ib_device *VAR_20, u8 VAR_21,
          struct ib_port_attr *VAR_22)
{
 struct mlx5_ib_dev *VAR_23 = FUNC_15(VAR_20);
 struct mlx5_core_dev *VAR_24 = VAR_23->mdev;
 u32 *VAR_25;
 int VAR_26 = FUNC_3(VAR_15);
 struct mlx5_ptys_reg *VAR_27;
 struct mlx5_pmtu_reg *VAR_28;
 struct mlx5_pvlc_reg VAR_29;
 void *VAR_30;
 int VAR_31;

 VAR_25 = FUNC_14(VAR_26);
 VAR_27 = FUNC_6(sizeof(*VAR_27), VAR_1);
 VAR_28 = FUNC_6(sizeof(*VAR_28), VAR_1);
 if (!VAR_25 || !VAR_27 || !VAR_28) {
  VAR_31 = -VAR_0;
  goto out;
 }

 FUNC_7(VAR_22, 0, sizeof(*VAR_22));

 VAR_31 = FUNC_12(VAR_24, VAR_21, 0, VAR_25, VAR_26);
 if (VAR_31)
  goto out;

 VAR_30 = FUNC_0(VAR_15, VAR_25, VAR_6);

 VAR_22->lid = FUNC_2(VAR_6, VAR_30, VAR_8);
 VAR_22->lmc = FUNC_2(VAR_6, VAR_30, VAR_9);
 VAR_22->sm_lid = FUNC_2(VAR_6, VAR_30, VAR_16);
 VAR_22->sm_sl = FUNC_2(VAR_6, VAR_30, VAR_17);
 VAR_22->state = FUNC_2(VAR_6, VAR_30, VAR_19);
 VAR_22->phys_state = FUNC_2(VAR_6, VAR_30,
     VAR_13);
 VAR_22->port_cap_flags = FUNC_2(VAR_6, VAR_30, VAR_3);
 VAR_22->gid_tbl_len = FUNC_11(FUNC_1(VAR_24, VAR_4));
 VAR_22->max_msg_sz = 1 << FUNC_1(VAR_24, VAR_10);
 VAR_22->pkey_tbl_len = FUNC_13(FUNC_1(VAR_24, VAR_11));
 VAR_22->bad_pkey_cntr = FUNC_2(VAR_6, VAR_30,
     VAR_12);
 VAR_22->qkey_viol_cntr = FUNC_2(VAR_6, VAR_30,
     VAR_14);
 VAR_22->subnet_timeout = FUNC_2(VAR_6, VAR_30,
     VAR_18);
 VAR_22->init_type_reply = FUNC_2(VAR_6, VAR_30,
     VAR_7);
 VAR_22->grh_required = FUNC_2(VAR_6, VAR_30, VAR_5);

 VAR_27->proto_mask |= VAR_2;
 VAR_27->local_port = VAR_21;
 VAR_31 = FUNC_9(VAR_24, VAR_27, 0);
 if (VAR_31)
  goto out;

 VAR_31 = FUNC_16(VAR_20, VAR_27->ib_link_width_oper,
         &VAR_22->active_width);
 if (VAR_31)
  goto out;

 VAR_22->active_speed = (u8)VAR_27->ib_proto_oper;

 VAR_28->local_port = VAR_21;
 VAR_31 = FUNC_8(VAR_24, VAR_28, 0);
 if (VAR_31)
  goto out;

 VAR_22->max_mtu = VAR_28->max_mtu;
 VAR_22->active_mtu = VAR_28->oper_mtu;

 FUNC_7(&VAR_29, 0, sizeof(VAR_29));
 VAR_29.local_port = VAR_21;
 VAR_31 = FUNC_10(VAR_24, &VAR_29, 0);
 if (VAR_31)
  goto out;

 VAR_31 = FUNC_17(VAR_20, VAR_29.vl_hw_cap,
       &VAR_22->max_vl_num);
out:
 FUNC_5(VAR_25);
 FUNC_4(VAR_27);
 FUNC_4(VAR_28);
 return VAR_31;
}
