
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_2__ {scalar_t__ vft_size; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_1)
{
 u32 VAR_2;
 u32 VAR_3;

 FUNC_0("ixgbe_clear_vfta_82598");

 for (VAR_2 = 0; VAR_2 < VAR_1->mac.vft_size; VAR_2++)
  FUNC_3(VAR_1, FUNC_1(VAR_2), 0);

 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  for (VAR_2 = 0; VAR_2 < VAR_1->mac.vft_size; VAR_2++)
   FUNC_3(VAR_1, FUNC_2(VAR_3, VAR_2),
     0);

 return VAR_0;
}
