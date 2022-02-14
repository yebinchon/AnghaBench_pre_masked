
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct i40e_hw {scalar_t__ nvm_wait_opcode; int nvm_aq_event_desc; } ;
struct i40e_aq_desc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i40e_aq_desc*,int,int ) ;
 int FUNC_1 (struct i40e_hw*) ;

void FUNC_2(struct i40e_hw *VAR_1, u16 VAR_2,
      struct i40e_aq_desc *VAR_3)
{
 u32 VAR_4 = sizeof(struct i40e_aq_desc);

 if (VAR_2 == VAR_1->nvm_wait_opcode) {
  FUNC_0(&VAR_1->nvm_aq_event_desc, VAR_3,
       VAR_4, VAR_0);
  FUNC_1(VAR_1);
 }
}
