
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef scalar_t__ u32 ;
struct TYPE_6__ {scalar_t__ va; } ;
struct TYPE_4__ {int sd_cnt; TYPE_3__ addr; struct i40e_hmc_sd_entry* sd_entry; scalar_t__ ref_cnt; } ;
struct TYPE_5__ {TYPE_1__ sd_table; scalar_t__ first_sd_index; struct i40e_hmc_obj_info* hmc_obj; TYPE_3__ hmc_obj_virt_mem; int hmc_fn_id; int signature; } ;
struct i40e_hw {TYPE_2__ hmc; int pf_id; } ;
struct i40e_hmc_sd_entry {int dummy; } ;
struct i40e_hmc_obj_info {scalar_t__ max_cnt; int cnt; int size; void* base; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 void* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int VAR_11 ;
 size_t VAR_12 ;
 int VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 void* FUNC_2 (void*) ;
 int FUNC_3 (struct i40e_hw*,TYPE_3__*,int) ;
 int FUNC_4 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_6(struct i40e_hw *VAR_17, u32 VAR_18,
     u32 VAR_19, u32 VAR_20,
     u32 VAR_21)
{
 struct i40e_hmc_obj_info *VAR_22, *VAR_23;
 enum i40e_status_code VAR_24 = VAR_16;
 u64 VAR_25;
 u32 VAR_26;

 VAR_17->hmc.signature = VAR_11;
 VAR_17->hmc.hmc_fn_id = VAR_17->pf_id;


 VAR_24 = FUNC_3(VAR_17, &VAR_17->hmc.hmc_obj_virt_mem,
   sizeof(struct i40e_hmc_obj_info) * VAR_13);
 if (VAR_24)
  goto init_lan_hmc_out;
 VAR_17->hmc.hmc_obj = (struct i40e_hmc_obj_info *)
     VAR_17->hmc.hmc_obj_virt_mem.va;


 VAR_23 = &VAR_17->hmc.hmc_obj[VAR_12];
 VAR_23->max_cnt = 0;
 VAR_23->cnt = 0;
 VAR_23->base = 0;
 VAR_23->size = 0;


 VAR_22 = &VAR_17->hmc.hmc_obj[VAR_15];
 VAR_22->max_cnt = FUNC_5(VAR_17, VAR_5);
 VAR_22->cnt = VAR_18;
 VAR_22->base = 0;
 VAR_26 = FUNC_5(VAR_17, VAR_7);
 VAR_22->size = FUNC_0(VAR_26);


 if (VAR_18 > VAR_22->max_cnt) {
  VAR_24 = VAR_0;
  FUNC_1("i40e_init_lan_hmc: Tx context: asks for 0x%x but max allowed is 0x%x, returns error %d\n",
     VAR_18, VAR_22->max_cnt, VAR_24);
  goto init_lan_hmc_out;
 }


 VAR_23->max_cnt += VAR_22->max_cnt;
 VAR_23->cnt += VAR_22->cnt;


 VAR_22 = &VAR_17->hmc.hmc_obj[VAR_14];
 VAR_22->max_cnt = FUNC_5(VAR_17, VAR_5);
 VAR_22->cnt = VAR_19;
 VAR_22->base = VAR_17->hmc.hmc_obj[VAR_15].base +
      (VAR_17->hmc.hmc_obj[VAR_15].cnt *
       VAR_17->hmc.hmc_obj[VAR_15].size);
 VAR_22->base = FUNC_2(VAR_22->base);
 VAR_26 = FUNC_5(VAR_17, VAR_6);
 VAR_22->size = FUNC_0(VAR_26);


 if (VAR_19 > VAR_22->max_cnt) {
  VAR_24 = VAR_0;
  FUNC_1("i40e_init_lan_hmc: Rx context: asks for 0x%x but max allowed is 0x%x, returns error %d\n",
     VAR_19, VAR_22->max_cnt, VAR_24);
  goto init_lan_hmc_out;
 }


 VAR_23->max_cnt += VAR_22->max_cnt;
 VAR_23->cnt += VAR_22->cnt;


 VAR_22 = &VAR_17->hmc.hmc_obj[VAR_9];
 VAR_22->max_cnt = FUNC_5(VAR_17, VAR_4);
 VAR_22->cnt = VAR_20;
 VAR_22->base = VAR_17->hmc.hmc_obj[VAR_14].base +
      (VAR_17->hmc.hmc_obj[VAR_14].cnt *
       VAR_17->hmc.hmc_obj[VAR_14].size);
 VAR_22->base = FUNC_2(VAR_22->base);
 VAR_26 = FUNC_5(VAR_17, VAR_1);
 VAR_22->size = FUNC_0(VAR_26);


 if (VAR_20 > VAR_22->max_cnt) {
  VAR_24 = VAR_0;
  FUNC_1("i40e_init_lan_hmc: FCoE context: asks for 0x%x but max allowed is 0x%x, returns error %d\n",
     VAR_20, VAR_22->max_cnt, VAR_24);
  goto init_lan_hmc_out;
 }


 VAR_23->max_cnt += VAR_22->max_cnt;
 VAR_23->cnt += VAR_22->cnt;


 VAR_22 = &VAR_17->hmc.hmc_obj[VAR_10];
 VAR_22->max_cnt = FUNC_5(VAR_17, VAR_2);
 VAR_22->cnt = VAR_21;
 VAR_22->base = VAR_17->hmc.hmc_obj[VAR_9].base +
      (VAR_17->hmc.hmc_obj[VAR_9].cnt *
       VAR_17->hmc.hmc_obj[VAR_9].size);
 VAR_22->base = FUNC_2(VAR_22->base);
 VAR_26 = FUNC_5(VAR_17, VAR_3);
 VAR_22->size = FUNC_0(VAR_26);


 if (VAR_21 > VAR_22->max_cnt) {
  VAR_24 = VAR_0;
  FUNC_1("i40e_init_lan_hmc: FCoE filter: asks for 0x%x but max allowed is 0x%x, returns error %d\n",
     VAR_21, VAR_22->max_cnt, VAR_24);
  goto init_lan_hmc_out;
 }


 VAR_23->max_cnt += VAR_22->max_cnt;
 VAR_23->cnt += VAR_22->cnt;

 VAR_17->hmc.first_sd_index = 0;
 VAR_17->hmc.sd_table.ref_cnt = 0;
 VAR_25 = FUNC_4(VAR_18, VAR_19, VAR_20,
            VAR_21);
 if (((void*)0) == VAR_17->hmc.sd_table.sd_entry) {
  VAR_17->hmc.sd_table.sd_cnt = (u32)
       (VAR_25 + VAR_8 - 1) /
       VAR_8;


  VAR_24 = FUNC_3(VAR_17, &VAR_17->hmc.sd_table.addr,
       (sizeof(struct i40e_hmc_sd_entry) *
       VAR_17->hmc.sd_table.sd_cnt));
  if (VAR_24)
   goto init_lan_hmc_out;
  VAR_17->hmc.sd_table.sd_entry =
   (struct i40e_hmc_sd_entry *)VAR_17->hmc.sd_table.addr.va;
 }

 VAR_23->size = VAR_25;

init_lan_hmc_out:
 return VAR_24;
}
