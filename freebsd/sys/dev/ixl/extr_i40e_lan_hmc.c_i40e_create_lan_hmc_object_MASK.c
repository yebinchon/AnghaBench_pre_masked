
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct TYPE_18__ {int pa; } ;
struct TYPE_19__ {TYPE_4__ addr; } ;
struct TYPE_16__ {int pa; } ;
struct TYPE_17__ {TYPE_2__ pd_page_addr; } ;
struct TYPE_20__ {TYPE_5__ bp; TYPE_3__ pd_table; } ;
struct i40e_hmc_sd_entry {int entry_type; TYPE_6__ u; void* valid; } ;
struct i40e_hmc_lan_create_obj_info {scalar_t__ start_idx; size_t rsrc_type; scalar_t__ count; scalar_t__ direct_mode_sz; TYPE_8__* hmc_info; int entry_type; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
struct TYPE_21__ {scalar_t__ sd_cnt; struct i40e_hmc_sd_entry* sd_entry; } ;
struct TYPE_22__ {scalar_t__ signature; TYPE_7__ sd_table; TYPE_1__* hmc_obj; } ;
struct TYPE_15__ {scalar_t__ cnt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 int FUNC_3 (TYPE_8__*,size_t,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;


 int FUNC_4 (struct i40e_hw*,int ,scalar_t__,int) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_5 (struct i40e_hw*,TYPE_8__*,scalar_t__,int *) ;
 int FUNC_6 (struct i40e_hw*,TYPE_8__*,scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 int FUNC_8 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 int FUNC_9 (struct i40e_hw*,TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_11 (scalar_t__,scalar_t__) ;

enum i40e_status_code FUNC_12(struct i40e_hw *VAR_11,
    struct i40e_hmc_lan_create_obj_info *VAR_12)
{
 enum i40e_status_code VAR_13 = VAR_9;
 struct i40e_hmc_sd_entry *VAR_14;
 u32 VAR_15 = 0, VAR_16 = 0;
 u32 VAR_17 = 0, VAR_18 = 0;
 bool VAR_19 = VAR_0;
 u32 VAR_20, VAR_21;
 u64 VAR_22;
 u32 VAR_23, VAR_24;

 if (((void*)0) == VAR_12) {
  VAR_13 = VAR_1;
  FUNC_0("i40e_create_lan_hmc_object: bad info ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_12->hmc_info) {
  VAR_13 = VAR_1;
  FUNC_0("i40e_create_lan_hmc_object: bad hmc_info ptr\n");
  goto exit;
 }
 if (VAR_7 != VAR_12->hmc_info->signature) {
  VAR_13 = VAR_1;
  FUNC_0("i40e_create_lan_hmc_object: bad signature\n");
  goto exit;
 }

 if (VAR_12->start_idx >= VAR_12->hmc_info->hmc_obj[VAR_12->rsrc_type].cnt) {
  VAR_13 = VAR_3;
  FUNC_1("i40e_create_lan_hmc_object: returns error %d\n",
     VAR_13);
  goto exit;
 }
 if ((VAR_12->start_idx + VAR_12->count) >
     VAR_12->hmc_info->hmc_obj[VAR_12->rsrc_type].cnt) {
  VAR_13 = VAR_2;
  FUNC_1("i40e_create_lan_hmc_object: returns error %d\n",
     VAR_13);
  goto exit;
 }


 FUNC_3(VAR_12->hmc_info, VAR_12->rsrc_type,
     VAR_12->start_idx, VAR_12->count,
     &VAR_20, &VAR_21);
 if (VAR_20 >= VAR_12->hmc_info->sd_table.sd_cnt ||
     VAR_21 > VAR_12->hmc_info->sd_table.sd_cnt) {
   VAR_13 = VAR_4;
   goto exit;
 }

 FUNC_2(VAR_12->hmc_info, VAR_12->rsrc_type,
     VAR_12->start_idx, VAR_12->count, &VAR_17,
     &VAR_18);





 if (VAR_12->direct_mode_sz == 0)
  VAR_22 = VAR_6;
 else
  VAR_22 = VAR_12->direct_mode_sz;




 for (VAR_24 = VAR_20; VAR_24 < VAR_21; VAR_24++) {

  VAR_13 = FUNC_6(VAR_11, VAR_12->hmc_info, VAR_24,
         VAR_12->entry_type,
         VAR_22);
  if (VAR_9 != VAR_13)
   goto exit_sd_error;
  VAR_14 = &VAR_12->hmc_info->sd_table.sd_entry[VAR_24];
  if (128 == VAR_14->entry_type) {





   VAR_15 = FUNC_10(VAR_17, (VAR_24 * VAR_8));
   VAR_16 = FUNC_11(VAR_18,
          ((VAR_24 + 1) * VAR_8));
   for (VAR_23 = VAR_15; VAR_23 < VAR_16; VAR_23++) {

    VAR_13 = FUNC_5(VAR_11,
        VAR_12->hmc_info,
        VAR_23, ((void*)0));
    if (VAR_9 != VAR_13) {
     VAR_19 = VAR_10;
     break;
    }
   }
   if (VAR_19) {

    while (VAR_23 && (VAR_23 > VAR_15)) {
     FUNC_7(VAR_11, VAR_12->hmc_info,
         (VAR_23 - 1));
     VAR_23--;
    }
   }
  }
  if (!VAR_14->valid) {
   VAR_14->valid = VAR_10;
   switch (VAR_14->entry_type) {
   case 128:
    FUNC_4(VAR_11,
     VAR_14->u.pd_table.pd_page_addr.pa,
     VAR_24, VAR_14->entry_type);
    break;
   case 129:
    FUNC_4(VAR_11, VAR_14->u.bp.addr.pa,
           VAR_24, VAR_14->entry_type);
    break;
   default:
    VAR_13 = VAR_5;
    goto exit;
   }
  }
 }
 goto exit;

exit_sd_error:

 while (VAR_24 && (VAR_24 > VAR_20)) {
  VAR_14 = &VAR_12->hmc_info->sd_table.sd_entry[VAR_24 - 1];
  switch (VAR_14->entry_type) {
  case 128:
   VAR_15 = FUNC_10(VAR_17,
          ((VAR_24 - 1) * VAR_8));
   VAR_16 = FUNC_11(VAR_18, (VAR_24 * VAR_8));
   for (VAR_23 = VAR_15; VAR_23 < VAR_16; VAR_23++)
    FUNC_7(VAR_11, VAR_12->hmc_info, VAR_23);
   FUNC_8(VAR_11, VAR_12->hmc_info, (VAR_24 - 1));
   break;
  case 129:
   FUNC_9(VAR_11, VAR_12->hmc_info, (VAR_24 - 1));
   break;
  default:
   VAR_13 = VAR_5;
   break;
  }
  VAR_24--;
 }
exit:
 return VAR_13;
}
