
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef scalar_t__ uint32_t ;
struct i40e_osdep {scalar_t__ mem_bus_space_size; int mem_bus_space_handle; int mem_bus_space_tag; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static __inline void
FUNC_2(struct i40e_osdep *VAR_0, uint32_t VAR_1, uint32_t VAR_2)
{

 FUNC_0(VAR_1 < VAR_0->mem_bus_space_size,
     ("ixl: register offset %#jx too large (max is %#jx)",
     (uintmax_t)VAR_1, (uintmax_t)VAR_0->mem_bus_space_size));

 FUNC_1(VAR_0->mem_bus_space_tag,
     VAR_0->mem_bus_space_handle, VAR_1, VAR_2);
}
