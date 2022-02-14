
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct i40e_hw*,int) ;

u32 FUNC_1(struct i40e_hw *VAR_4)
{
 u32 VAR_5 = 0;
 u32 VAR_6 = 0;
 int VAR_7;




 for (VAR_7 = VAR_3; VAR_7 <= VAR_2; VAR_7++) {
  u32 VAR_8 = FUNC_0(VAR_4, VAR_7);

  if (!VAR_8)
   continue;




  VAR_5 = ((VAR_8 & VAR_0)
    >> VAR_1);
  switch (VAR_5) {
  case 131:
  case 130:
  case 128:
  case 129:
   continue;
  default:
   break;
  }

  VAR_6 = (VAR_8 & VAR_0) >>
   VAR_1;
  break;
 }

 return VAR_6;
}
