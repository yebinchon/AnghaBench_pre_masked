
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct proc_handle {size_t nmappings; struct map_info* mappings; } ;
struct TYPE_2__ {uintptr_t pr_vaddr; uintptr_t pr_size; } ;
struct map_info {TYPE_1__ map; } ;


 int * FUNC_0 (struct proc_handle*) ;

__attribute__((used)) static struct map_info *
FUNC_1(struct proc_handle *VAR_0, uintptr_t VAR_1)
{
 struct map_info *VAR_2;
 size_t VAR_3;

 if (VAR_0->nmappings == 0)
  if (FUNC_0(VAR_0) == ((void*)0))
   return (((void*)0));
 for (VAR_3 = 0; VAR_3 < VAR_0->nmappings; VAR_3++) {
  VAR_2 = &VAR_0->mappings[VAR_3];
  if (VAR_1 >= VAR_2->map.pr_vaddr &&
      VAR_1 < VAR_2->map.pr_vaddr + VAR_2->map.pr_size)
   return (VAR_2);
 }
 return (((void*)0));
}
