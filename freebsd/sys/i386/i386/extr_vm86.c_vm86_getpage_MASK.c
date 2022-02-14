
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
struct vm86context {int npages; TYPE_1__* pmap; } ;
struct TYPE_2__ {int pte_num; int kva; } ;



vm_offset_t
FUNC_0(struct vm86context *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->npages; VAR_2++)
  if (VAR_0->pmap[VAR_2].pte_num == VAR_1)
   return (VAR_0->pmap[VAR_2].kva);
 return (0);
}
