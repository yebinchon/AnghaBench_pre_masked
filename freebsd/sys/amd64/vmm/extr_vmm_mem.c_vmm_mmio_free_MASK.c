
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_paddr_t ;
struct vmspace {int vm_map; } ;


 int FUNC_0 (int *,scalar_t__,scalar_t__) ;

void
FUNC_1(struct vmspace *VAR_0, vm_paddr_t VAR_1, size_t VAR_2)
{

 FUNC_0(&VAR_0->vm_map, VAR_1, VAR_1 + VAR_2);
}
