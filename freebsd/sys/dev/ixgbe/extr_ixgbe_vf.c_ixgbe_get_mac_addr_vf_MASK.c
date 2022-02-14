
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * perm_addr; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;

s32 FUNC_0(struct ixgbe_hw *VAR_2, u8 *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3[VAR_4] = VAR_2->mac.perm_addr[VAR_4];

 return VAR_1;
}
