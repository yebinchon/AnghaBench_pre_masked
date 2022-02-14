
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mlxfw_dev {TYPE_1__* ops; } ;
typedef enum mlxfw_fsm_state_err { ____Placeholder_mlxfw_fsm_state_err } mlxfw_fsm_state_err ;
typedef enum mlxfw_fsm_state { ____Placeholder_mlxfw_fsm_state } mlxfw_fsm_state ;
struct TYPE_2__ {int (* fsm_query_state ) (struct mlxfw_dev*,int ,int*,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (struct mlxfw_dev*,int ,int*,int*) ;

__attribute__((used)) static int FUNC_3(struct mlxfw_dev *VAR_6, u32 VAR_7,
    enum mlxfw_fsm_state VAR_8)
{
 enum mlxfw_fsm_state_err VAR_9;
 enum mlxfw_fsm_state VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_11 = VAR_4;
retry:
 VAR_12 = VAR_6->ops->fsm_query_state(VAR_6, VAR_7,
           &VAR_10, &VAR_9);
 if (VAR_12)
  return VAR_12;

 if (VAR_9 != VAR_2) {
  FUNC_1("Firmware flash failed: %s\n",
         VAR_5[VAR_9]);
  return -VAR_0;
 }
 if (VAR_10 != VAR_8) {
  if (--VAR_11 == 0) {
   FUNC_1("Timeout reached on FSM state change");
   return -VAR_1;
  }
  FUNC_0(VAR_3);
  goto retry;
 }
 return 0;
}
