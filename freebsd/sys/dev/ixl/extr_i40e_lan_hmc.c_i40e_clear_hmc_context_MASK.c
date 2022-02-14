
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_4__ {TYPE_1__* hmc_obj; } ;
struct i40e_hw {TYPE_2__ hmc; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_hmc_lan_rsrc_type { ____Placeholder_i40e_hmc_lan_rsrc_type } i40e_hmc_lan_rsrc_type ;
struct TYPE_3__ {scalar_t__ size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;

__attribute__((used)) static enum i40e_status_code FUNC_1(struct i40e_hw *VAR_2,
     u8 *VAR_3,
     enum i40e_hmc_lan_rsrc_type VAR_4)
{

 FUNC_0(VAR_3, 0, (u32)VAR_2->hmc.hmc_obj[VAR_4].size,
      VAR_0);

 return VAR_1;
}
