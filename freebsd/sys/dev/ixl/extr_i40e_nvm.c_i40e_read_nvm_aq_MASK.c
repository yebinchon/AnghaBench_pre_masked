
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
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct i40e_hw*,int ,int,int,void*,int,struct i40e_asq_cmd_details*) ;
 int FUNC_2 (struct i40e_hw*,int ,char*,scalar_t__,scalar_t__) ;
 int FUNC_3 (struct i40e_asq_cmd_details*,int ,int) ;

__attribute__((used)) static enum i40e_status_code FUNC_4(struct i40e_hw *VAR_3,
           u8 VAR_4, u32 VAR_5,
           u16 VAR_6, void *VAR_7,
           bool VAR_8)
{
 enum i40e_status_code VAR_9 = VAR_1;
 struct i40e_asq_cmd_details VAR_10;

 FUNC_0("i40e_read_nvm_aq");

 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.wb_desc = &VAR_3->nvm_wb_desc;






 if ((VAR_5 + VAR_6) > VAR_3->nvm.sr_size)
  FUNC_2(VAR_3, VAR_0,
      "NVM write error: offset %d beyond Shadow RAM limit %d\n",
      (VAR_5 + VAR_6), VAR_3->nvm.sr_size);
 else if (VAR_6 > VAR_2)

  FUNC_2(VAR_3, VAR_0,
      "NVM write fail error: tried to write %d words, limit is %d.\n",
      VAR_6, VAR_2);
 else if (((VAR_5 + (VAR_6 - 1)) / VAR_2)
   != (VAR_5 / VAR_2))

  FUNC_2(VAR_3, VAR_0,
      "NVM write error: cannot spread over two sectors in a single write offset=%d words=%d\n",
      VAR_5, VAR_6);
 else
  VAR_9 = FUNC_1(VAR_3, VAR_4,
         2 * VAR_5,
         2 * VAR_6,
         VAR_7, VAR_8, &VAR_10);

 return VAR_9;
}
