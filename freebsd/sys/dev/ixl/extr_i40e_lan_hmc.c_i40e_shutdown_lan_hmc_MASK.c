
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * sd_entry; scalar_t__ sd_cnt; int addr; } ;
struct TYPE_4__ {int * hmc_obj; int hmc_obj_virt_mem; TYPE_1__ sd_table; } ;
struct i40e_hw {TYPE_2__ hmc; } ;
struct i40e_hmc_lan_delete_obj_info {int count; scalar_t__ start_idx; int rsrc_type; TYPE_2__* hmc_info; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (struct i40e_hw*,struct i40e_hmc_lan_delete_obj_info*) ;
 int FUNC_1 (struct i40e_hw*,int *) ;

enum i40e_status_code FUNC_2(struct i40e_hw *VAR_1)
{
 struct i40e_hmc_lan_delete_obj_info VAR_2;
 enum i40e_status_code VAR_3;

 VAR_2.hmc_info = &VAR_1->hmc;
 VAR_2.rsrc_type = VAR_0;
 VAR_2.start_idx = 0;
 VAR_2.count = 1;


 VAR_3 = FUNC_0(VAR_1, &VAR_2);


 FUNC_1(VAR_1, &VAR_1->hmc.sd_table.addr);
 VAR_1->hmc.sd_table.sd_cnt = 0;
 VAR_1->hmc.sd_table.sd_entry = ((void*)0);


 FUNC_1(VAR_1, &VAR_1->hmc.hmc_obj_virt_mem);
 VAR_1->hmc.hmc_obj = ((void*)0);

 return VAR_3;
}
