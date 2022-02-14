
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_6, u32 *VAR_7)
{
 u32 VAR_8, VAR_9 = 0;





 for (VAR_8 = 0; VAR_8 < VAR_2; VAR_8++) {
  VAR_9 = FUNC_1(VAR_6, VAR_4);
  if ((VAR_9 & VAR_3) == 0)
   break;
  FUNC_2(10);
 }
 if (VAR_7)
  *VAR_7 = VAR_9;
 if (VAR_8 == VAR_2) {
  FUNC_0(VAR_0, "Wait timed out\n");
  return VAR_1;
 }

 return VAR_5;
}
