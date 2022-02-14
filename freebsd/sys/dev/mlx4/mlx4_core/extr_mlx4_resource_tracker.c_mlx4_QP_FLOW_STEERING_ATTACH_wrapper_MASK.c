
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct res_qp {int ref_count; scalar_t__ mirr_mbox; scalar_t__ mirr_rule_id; int mirr_mbox_size; } ;
struct res_fs_rule {int ref_count; scalar_t__ mirr_mbox; scalar_t__ mirr_rule_id; int mirr_mbox_size; } ;
struct mlx4_vhcr {int in_modifier; int out_param; } ;
struct mlx4_resource_tracker {TYPE_3__* slave_list; } ;
struct TYPE_5__ {struct mlx4_resource_tracker res_tracker; } ;
struct TYPE_6__ {TYPE_1__ master; } ;
struct mlx4_priv {TYPE_2__ mfunc; } ;
struct mlx4_net_trans_rule_hw_eth {int dummy; } ;
struct mlx4_net_trans_rule_hw_ctrl {int port; int qpn; } ;
struct TYPE_8__ {scalar_t__ steering_mode; int function; } ;
struct mlx4_dev {TYPE_4__ caps; } ;
struct mlx4_cmd_mailbox {scalar_t__ buf; int dma; } ;
struct mlx4_cmd_info {int dummy; } ;
struct list_head {int dummy; } ;
struct _rule_hw {int id; } ;
struct TYPE_7__ {struct list_head* res_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;





 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct mlx4_dev*,int,struct mlx4_cmd_mailbox*,struct list_head*,int) ;
 int FUNC_1 (struct mlx4_dev*,int,int,int,int ,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct mlx4_dev*,int,int,int ,struct res_qp**) ;
 int FUNC_6 (struct mlx4_net_trans_rule_hw_ctrl*,struct _rule_hw*) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (struct mlx4_dev*,int,int ,int ,int ,int ,int ) ;
 int FUNC_11 (struct mlx4_dev*,int ,int*,int,int ,int ,int ,int ) ;
 int FUNC_12 (struct mlx4_dev*,struct res_qp*) ;
 int FUNC_13 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_14 (struct mlx4_dev*) ;
 struct mlx4_priv* FUNC_15 (struct mlx4_dev*) ;
 int FUNC_16 (struct mlx4_dev*,int,int) ;
 int FUNC_17 (char*,...) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct mlx4_dev*,int,int,int ) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (int,struct _rule_hw*,struct list_head*) ;

int FUNC_22(struct mlx4_dev *VAR_12, int VAR_13,
      struct mlx4_vhcr *VAR_14,
      struct mlx4_cmd_mailbox *VAR_15,
      struct mlx4_cmd_mailbox *VAR_16,
      struct mlx4_cmd_info *VAR_17)
{

 struct mlx4_priv *VAR_18 = FUNC_15(VAR_12);
 struct mlx4_resource_tracker *VAR_19 = &VAR_18->mfunc.master.res_tracker;
 struct list_head *VAR_20 = &VAR_19->slave_list[VAR_13].res_list[VAR_10];
 int VAR_21;
 int VAR_22;
 struct res_qp *VAR_23;
 struct mlx4_net_trans_rule_hw_ctrl *VAR_24;
 struct _rule_hw *VAR_25;
 int VAR_26;
 struct res_fs_rule *VAR_27;
 u32 VAR_28;

 if (VAR_12->caps.steering_mode !=
     VAR_8)
  return -VAR_2;

 VAR_24 = (struct mlx4_net_trans_rule_hw_ctrl *)VAR_15->buf;
 VAR_21 = FUNC_16(VAR_12, VAR_13, VAR_24->port);
 if (VAR_21 <= 0)
  return -VAR_0;
 VAR_24->port = VAR_21;
 VAR_22 = FUNC_4(VAR_24->qpn) & 0xffffff;
 VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_22, VAR_11, &VAR_23);
 if (VAR_21) {
  FUNC_17("Steering rule with qpn 0x%x rejected\n", VAR_22);
  return VAR_21;
 }
 VAR_25 = (struct _rule_hw *)(VAR_24 + 1);
 VAR_26 = FUNC_8(FUNC_3(VAR_25->id));

 if (VAR_26 == 132)
  FUNC_6(VAR_24, VAR_25);

 if (VAR_13 == VAR_12->caps.function)
  goto execute;

 switch (VAR_26) {
 case 132:
  if (FUNC_21(VAR_13, VAR_25, VAR_20)) {
   VAR_21 = -VAR_0;
   goto err_put_qp;
  }
  break;
 case 131:
  break;
 case 130:
 case 129:
 case 128:
  FUNC_18("Can't attach FS rule without L2 headers, adding L2 header\n");
  if (FUNC_0(VAR_12, VAR_13, VAR_15, VAR_20, VAR_26)) {
   VAR_21 = -VAR_0;
   goto err_put_qp;
  }
  VAR_14->in_modifier +=
   sizeof(struct mlx4_net_trans_rule_hw_eth) >> 2;
  break;
 default:
  FUNC_17("Corrupted mailbox\n");
  VAR_21 = -VAR_0;
  goto err_put_qp;
 }

execute:
 VAR_21 = FUNC_11(VAR_12, VAR_15->dma, &VAR_14->out_param,
      VAR_14->in_modifier, 0,
      VAR_6, VAR_5,
      VAR_4);
 if (VAR_21)
  goto err_put_qp;


 VAR_21 = FUNC_1(VAR_12, VAR_13, VAR_14->out_param, 1, VAR_9, VAR_22);
 if (VAR_21) {
  FUNC_13(VAR_12, "Fail to add flow steering resources\n");
  goto err_detach;
 }

 VAR_21 = FUNC_5(VAR_12, VAR_13, VAR_14->out_param, VAR_9, &VAR_27);
 if (VAR_21)
  goto err_detach;

 VAR_28 = FUNC_20(VAR_15->buf);
 VAR_27->mirr_mbox = FUNC_7(VAR_28, VAR_3);
 if (!VAR_27->mirr_mbox) {
  VAR_21 = -VAR_1;
  goto err_put_rule;
 }
 VAR_27->mirr_mbox_size = VAR_28;
 VAR_27->mirr_rule_id = 0;
 FUNC_9(VAR_27->mirr_mbox, VAR_15->buf, VAR_28);


 VAR_24 = (struct mlx4_net_trans_rule_hw_ctrl *)VAR_27->mirr_mbox;
 if (VAR_24->port == 1)
  VAR_24->port = 2;
 else
  VAR_24->port = 1;

 if (FUNC_14(VAR_12))
  FUNC_12(VAR_12, VAR_27);

 FUNC_2(&VAR_23->ref_count);

err_put_rule:
 FUNC_19(VAR_12, VAR_13, VAR_14->out_param, VAR_9);
err_detach:

 if (VAR_21)
  FUNC_10(VAR_12, VAR_14->out_param, 0, 0,
    VAR_7, VAR_5,
    VAR_4);
err_put_qp:
 FUNC_19(VAR_12, VAR_13, VAR_22, VAR_11);
 return VAR_21;
}
