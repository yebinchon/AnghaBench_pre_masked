
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct proc_handle {size_t nmappings; TYPE_1__* mappings; } ;
struct TYPE_4__ {uintptr_t pr_vaddr; uintptr_t pr_size; int pr_mapname; } ;
typedef TYPE_2__ prmap_t ;
struct TYPE_3__ {TYPE_2__ map; } ;


 int * FUNC_0 (struct proc_handle*) ;
 int FUNC_1 (char*,int ,size_t) ;

char *
FUNC_2(struct proc_handle *VAR_0, uintptr_t VAR_1, char *VAR_2,
    size_t VAR_3)
{
 prmap_t *VAR_4;
 size_t VAR_5;

 if (VAR_0->nmappings == 0)
  if (FUNC_0(VAR_0) == ((void*)0))
   return (((void*)0));
 for (VAR_5 = 0; VAR_5 < VAR_0->nmappings; VAR_5++) {
  VAR_4 = &VAR_0->mappings[VAR_5].map;
  if (VAR_1 >= VAR_4->pr_vaddr &&
      VAR_1 < VAR_4->pr_vaddr + VAR_4->pr_size) {
   FUNC_1(VAR_2, VAR_4->pr_mapname, VAR_3);
   return (VAR_2);
  }
 }
 return (((void*)0));
}
