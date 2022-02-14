
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct res_qp {scalar_t__ qpn; int ref_count; int mirr_mbox; scalar_t__ mirr_rule_id; } ;
struct res_fs_rule {scalar_t__ qpn; int ref_count; int mirr_mbox; scalar_t__ mirr_rule_id; } ;
struct mlx4_vhcr {scalar_t__ in_param; } ;
struct TYPE_2__ {scalar_t__ steering_mode; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
struct mlx4_cmd_mailbox {int dummy; } ;
struct mlx4_cmd_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct mlx4_dev*,int,scalar_t__,int ,struct res_qp**) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx4_dev*,scalar_t__,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct mlx4_dev*,char*) ;
 scalar_t__ FUNC_5 (struct mlx4_dev*) ;
 int FUNC_6 (struct mlx4_dev*,struct res_qp*) ;
 int FUNC_7 (struct mlx4_dev*,int,scalar_t__,int ) ;
 int FUNC_8 (struct mlx4_dev*,int,scalar_t__,int,int ,int ) ;

int FUNC_9(struct mlx4_dev *VAR_8, int VAR_9,
      struct mlx4_vhcr *VAR_10,
      struct mlx4_cmd_mailbox *VAR_11,
      struct mlx4_cmd_mailbox *VAR_12,
      struct mlx4_cmd_info *VAR_13)
{
 int VAR_14;
 struct res_qp *VAR_15;
 struct res_fs_rule *VAR_16;
 u64 VAR_17;

 if (VAR_8->caps.steering_mode !=
     VAR_5)
  return -VAR_1;

 VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_10->in_param, VAR_6, &VAR_16);
 if (VAR_14)
  return VAR_14;

 if (!VAR_16->mirr_mbox) {
  FUNC_4(VAR_8, "Mirror rules cannot be removed explicitly\n");
  FUNC_7(VAR_8, VAR_9, VAR_10->in_param, VAR_6);
  return -VAR_0;
 }
 VAR_17 = VAR_16->mirr_rule_id;
 FUNC_2(VAR_16->mirr_mbox);


 FUNC_7(VAR_8, VAR_9, VAR_10->in_param, VAR_6);
 VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_16->qpn, VAR_7, &VAR_15);
 if (VAR_14)
  return VAR_14;

 if (VAR_17 && FUNC_5(VAR_8)) {
  VAR_14 = FUNC_1(VAR_8, VAR_9, VAR_17, VAR_6, &VAR_16);
  if (VAR_14) {
   FUNC_4(VAR_8, "Fail to get resource of mirror rule\n");
  } else {
   FUNC_7(VAR_8, VAR_9, VAR_17, VAR_6);
   FUNC_6(VAR_8, VAR_16);
  }
 }
 VAR_14 = FUNC_8(VAR_8, VAR_9, VAR_10->in_param, 1, VAR_6, 0);
 if (VAR_14) {
  FUNC_4(VAR_8, "Fail to remove flow steering resources\n");
  goto out;
 }

 VAR_14 = FUNC_3(VAR_8, VAR_10->in_param, 0, 0,
         VAR_4, VAR_3,
         VAR_2);
 if (!VAR_14)
  FUNC_0(&VAR_15->ref_count);
out:
 FUNC_7(VAR_8, VAR_9, VAR_16->qpn, VAR_7);
 return VAR_14;
}
