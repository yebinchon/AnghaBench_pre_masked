
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct i40e_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct i40e_hw*,int ) ;

__attribute__((used)) static s32
FUNC_3(struct i40e_hw *VAR_2, u8 VAR_3)
{
 s32 VAR_4 = 0;
 u32 VAR_5 = 100;
 u32 VAR_6;
 do {
  VAR_6 = FUNC_2(VAR_2, FUNC_0(VAR_3));
  if ((VAR_6 & VAR_1) != 0)
   break;
  FUNC_1(10);
 } while (VAR_5-- > 0);

 if (VAR_5 == 0)
  return VAR_0;
 else
  return VAR_4;
}
