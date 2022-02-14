
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_7__ {scalar_t__ va; } ;
struct i40e_hmc_pd_table {int pd_entry_virt_mem; int ref_cnt; TYPE_3__ pd_page_addr; struct i40e_hmc_pd_entry* pd_entry; } ;
struct TYPE_5__ {struct i40e_hmc_pd_table pd_table; } ;
struct i40e_hmc_sd_entry {scalar_t__ entry_type; TYPE_1__ u; } ;
struct TYPE_8__ {int addr; scalar_t__ ref_cnt; } ;
struct i40e_hmc_pd_entry {TYPE_4__ bp; int rsrc_pg; int valid; } ;
struct TYPE_6__ {size_t sd_cnt; struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {TYPE_2__ sd_table; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct i40e_hmc_pd_table*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_3 (struct i40e_hw*,size_t,size_t) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct i40e_hw*,int *) ;
 int FUNC_5 (struct i40e_hw*,int *) ;
 int FUNC_6 (int *,int ,int,int ) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_7,
     struct i40e_hmc_info *VAR_8,
     u32 VAR_9)
{
 enum i40e_status_code VAR_10 = VAR_6;
 struct i40e_hmc_pd_entry *VAR_11;
 struct i40e_hmc_pd_table *VAR_12;
 struct i40e_hmc_sd_entry *VAR_13;
 u32 VAR_14, VAR_15;
 u64 *VAR_16;


 VAR_14 = VAR_9 / VAR_4;
 VAR_15 = VAR_9 % VAR_4;
 if (VAR_14 >= VAR_8->sd_table.sd_cnt) {
  VAR_10 = VAR_2;
  FUNC_0("i40e_remove_pd_bp: bad idx\n");
  goto exit;
 }
 VAR_13 = &VAR_8->sd_table.sd_entry[VAR_14];
 if (VAR_5 != VAR_13->entry_type) {
  VAR_10 = VAR_3;
  FUNC_0("i40e_remove_pd_bp: wrong sd_entry type\n");
  goto exit;
 }

 VAR_12 = &VAR_8->sd_table.sd_entry[VAR_14].u.pd_table;
 VAR_11 = &VAR_12->pd_entry[VAR_15];
 FUNC_1(&VAR_11->bp);
 if (VAR_11->bp.ref_cnt)
  goto exit;


 VAR_11->valid = VAR_0;
 FUNC_2(VAR_12);
 VAR_16 = (u64 *)VAR_12->pd_page_addr.va;
 VAR_16 += VAR_15;
 FUNC_6(VAR_16, 0, sizeof(u64), VAR_1);
 FUNC_3(VAR_7, VAR_14, VAR_9);


 if (!VAR_11->rsrc_pg)
  VAR_10 = FUNC_4(VAR_7, &(VAR_11->bp.addr));
 if (VAR_6 != VAR_10)
  goto exit;
 if (!VAR_12->ref_cnt)
  FUNC_5(VAR_7, &VAR_12->pd_entry_virt_mem);
exit:
 return VAR_10;
}
