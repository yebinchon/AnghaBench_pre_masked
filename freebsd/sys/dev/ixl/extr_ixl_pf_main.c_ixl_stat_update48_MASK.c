
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct i40e_hw {int dummy; } ;


 int FUNC_0 (struct i40e_hw*,int ) ;
 int FUNC_1 (struct i40e_hw*,int ) ;

void
FUNC_2(struct i40e_hw *VAR_0, u32 VAR_1, u32 VAR_2,
 bool VAR_3, u64 *VAR_4, u64 *VAR_5)
{
 u64 VAR_6;
 VAR_6 = FUNC_0(VAR_0, VAR_2);
 VAR_6 |= ((u64)(FUNC_0(VAR_0, VAR_1) & 0xFFFF)) << 32;


 if (!VAR_3)
  *VAR_4 = VAR_6;
 if (VAR_6 >= *VAR_4)
  *VAR_5 = VAR_6 - *VAR_4;
 else
  *VAR_5 = (VAR_6 + ((u64)1 << 48)) - *VAR_4;
 *VAR_5 &= 0xFFFFFFFFFFFFULL;
}
