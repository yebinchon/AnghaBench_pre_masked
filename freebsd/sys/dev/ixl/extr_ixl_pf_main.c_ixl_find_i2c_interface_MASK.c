
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int port; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct i40e_hw*,int ) ;

int
FUNC_3(struct ixl_pf *VAR_3)
{
 struct i40e_hw *VAR_4 = &VAR_3->hw;
 bool VAR_5, VAR_6;
 u32 VAR_7;

 for (int VAR_8 = 0; VAR_8 < 4; VAR_8++) {
  VAR_7 = FUNC_2(VAR_4, FUNC_1(VAR_8));
  VAR_5 = (VAR_7 & VAR_0);
  VAR_6 = ((VAR_7 & VAR_1)
      >> VAR_2)
      & FUNC_0(VAR_4->port);
  if (VAR_5 && VAR_6)
   return (VAR_8);
 }

 return (-1);
}
