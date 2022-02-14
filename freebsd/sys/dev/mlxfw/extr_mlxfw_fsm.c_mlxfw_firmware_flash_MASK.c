
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxfw_mfa2_file {int dummy; } ;
struct mlxfw_dev {TYPE_1__* ops; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int (* fsm_lock ) (struct mlxfw_dev*,int *) ;int (* fsm_activate ) (struct mlxfw_dev*,int ) ;int (* fsm_release ) (struct mlxfw_dev*,int ) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct mlxfw_mfa2_file*) ;
 int VAR_1 ;
 int FUNC_1 (struct mlxfw_mfa2_file*) ;
 int FUNC_2 (struct mlxfw_dev*,int ,struct mlxfw_mfa2_file*) ;
 int FUNC_3 (struct mlxfw_dev*,int ,int ) ;
 int FUNC_4 (struct firmware const*) ;
 int FUNC_5 (struct mlxfw_mfa2_file*) ;
 struct mlxfw_mfa2_file* FUNC_6 (struct firmware const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct mlxfw_dev*,int *) ;
 int FUNC_11 (struct mlxfw_dev*,int ) ;
 int FUNC_12 (struct mlxfw_dev*,int ) ;
 int FUNC_13 (struct mlxfw_dev*,int ) ;

int FUNC_14(struct mlxfw_dev *VAR_2,
    const struct firmware *VAR_3)
{
 struct mlxfw_mfa2_file *VAR_4;
 u32 VAR_5;
 int VAR_6;

 if (!FUNC_4(VAR_3)) {
  FUNC_8("Firmware file is not MFA2\n");
  return -VAR_0;
 }

 VAR_4 = FUNC_6(VAR_3);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_9("Initialize firmware flash process\n");
 VAR_6 = VAR_2->ops->fsm_lock(VAR_2, &VAR_5);
 if (VAR_6) {
  FUNC_8("Could not lock the firmware FSM\n");
  goto err_fsm_lock;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_5,
       VAR_1);
 if (VAR_6)
  goto err_state_wait_idle_to_locked;

 VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_4);
 if (VAR_6)
  goto err_flash_components;

 FUNC_7("Activate image\n");
 VAR_6 = VAR_2->ops->fsm_activate(VAR_2, VAR_5);
 if (VAR_6) {
  FUNC_8("Could not activate the downloaded image\n");
  goto err_fsm_activate;
 }

 VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_1);
 if (VAR_6)
  goto err_state_wait_activate_to_locked;

 FUNC_7("Handle release\n");
 VAR_2->ops->fsm_release(VAR_2, VAR_5);

 FUNC_9("Firmware flash done.\n");
 FUNC_5(VAR_4);
 return 0;

err_state_wait_activate_to_locked:
err_fsm_activate:
err_flash_components:
err_state_wait_idle_to_locked:
 VAR_2->ops->fsm_release(VAR_2, VAR_5);
err_fsm_lock:
 FUNC_5(VAR_4);
 return VAR_6;
}
