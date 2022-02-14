
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_hw {scalar_t__ back; } ;
struct TYPE_2__ {int mem_bus_space_handle; int mem_bus_space_tag; } ;
struct adapter {TYPE_1__ osdep; } ;


 int FUNC_0 (int ,int ,int ) ;

inline u32
FUNC_1(struct ixgbe_hw *VAR_0, u32 VAR_1)
{
 return FUNC_0(((struct adapter *)VAR_0->back)->osdep.mem_bus_space_tag,
     ((struct adapter *)VAR_0->back)->osdep.mem_bus_space_handle, VAR_1);
}
