
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_aq_desc {void* flags; void* opcode; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (void*,int ,int,int ) ;

void FUNC_2(struct i40e_aq_desc *VAR_2,
           u16 VAR_3)
{

 FUNC_1((void *)VAR_2, 0, sizeof(struct i40e_aq_desc),
      VAR_1);
 VAR_2->opcode = FUNC_0(VAR_3);
 VAR_2->flags = FUNC_0(VAR_0);
}
