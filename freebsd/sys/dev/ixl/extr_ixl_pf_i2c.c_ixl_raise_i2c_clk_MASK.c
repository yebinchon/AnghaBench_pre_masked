
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
struct ixl_pf {struct i40e_hw hw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct i40e_hw*) ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct i40e_hw*) ;
 scalar_t__ FUNC_3 (struct i40e_hw*,int ) ;
 int FUNC_4 (struct i40e_hw*,int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_5(struct ixl_pf *VAR_5, u32 *VAR_6)
{
 struct i40e_hw *VAR_7 = &VAR_5->hw;
 u32 VAR_8 = 0;
 u32 VAR_9 = VAR_3;
 u32 VAR_10 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  *VAR_6 |= VAR_1;
  *VAR_6 &= ~(VAR_2);

  FUNC_4(VAR_7, FUNC_0(VAR_7), *VAR_6);
  FUNC_2(VAR_7);

  FUNC_1(VAR_4);

  VAR_10 = FUNC_3(VAR_7, FUNC_0(VAR_7));
  if (VAR_10 & VAR_0)
   break;
 }
}
