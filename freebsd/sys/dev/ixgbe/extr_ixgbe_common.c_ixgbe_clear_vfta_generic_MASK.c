
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int vft_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;

s32 FUNC_5(struct ixgbe_hw *VAR_2)
{
 u32 VAR_3;

 FUNC_0("ixgbe_clear_vfta_generic");

 for (VAR_3 = 0; VAR_3 < VAR_2->mac.vft_size; VAR_3++)
  FUNC_4(VAR_2, FUNC_1(VAR_3), 0);

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
  FUNC_4(VAR_2, FUNC_2(VAR_3), 0);
  FUNC_4(VAR_2, FUNC_3(VAR_3 * 2), 0);
  FUNC_4(VAR_2, FUNC_3((VAR_3 * 2) + 1), 0);
 }

 return VAR_0;
}
