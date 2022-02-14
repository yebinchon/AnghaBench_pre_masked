
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_3__ {int get_supported_physical_layer; } ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,struct ixgbe_hw*,int ) ;

u64 FUNC_1(struct ixgbe_hw *VAR_1)
{
 return FUNC_0(VAR_1, VAR_1->mac.ops.get_supported_physical_layer,
          (VAR_1), VAR_0);
}
