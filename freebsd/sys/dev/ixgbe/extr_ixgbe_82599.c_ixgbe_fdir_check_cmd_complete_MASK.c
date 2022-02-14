
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_4 ;
 int FUNC_1 (int) ;

__attribute__((used)) static s32 FUNC_2(struct ixgbe_hw *VAR_5, u32 *VAR_6)
{
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  *VAR_6 = FUNC_0(VAR_5, VAR_1);
  if (!(*VAR_6 & VAR_2))
   return VAR_4;
  FUNC_1(10);
 }

 return VAR_0;
}
