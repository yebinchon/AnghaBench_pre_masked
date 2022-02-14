
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {scalar_t__ sr_size; } ;
struct i40e_hw {TYPE_1__ nvm; int nvm_wb_desc; } ;
struct i40e_asq_cmd_details {int * wb_desc; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;
typedef int cmd_details ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct i40e_hw*,int ,int,int,void*,int,int ,struct i40e_asq_cmd_details*) ;
 int FUNC_3 (struct i40e_asq_cmd_details*,int ,int) ;

enum i40e_status_code FUNC_4(struct i40e_hw *VAR_2, u8 VAR_3,
     u32 VAR_4, u16 VAR_5, void *VAR_6,
     bool VAR_7)
{
 enum i40e_status_code VAR_8 = VAR_0;
 struct i40e_asq_cmd_details VAR_9;

 FUNC_0("i40e_write_nvm_aq");

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.wb_desc = &VAR_2->nvm_wb_desc;






 if ((VAR_4 + VAR_5) > VAR_2->nvm.sr_size)
  FUNC_1("NVM write error: offset beyond Shadow RAM limit.\n");
 else if (VAR_5 > VAR_1)

  FUNC_1("NVM write fail error: cannot write more than 4KB in a single write.\n");
 else if (((VAR_4 + (VAR_5 - 1)) / VAR_1)
   != (VAR_4 / VAR_1))

  FUNC_1("NVM write error: cannot spread over two sectors in a single write.\n");
 else
  VAR_8 = FUNC_2(VAR_2, VAR_3,
           2 * VAR_4,
           2 * VAR_5,
           VAR_6, VAR_7, 0,
           &VAR_9);

 return VAR_8;
}
