
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_device {TYPE_1__* mem_bus_space; } ;
struct TYPE_2__ {int handle; int tag; } ;


 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (struct octeon_device*,scalar_t__) ;

__attribute__((used)) static inline uint64_t
FUNC_2(struct octeon_device *VAR_0, uint32_t VAR_1)
{





 return (FUNC_0(VAR_0->mem_bus_space[0].tag,
     VAR_0->mem_bus_space[0].handle, VAR_1));

}
