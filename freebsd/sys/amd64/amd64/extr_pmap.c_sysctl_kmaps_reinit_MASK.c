
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct pmap_kernel_map_range {int attrs; int sva; } ;
typedef int pt_entry_t ;


 int FUNC_0 (struct pmap_kernel_map_range*,int ,int) ;

__attribute__((used)) static void
FUNC_1(struct pmap_kernel_map_range *VAR_0, vm_offset_t VAR_1,
    pt_entry_t VAR_2)
{

 FUNC_0(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->sva = VAR_1;
 VAR_0->attrs = VAR_2;
}
