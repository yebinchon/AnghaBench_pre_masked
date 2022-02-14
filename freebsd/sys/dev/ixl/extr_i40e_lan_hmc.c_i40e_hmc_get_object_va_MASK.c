
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef size_t u32 ;
struct TYPE_9__ {struct i40e_hmc_sd_entry* sd_entry; } ;
struct i40e_hmc_info {scalar_t__ signature; TYPE_2__* hmc_obj; TYPE_1__ sd_table; } ;
struct i40e_hw {struct i40e_hmc_info hmc; } ;
struct TYPE_14__ {scalar_t__ va; } ;
struct TYPE_15__ {TYPE_6__ addr; } ;
struct TYPE_11__ {struct i40e_hmc_pd_entry* pd_entry; } ;
struct TYPE_16__ {TYPE_7__ bp; TYPE_3__ pd_table; } ;
struct i40e_hmc_sd_entry {scalar_t__ entry_type; TYPE_8__ u; } ;
struct TYPE_12__ {scalar_t__ va; } ;
struct TYPE_13__ {TYPE_4__ addr; } ;
struct i40e_hmc_pd_entry {TYPE_5__ bp; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_hmc_lan_rsrc_type { ____Placeholder_i40e_hmc_lan_rsrc_type } i40e_hmc_lan_rsrc_type ;
struct TYPE_10__ {size_t cnt; int base; size_t size; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct i40e_hmc_info*,int,size_t,int,size_t*,size_t*) ;
 int FUNC_3 (struct i40e_hmc_info*,int,size_t,int,size_t*,size_t*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static
enum i40e_status_code FUNC_4(struct i40e_hw *VAR_8,
     u8 **VAR_9,
     enum i40e_hmc_lan_rsrc_type VAR_10,
     u32 VAR_11)
{
 u32 VAR_12, VAR_13;
 struct i40e_hmc_info *VAR_14 = &VAR_8->hmc;
 struct i40e_hmc_sd_entry *VAR_15;
 struct i40e_hmc_pd_entry *VAR_16;
 u32 VAR_17, VAR_18, VAR_19;
 enum i40e_status_code VAR_20 = VAR_7;
 u64 VAR_21;
 u32 VAR_22, VAR_23;

 if (((void*)0) == VAR_14->hmc_obj) {
  VAR_20 = VAR_0;
  FUNC_0("i40e_hmc_get_object_va: bad hmc_info->hmc_obj ptr\n");
  goto exit;
 }
 if (((void*)0) == VAR_9) {
  VAR_20 = VAR_0;
  FUNC_0("i40e_hmc_get_object_va: bad object_base ptr\n");
  goto exit;
 }
 if (VAR_3 != VAR_14->signature) {
  VAR_20 = VAR_0;
  FUNC_0("i40e_hmc_get_object_va: bad hmc_info->signature\n");
  goto exit;
 }
 if (VAR_11 >= VAR_14->hmc_obj[VAR_10].cnt) {
  FUNC_1("i40e_hmc_get_object_va: returns error %d\n",
     VAR_20);
  VAR_20 = VAR_1;
  goto exit;
 }

 FUNC_3(VAR_14, VAR_10, VAR_11, 1,
     &VAR_22, &VAR_23);

 VAR_15 = &VAR_14->sd_table.sd_entry[VAR_22];
 VAR_21 = VAR_14->hmc_obj[VAR_10].base +
       VAR_14->hmc_obj[VAR_10].size * VAR_11;

 if (VAR_6 == VAR_15->entry_type) {
  FUNC_2(VAR_14, VAR_10, VAR_11, 1,
      &VAR_17, &VAR_18);
  VAR_19 = VAR_17 % VAR_5;
  VAR_16 = &VAR_15->u.pd_table.pd_entry[VAR_19];
  VAR_13 = (u32)(VAR_21 %
      VAR_4);
  *VAR_9 = (u8 *)VAR_16->bp.addr.va + VAR_13;
 } else {
  VAR_12 = (u32)(VAR_21 %
      VAR_2);
  *VAR_9 = (u8 *)VAR_15->u.bp.addr.va + VAR_12;
 }
exit:
 return VAR_20;
}
