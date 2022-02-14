
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i40e_context_ele {scalar_t__ width; int size_of; } ;
typedef enum i40e_status_code { ____Placeholder_i40e_status_code } i40e_status_code ;


 int VAR_0 ;
 int FUNC_0 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_1 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_2 (int *,struct i40e_context_ele*,int *) ;
 int FUNC_3 (int *,struct i40e_context_ele*,int *) ;

__attribute__((used)) static enum i40e_status_code FUNC_4(u8 *VAR_1,
     struct i40e_context_ele *VAR_2,
     u8 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_2[VAR_4].width != 0; VAR_4++) {





  switch (VAR_2[VAR_4].size_of) {
  case 1:
   FUNC_0(VAR_1, &VAR_2[VAR_4], VAR_3);
   break;
  case 2:
   FUNC_3(VAR_1, &VAR_2[VAR_4], VAR_3);
   break;
  case 4:
   FUNC_1(VAR_1, &VAR_2[VAR_4], VAR_3);
   break;
  case 8:
   FUNC_2(VAR_1, &VAR_2[VAR_4], VAR_3);
   break;
  }
 }

 return VAR_0;
}
