
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int (* read_mac_addr ) (struct e1000_hw*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct e1000_hw {TYPE_2__ mac; } ;
typedef int s32 ;


 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*) ;

s32 FUNC_2(struct e1000_hw *VAR_0)
{
 if (VAR_0->mac.ops.read_mac_addr)
  return VAR_0->mac.ops.read_mac_addr(VAR_0);

 return FUNC_0(VAR_0);
}
