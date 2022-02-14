
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i40e_nvm_access {scalar_t__ data_size; int offset; int config; } ;
struct TYPE_2__ {int asq_last_status; } ;
struct i40e_hw {TYPE_1__ aq; int nvm_wb_desc; } ;
struct i40e_asq_cmd_details {int * wb_desc; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int cmd_details ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (struct i40e_hw*,int,int ,int ,int*,int,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,int,int ,...) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct i40e_asq_cmd_details*,int ,int) ;

__attribute__((used)) static enum i40e_status_code FUNC_7(struct i40e_hw *VAR_3,
         struct i40e_nvm_access *VAR_4,
         u8 *VAR_5, int *VAR_6)
{
 enum i40e_status_code VAR_7 = VAR_2;
 struct i40e_asq_cmd_details VAR_8;
 u8 VAR_9, VAR_10;
 u8 VAR_11;
 bool VAR_12;

 VAR_10 = FUNC_5(VAR_4->config);
 VAR_9 = FUNC_3(VAR_4->config);
 VAR_12 = (VAR_10 & VAR_1);
 VAR_11 = FUNC_4(VAR_4->config);

 FUNC_6(&VAR_8, 0, sizeof(VAR_8));
 VAR_8.wb_desc = &VAR_3->nvm_wb_desc;

 VAR_7 = FUNC_1(VAR_3, VAR_9, VAR_4->offset,
        (u16)VAR_4->data_size, VAR_5, VAR_12,
        VAR_11, &VAR_8);
 if (VAR_7) {
  FUNC_2(VAR_3, VAR_0,
      "i40e_nvmupd_nvm_write mod 0x%x off 0x%x len 0x%x\n",
      VAR_9, VAR_4->offset, VAR_4->data_size);
  FUNC_2(VAR_3, VAR_0,
      "i40e_nvmupd_nvm_write status %d aq %d\n",
      VAR_7, VAR_3->aq.asq_last_status);
  *VAR_6 = FUNC_0(VAR_7, VAR_3->aq.asq_last_status);
 }

 return VAR_7;
}
