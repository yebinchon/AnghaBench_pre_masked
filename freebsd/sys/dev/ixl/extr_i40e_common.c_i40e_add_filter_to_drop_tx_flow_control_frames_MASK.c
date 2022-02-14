
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct i40e_hw {int dummy; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i40e_hw*,int *,int,int,int,int ,int ,int *,int *) ;

void FUNC_2(struct i40e_hw *VAR_5,
          u16 VAR_6)
{

 u16 VAR_7 = VAR_1 |
     VAR_0 |
     VAR_2;
 u16 VAR_8 = 0x8808;
 enum i40e_status_code VAR_9;

 VAR_9 = FUNC_1(VAR_5, ((void*)0), VAR_8, VAR_7,
             VAR_6, 0, VAR_4, ((void*)0),
             ((void*)0));
 if (VAR_9)
  FUNC_0("Ethtype Filter Add failed: Error pruning Tx flow control frames\n");
}
