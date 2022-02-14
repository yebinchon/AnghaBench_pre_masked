
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct mlx4_update_qp_params {int flags; int rate_unit; int rate_val; int qos_vport; int smac_index; } ;
struct TYPE_5__ {int fl; int grh_mylmc; } ;
struct TYPE_6__ {int qos_vport; int rate_limit_params; int param3; TYPE_2__ pri_path; } ;
struct mlx4_update_qp_context {void* qp_mask; void* primary_addr_path_mask; TYPE_3__ qp_context; } ;
struct TYPE_4__ {int flags2; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dma; scalar_t__ buf; } ;
typedef enum mlx4_update_qp_attr { ____Placeholder_mlx4_update_qp_attr } mlx4_update_qp_attr ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mlx4_cmd_mailbox*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 unsigned long long VAR_16 ;
 unsigned long long VAR_17 ;
 unsigned long long VAR_18 ;
 unsigned long long VAR_19 ;
 unsigned long long VAR_20 ;
 int FUNC_1 (struct mlx4_cmd_mailbox*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (unsigned long long) ;
 struct mlx4_cmd_mailbox* FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,int ,int,int ,int ,int ,int ) ;
 int FUNC_7 (struct mlx4_dev*,struct mlx4_cmd_mailbox*) ;
 int FUNC_8 (struct mlx4_dev*,char*) ;

int FUNC_9(struct mlx4_dev *VAR_21, u32 VAR_22,
     enum mlx4_update_qp_attr VAR_23,
     struct mlx4_update_qp_params *VAR_24)
{
 struct mlx4_cmd_mailbox *VAR_25;
 struct mlx4_update_qp_context *VAR_26;
 u64 VAR_27 = 0;
 u64 VAR_28 = 0;
 int VAR_29 = 0;

 if (!VAR_23 || (VAR_23 & ~VAR_14))
  return -VAR_0;

 VAR_25 = FUNC_5(VAR_21);
 if (FUNC_0(VAR_25))
  return FUNC_1(VAR_25);

 VAR_26 = (struct mlx4_update_qp_context *)VAR_25->buf;

 if (VAR_23 & VAR_13) {
  VAR_27 |= 1ULL << VAR_20;
  VAR_26->qp_context.pri_path.grh_mylmc = VAR_24->smac_index;
 }

 if (VAR_23 & VAR_8) {
  if (!(VAR_21->caps.flags2
        & VAR_5)) {
   FUNC_8(VAR_21,
      "Trying to set src check LB, but it isn't supported\n");
   VAR_29 = -VAR_1;
   goto out;
  }
  VAR_27 |=
   1ULL << VAR_19;
  if (VAR_24->flags &
      VAR_9) {
   VAR_26->qp_context.pri_path.fl |=
    VAR_6;
  }
 }

 if (VAR_23 & VAR_15) {
  VAR_28 |= 1ULL << VAR_18;
  if (VAR_24->flags & VAR_10)
   VAR_26->qp_context.param3 |= FUNC_3(VAR_7);
 }

 if (VAR_23 & VAR_12) {
  VAR_28 |= 1ULL << VAR_17;
  VAR_26->qp_context.rate_limit_params = FUNC_2((VAR_24->rate_unit << 14) | VAR_24->rate_val);
 }

 if (VAR_23 & VAR_11) {
  VAR_28 |= 1ULL << VAR_16;
  VAR_26->qp_context.qos_vport = VAR_24->qos_vport;
 }

 VAR_26->primary_addr_path_mask = FUNC_4(VAR_27);
 VAR_26->qp_mask = FUNC_4(VAR_28);

 VAR_29 = FUNC_6(VAR_21, VAR_25->dma, VAR_22 & 0xffffff, 0,
         VAR_4, VAR_3,
         VAR_2);
out:
 FUNC_7(VAR_21, VAR_25);
 return VAR_29;
}
