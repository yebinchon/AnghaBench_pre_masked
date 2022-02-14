
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mlx4_func_cap {int flags; int num_ports; int pf_context_behaviour; int qp_quota; int srq_quota; int cq_quota; int mpt_quota; int mtt_quota; int mcg_quota; int max_eq; int reserved_eq; int reserved_lkey; int flags1; int physical_port; int qp0_qkey; int qp0_tunnel_qpn; int qp0_proxy_qpn; int qp1_tunnel_qpn; int qp1_proxy_qpn; int phys_port_id; int flags0; int extra_flags; } ;
struct TYPE_2__ {int num_ports; scalar_t__* port_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int* buf; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int*,int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (struct mlx4_cmd_mailbox*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 struct mlx4_cmd_mailbox* FUNC_3 (struct mlx4_dev*) ;
 int FUNC_4 (struct mlx4_dev*,int ,int ,int,int,int ,int ,int ) ;
 int FUNC_5 (struct mlx4_dev*,char*) ;
 int FUNC_6 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;

int FUNC_7(struct mlx4_dev *VAR_52, u8 VAR_53,
   struct mlx4_func_cap *VAR_54)
{
 struct mlx4_cmd_mailbox *VAR_55;
 u32 *VAR_56;
 u8 VAR_57, VAR_58;
 u32 VAR_59, VAR_60;
 int VAR_61 = 0, VAR_62 = 0;
 u32 VAR_63;
 u32 VAR_64;

 VAR_58 = !!VAR_53;
 VAR_64 = VAR_50 |
  VAR_49;
 VAR_63 = VAR_58 ? VAR_53 : VAR_64;

 VAR_55 = FUNC_3(VAR_52);
 if (FUNC_0(VAR_55))
  return FUNC_2(VAR_55);

 VAR_61 = FUNC_4(VAR_52, 0, VAR_55->dma, VAR_63, VAR_58,
      VAR_3,
      VAR_4, VAR_5);
 if (VAR_61)
  goto out;

 VAR_56 = VAR_55->buf;

 if (!VAR_58) {
  FUNC_1(VAR_57, VAR_56, VAR_21);
  if (!(VAR_57 & (VAR_22 | VAR_24))) {
   FUNC_5(VAR_52, "The host supports neither eth nor rdma interfaces\n");
   VAR_61 = -VAR_2;
   goto out;
  }
  VAR_54->flags = VAR_57;
  VAR_62 = !!(VAR_54->flags & VAR_23);

  FUNC_1(VAR_57, VAR_56, VAR_34);
  VAR_54->num_ports = VAR_57;

  FUNC_1(VAR_59, VAR_56, VAR_35);
  VAR_54->pf_context_behaviour = VAR_59;

  if (VAR_62) {
   FUNC_1(VAR_59, VAR_56, VAR_43);
   VAR_54->qp_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_47);
   VAR_54->srq_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_10);
   VAR_54->cq_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_30);
   VAR_54->mpt_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_32);
   VAR_54->mtt_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_28);
   VAR_54->mcg_quota = VAR_59 & 0xFFFFFF;

  } else {
   FUNC_1(VAR_59, VAR_56, VAR_44);
   VAR_54->qp_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_48);
   VAR_54->srq_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_11);
   VAR_54->cq_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_31);
   VAR_54->mpt_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_33);
   VAR_54->mtt_quota = VAR_59 & 0xFFFFFF;

   FUNC_1(VAR_59, VAR_56, VAR_29);
   VAR_54->mcg_quota = VAR_59 & 0xFFFFFF;
  }
  FUNC_1(VAR_59, VAR_56, VAR_27);
  VAR_54->max_eq = VAR_59 & 0xFFFFFF;

  FUNC_1(VAR_59, VAR_56, VAR_46);
  VAR_54->reserved_eq = VAR_59 & 0xFFFFFF;

  if (VAR_54->flags & VAR_25) {
   FUNC_1(VAR_59, VAR_56, VAR_45);
   VAR_54->reserved_lkey = VAR_59;
  } else {
   VAR_54->reserved_lkey = 0;
  }

  VAR_54->extra_flags = 0;




  if (VAR_54->flags & VAR_26) {
   FUNC_1(VAR_59, VAR_56, VAR_14);
   if (VAR_59 & VAR_13)
    VAR_54->extra_flags |= VAR_9;
   if (VAR_59 & VAR_12)
    VAR_54->extra_flags |= VAR_8;
  }

  goto out;
 }


 if (VAR_53 > VAR_52->caps.num_ports) {
  VAR_61 = -VAR_0;
  goto out;
 }

 FUNC_1(VAR_54->flags1, VAR_56, VAR_20);
 if (VAR_52->caps.port_type[VAR_53] == VAR_6) {
  if (VAR_54->flags1 & VAR_18) {
   FUNC_5(VAR_52, "VLAN is enforced on this port\n");
   VAR_61 = -VAR_2;
   goto out;
  }

  if (VAR_54->flags1 & VAR_17) {
   FUNC_5(VAR_52, "Force mac is enabled on this port\n");
   VAR_61 = -VAR_2;
   goto out;
  }
 } else if (VAR_52->caps.port_type[VAR_53] == VAR_7) {
  FUNC_1(VAR_57, VAR_56, VAR_16);
  if (VAR_57 & VAR_15) {
   FUNC_5(VAR_52, "phy_wqe_gid is enforced on this ib port\n");
   VAR_61 = -VAR_2;
   goto out;
  }
 }

 FUNC_1(VAR_57, VAR_56, VAR_37);
 VAR_54->physical_port = VAR_57;
 if (VAR_54->physical_port != VAR_53) {
  VAR_61 = -VAR_1;
  goto out;
 }

 if (VAR_54->flags1 & VAR_51) {
  FUNC_1(VAR_60, VAR_56, VAR_38);
  VAR_54->qp0_qkey = VAR_60;
 } else {
  VAR_54->qp0_qkey = 0;
 }

 FUNC_1(VAR_59, VAR_56, VAR_40);
 VAR_54->qp0_tunnel_qpn = VAR_59 & 0xFFFFFF;

 FUNC_1(VAR_59, VAR_56, VAR_39);
 VAR_54->qp0_proxy_qpn = VAR_59 & 0xFFFFFF;

 FUNC_1(VAR_59, VAR_56, VAR_42);
 VAR_54->qp1_tunnel_qpn = VAR_59 & 0xFFFFFF;

 FUNC_1(VAR_59, VAR_56, VAR_41);
 VAR_54->qp1_proxy_qpn = VAR_59 & 0xFFFFFF;

 if (VAR_54->flags1 & VAR_19)
  FUNC_1(VAR_54->phys_port_id, VAR_56,
    VAR_36);

 FUNC_1(VAR_54->flags0, VAR_56, VAR_16);
out:
 FUNC_6(VAR_52, VAR_55);

 return VAR_61;
}
