
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_10__ {size_t sd_pd_index; int addr; } ;
struct TYPE_8__ {scalar_t__ va; } ;
struct TYPE_6__ {int pd_page_addr; TYPE_3__ pd_entry_virt_mem; struct i40e_hmc_pd_entry* pd_entry; } ;
struct TYPE_7__ {TYPE_5__ bp; TYPE_1__ pd_table; } ;
struct i40e_hmc_sd_entry {int entry_type; TYPE_2__ u; int valid; } ;
struct i40e_hmc_pd_entry {int dummy; } ;
struct TYPE_9__ {size_t sd_cnt; struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {TYPE_4__ sd_table; } ;
struct i40e_dma_mem {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_sd_entry_type { ____Placeholder_i40e_sd_entry_type } i40e_sd_entry_type ;
typedef enum i40e_memory_type { ____Placeholder_i40e_memory_type } i40e_memory_type ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (TYPE_4__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct i40e_hw*,struct i40e_dma_mem*,int,int ,int ) ;
 int FUNC_4 (struct i40e_hw*,TYPE_3__*,int) ;
 int FUNC_5 (struct i40e_hw*,struct i40e_dma_mem*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *,struct i40e_dma_mem*,int,int ) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_12,
           struct i40e_hmc_info *VAR_13,
           u32 VAR_14,
           enum i40e_sd_entry_type VAR_15,
           u64 VAR_16)
{
 enum i40e_status_code VAR_17 = VAR_8;
 struct i40e_hmc_sd_entry *VAR_18;
 enum i40e_memory_type VAR_19;
 bool VAR_20 = VAR_0;
 struct i40e_dma_mem VAR_21;
 u64 VAR_22;

 if (((void*)0) == VAR_13->sd_table.sd_entry) {
  VAR_17 = VAR_1;
  FUNC_0("i40e_add_sd_table_entry: bad sd_entry\n");
  goto exit;
 }

 if (VAR_14 >= VAR_13->sd_table.sd_cnt) {
  VAR_17 = VAR_2;
  FUNC_0("i40e_add_sd_table_entry: bad sd_index\n");
  goto exit;
 }

 VAR_18 = &VAR_13->sd_table.sd_entry[VAR_14];
 if (!VAR_18->valid) {
  if (VAR_7 == VAR_15) {
   VAR_19 = VAR_11;
   VAR_22 = VAR_3;
  } else {
   VAR_19 = VAR_10;
   VAR_22 = VAR_16;
  }


  VAR_17 = FUNC_3(VAR_12, &VAR_21, VAR_19, VAR_22,
       VAR_4);
  if (VAR_17)
   goto exit;
  VAR_20 = VAR_9;
  if (VAR_7 == VAR_15) {
   VAR_17 = FUNC_4(VAR_12,
     &VAR_18->u.pd_table.pd_entry_virt_mem,
     sizeof(struct i40e_hmc_pd_entry) * 512);
   if (VAR_17)
    goto exit;
   VAR_18->u.pd_table.pd_entry =
    (struct i40e_hmc_pd_entry *)
    VAR_18->u.pd_table.pd_entry_virt_mem.va;
   FUNC_6(&VAR_18->u.pd_table.pd_page_addr,
        &VAR_21, sizeof(struct i40e_dma_mem),
        VAR_5);
  } else {
   FUNC_6(&VAR_18->u.bp.addr,
        &VAR_21, sizeof(struct i40e_dma_mem),
        VAR_5);
   VAR_18->u.bp.sd_pd_index = VAR_14;
  }

  VAR_13->sd_table.sd_entry[VAR_14].entry_type = VAR_15;


  FUNC_2(&VAR_13->sd_table);
 }

 if (VAR_6 == VAR_18->entry_type)
  FUNC_1(&VAR_18->u.bp);
exit:
 if (VAR_8 != VAR_17)
  if (VAR_20)
   FUNC_5(VAR_12, &VAR_21);

 return VAR_17;
}
