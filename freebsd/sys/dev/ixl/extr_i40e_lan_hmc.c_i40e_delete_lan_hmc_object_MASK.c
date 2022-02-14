
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef size_t u32 ;
struct i40e_hw {int dummy; } ;
struct i40e_hmc_pd_table {TYPE_3__* pd_entry; } ;
struct i40e_hmc_lan_delete_obj_info {scalar_t__ start_idx; size_t rsrc_type; scalar_t__ count; TYPE_6__* hmc_info; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
struct TYPE_15__ {size_t sd_cnt; TYPE_4__* sd_entry; } ;
struct TYPE_16__ {scalar_t__ signature; TYPE_5__ sd_table; TYPE_1__* hmc_obj; } ;
struct TYPE_12__ {struct i40e_hmc_pd_table pd_table; } ;
struct TYPE_14__ {int entry_type; int valid; TYPE_2__ u; } ;
struct TYPE_13__ {scalar_t__ valid; } ;
struct TYPE_11__ {scalar_t__ cnt; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*) ;
 int FUNC_3 (TYPE_6__*,size_t,scalar_t__,scalar_t__,size_t*,size_t*) ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;


 int VAR_6 ;
 int FUNC_4 (struct i40e_hw*,TYPE_6__*,size_t) ;
 int FUNC_5 (struct i40e_hw*,TYPE_6__*,size_t) ;
 int FUNC_6 (struct i40e_hw*,TYPE_6__*,size_t) ;

enum i40e_status_code FUNC_7(struct i40e_hw *VAR_7,
    struct i40e_hmc_lan_delete_obj_info *VAR_8)
{
 enum i40e_status_code VAR_9 = VAR_6;
 struct i40e_hmc_pd_table *VAR_10;
 u32 VAR_11, VAR_12, VAR_13;
 u32 VAR_14, VAR_15;
 u32 VAR_16, VAR_17;

 if (((void*)0) == VAR_8) {
  VAR_9 = VAR_0;
  FUNC_0("i40e_delete_hmc_object: bad info ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_8->hmc_info) {
  VAR_9 = VAR_0;
  FUNC_0("i40e_delete_hmc_object: bad info->hmc_info ptr\n");
  goto exit;
 }
 if (VAR_4 != VAR_8->hmc_info->signature) {
  VAR_9 = VAR_0;
  FUNC_0("i40e_delete_hmc_object: bad hmc_info->signature\n");
  goto exit;
 }

 if (((void*)0) == VAR_8->hmc_info->sd_table.sd_entry) {
  VAR_9 = VAR_0;
  FUNC_0("i40e_delete_hmc_object: bad sd_entry\n");
  goto exit;
 }

 if (((void*)0) == VAR_8->hmc_info->hmc_obj) {
  VAR_9 = VAR_0;
  FUNC_0("i40e_delete_hmc_object: bad hmc_info->hmc_obj\n");
  goto exit;
 }
 if (VAR_8->start_idx >= VAR_8->hmc_info->hmc_obj[VAR_8->rsrc_type].cnt) {
  VAR_9 = VAR_2;
  FUNC_1("i40e_delete_hmc_object: returns error %d\n",
     VAR_9);
  goto exit;
 }

 if ((VAR_8->start_idx + VAR_8->count) >
     VAR_8->hmc_info->hmc_obj[VAR_8->rsrc_type].cnt) {
  VAR_9 = VAR_1;
  FUNC_1("i40e_delete_hmc_object: returns error %d\n",
     VAR_9);
  goto exit;
 }

 FUNC_2(VAR_8->hmc_info, VAR_8->rsrc_type,
     VAR_8->start_idx, VAR_8->count, &VAR_11,
     &VAR_12);

 for (VAR_17 = VAR_11; VAR_17 < VAR_12; VAR_17++) {
  VAR_14 = VAR_17 / VAR_5;

  if (128 !=
      VAR_8->hmc_info->sd_table.sd_entry[VAR_14].entry_type)
   continue;

  VAR_13 = VAR_17 % VAR_5;

  VAR_10 =
   &VAR_8->hmc_info->sd_table.sd_entry[VAR_14].u.pd_table;
  if (VAR_10->pd_entry[VAR_13].valid) {
   VAR_9 = FUNC_4(VAR_7, VAR_8->hmc_info, VAR_17);
   if (VAR_6 != VAR_9)
    goto exit;
  }
 }


 FUNC_3(VAR_8->hmc_info, VAR_8->rsrc_type,
     VAR_8->start_idx, VAR_8->count,
     &VAR_14, &VAR_15);
 if (VAR_14 >= VAR_8->hmc_info->sd_table.sd_cnt ||
     VAR_15 > VAR_8->hmc_info->sd_table.sd_cnt) {
  VAR_9 = VAR_3;
  goto exit;
 }

 for (VAR_16 = VAR_14; VAR_16 < VAR_15; VAR_16++) {
  if (!VAR_8->hmc_info->sd_table.sd_entry[VAR_16].valid)
   continue;
  switch (VAR_8->hmc_info->sd_table.sd_entry[VAR_16].entry_type) {
  case 129:
   VAR_9 = FUNC_6(VAR_7, VAR_8->hmc_info, VAR_16);
   if (VAR_6 != VAR_9)
    goto exit;
   break;
  case 128:
   VAR_9 = FUNC_5(VAR_7, VAR_8->hmc_info, VAR_16);
   if (VAR_6 != VAR_9)
    goto exit;
   break;
  default:
   break;
  }
 }
exit:
 return VAR_9;
}
