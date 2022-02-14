
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


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
 int VAR_12 ;
 int FUNC_0 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct i40e_hw*,int ) ;
 int FUNC_2 (struct i40e_hw*,int ,int) ;

void
FUNC_3(struct ixl_pf *VAR_16)
{
 struct i40e_hw *VAR_17 = &VAR_16->hw;
 u32 VAR_18;


 FUNC_2(VAR_17, VAR_4, 0);
 FUNC_1(VAR_17, VAR_3);

 VAR_18 = VAR_6 |
     VAR_7 |
     VAR_8 |
     VAR_5 |
     VAR_9 |
     VAR_12 |
     VAR_11 |
     VAR_10;
 FUNC_2(VAR_17, VAR_4, VAR_18);






 FUNC_2(VAR_17, VAR_13, 0x7FF);

 FUNC_2(VAR_17, FUNC_0(VAR_15), 0x3E);

 FUNC_2(VAR_17, VAR_0,
     VAR_2 |
     VAR_1);

 FUNC_2(VAR_17, VAR_14, 0);
}
