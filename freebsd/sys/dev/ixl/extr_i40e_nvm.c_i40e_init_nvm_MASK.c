
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct i40e_nvm_info {int sr_size; int blank_nvm_mode; int timeout; } ;
struct i40e_hw {struct i40e_nvm_info nvm; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct i40e_hw*,int ,char*) ;
 int FUNC_3 (struct i40e_hw*,int ) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_12)
{
 struct i40e_nvm_info *VAR_13 = &VAR_12->nvm;
 enum i40e_status_code VAR_14 = VAR_10;
 u32 VAR_15, VAR_16;
 u8 VAR_17;

 FUNC_1("i40e_init_nvm");




 VAR_16 = FUNC_3(VAR_12, VAR_5);
 VAR_17 = ((VAR_16 & VAR_6) >>
      VAR_7);

 VAR_13->sr_size = FUNC_0(VAR_17) * VAR_9;


 VAR_15 = FUNC_3(VAR_12, VAR_3);
 if (VAR_15 & VAR_4) {

  VAR_13->timeout = VAR_8;
  VAR_13->blank_nvm_mode = VAR_0;
 } else {
  VAR_13->blank_nvm_mode = VAR_11;
  VAR_14 = VAR_2;
  FUNC_2(VAR_12, VAR_1, "NVM init error: unsupported blank mode.\n");
 }

 return VAR_14;
}
