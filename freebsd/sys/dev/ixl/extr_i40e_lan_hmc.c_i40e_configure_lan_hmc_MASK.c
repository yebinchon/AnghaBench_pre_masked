
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {struct i40e_hmc_obj_info* hmc_obj; int hmc_fn_id; } ;
struct i40e_hw {TYPE_1__ hmc; } ;
struct i40e_hmc_obj_info {int base; int cnt; int size; } ;
struct i40e_hmc_lan_create_obj_info {size_t rsrc_type; int count; int entry_type; int direct_mode_sz; scalar_t__ start_idx; TYPE_1__* hmc_info; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef enum i40e_hmc_model { ____Placeholder_i40e_hmc_model } i40e_hmc_model ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;



 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_9 (struct i40e_hw*,struct i40e_hmc_lan_create_obj_info*) ;
 int FUNC_10 (struct i40e_hw*,int ,int ) ;

enum i40e_status_code FUNC_11(struct i40e_hw *VAR_13,
          enum i40e_hmc_model VAR_14)
{
 struct i40e_hmc_lan_create_obj_info VAR_15;
 u8 VAR_16 = VAR_13->hmc.hmc_fn_id;
 struct i40e_hmc_obj_info *VAR_17;
 enum i40e_status_code VAR_18 = VAR_12;


 VAR_15.hmc_info = &VAR_13->hmc;
 VAR_15.rsrc_type = VAR_7;
 VAR_15.start_idx = 0;
 VAR_15.direct_mode_sz = VAR_13->hmc.hmc_obj[VAR_7].size;


 switch (VAR_14) {
 case 129:
 case 130:
  VAR_15.entry_type = VAR_10;

  VAR_15.count = 1;
  VAR_18 = FUNC_9(VAR_13, &VAR_15);
  if ((VAR_18 != VAR_12) && (VAR_14 == 129))
   goto try_type_paged;
  else if (VAR_18 != VAR_12)
   goto configure_lan_hmc_out;

  break;
 case 128:
try_type_paged:
  VAR_15.entry_type = VAR_11;

  VAR_15.count = 1;
  VAR_18 = FUNC_9(VAR_13, &VAR_15);
  if (VAR_18 != VAR_12)
   goto configure_lan_hmc_out;
  break;
 default:

  VAR_18 = VAR_0;
  FUNC_0("i40e_configure_lan_hmc: Unknown SD type: %d\n",
     VAR_18);
  goto configure_lan_hmc_out;
 }




 VAR_17 = &VAR_13->hmc.hmc_obj[VAR_9];
 FUNC_10(VAR_13, FUNC_7(VAR_16),
      (u32)((VAR_17->base & VAR_4) / 512));
 FUNC_10(VAR_13, FUNC_8(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_13->hmc.hmc_obj[VAR_8];
 FUNC_10(VAR_13, FUNC_5(VAR_16),
      (u32)((VAR_17->base & VAR_3) / 512));
 FUNC_10(VAR_13, FUNC_6(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_13->hmc.hmc_obj[VAR_5];
 FUNC_10(VAR_13, FUNC_1(VAR_16),
  (u32)((VAR_17->base & VAR_1) / 512));
 FUNC_10(VAR_13, FUNC_2(VAR_16), VAR_17->cnt);


 VAR_17 = &VAR_13->hmc.hmc_obj[VAR_6];
 FUNC_10(VAR_13, FUNC_3(VAR_16),
      (u32)((VAR_17->base & VAR_2) / 512));
 FUNC_10(VAR_13, FUNC_4(VAR_16), VAR_17->cnt);

configure_lan_hmc_out:
 return VAR_18;
}
