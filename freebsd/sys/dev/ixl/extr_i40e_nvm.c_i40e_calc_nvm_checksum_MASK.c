
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct i40e_virt_mem {scalar_t__ va; } ;
struct TYPE_2__ {int sr_size; } ;
struct i40e_hw {TYPE_1__ nvm; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct i40e_hw*,int,int*,int*) ;
 int FUNC_2 (struct i40e_hw*,int ,int*) ;
 int FUNC_3 (struct i40e_hw*,struct i40e_virt_mem*,int) ;
 int FUNC_4 (struct i40e_hw*,struct i40e_virt_mem*) ;

enum i40e_status_code FUNC_5(struct i40e_hw *VAR_9, u16 *VAR_10)
{
 enum i40e_status_code VAR_11 = VAR_8;
 struct i40e_virt_mem VAR_12;
 u16 VAR_13 = 0;
 u16 VAR_14 = 0;
 u16 VAR_15 = 0;
 u16 *VAR_16;
 u16 VAR_17 = 0;

 FUNC_0("i40e_calc_nvm_checksum");

 VAR_11 = FUNC_3(VAR_9, &VAR_12,
        VAR_3 * sizeof(u16));
 if (VAR_11)
  goto i40e_calc_nvm_checksum_exit;
 VAR_16 = (u16 *)VAR_12.va;


 VAR_11 = FUNC_2(VAR_9, VAR_7, &VAR_15);
 if (VAR_11 != VAR_8) {
  VAR_11 = VAR_0;
  goto i40e_calc_nvm_checksum_exit;
 }


 VAR_11 = FUNC_2(VAR_9, VAR_1,
     &VAR_13);
 if (VAR_11 != VAR_8) {
  VAR_11 = VAR_0;
  goto i40e_calc_nvm_checksum_exit;
 }




 for (VAR_17 = 0; VAR_17 < VAR_9->nvm.sr_size; VAR_17++) {

  if ((VAR_17 % VAR_3) == 0) {
   u16 VAR_18 = VAR_3;

   VAR_11 = FUNC_1(VAR_9, VAR_17, &VAR_18, VAR_16);
   if (VAR_11 != VAR_8) {
    VAR_11 = VAR_0;
    goto i40e_calc_nvm_checksum_exit;
   }
  }


  if (VAR_17 == VAR_5)
   continue;

  if ((VAR_17 >= (u32)VAR_15) &&
      (VAR_17 < ((u32)VAR_15 +
       (VAR_6 / 2)))) {
   continue;
  }

  if ((VAR_17 >= (u32)VAR_13) &&
      (VAR_17 < ((u32)VAR_13 +
       (VAR_2 / 2)))) {
   continue;
  }

  VAR_14 += VAR_16[VAR_17 % VAR_3];
 }

 *VAR_10 = (u16)VAR_4 - VAR_14;

i40e_calc_nvm_checksum_exit:
 FUNC_4(VAR_9, &VAR_12);
 return VAR_11;
}
