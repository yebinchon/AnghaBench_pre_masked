
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ asq_last_status; } ;
struct TYPE_4__ {int dcbx_mode; } ;
struct i40e_hw {TYPE_1__ aq; TYPE_2__ remote_dcbx_config; TYPE_2__ local_dcbx_config; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct i40e_hw*,int ,int ,TYPE_2__*) ;

__attribute__((used)) static enum i40e_status_code FUNC_1(struct i40e_hw *VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_5;


 VAR_6->local_dcbx_config.dcbx_mode = VAR_4;

 VAR_7 = FUNC_0(VAR_6, VAR_1, 0,
         &VAR_6->local_dcbx_config);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_0(VAR_6, VAR_2,
         VAR_0,
         &VAR_6->remote_dcbx_config);

 if (VAR_6->aq.asq_last_status == VAR_3)
  VAR_7 = VAR_5;

out:
 return VAR_7;
}
