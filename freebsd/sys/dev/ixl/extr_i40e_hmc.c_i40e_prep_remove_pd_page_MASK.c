
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_4__ {scalar_t__ ref_cnt; } ;
struct TYPE_5__ {TYPE_1__ pd_table; } ;
struct i40e_hmc_sd_entry {int valid; TYPE_2__ u; } ;
struct TYPE_6__ {struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {TYPE_3__ sd_table; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;

enum i40e_status_code FUNC_1(struct i40e_hmc_info *VAR_3,
            u32 VAR_4)
{
 enum i40e_status_code VAR_5 = VAR_2;
 struct i40e_hmc_sd_entry *VAR_6;

 VAR_6 = &VAR_3->sd_table.sd_entry[VAR_4];

 if (VAR_6->u.pd_table.ref_cnt) {
  VAR_5 = VAR_1;
  goto exit;
 }


 VAR_6->valid = VAR_0;

 FUNC_0(&VAR_3->sd_table);
exit:
 return VAR_5;
}
