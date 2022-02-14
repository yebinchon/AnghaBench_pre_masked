
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_short ;
struct vm86context {int npages; TYPE_1__* pmap; } ;
struct TYPE_2__ {scalar_t__ kva; int pte_num; } ;


 scalar_t__ VAR_0 ;

int
FUNC_0(struct vm86context *VAR_1, vm_offset_t VAR_2, u_short *VAR_3,
     u_short *VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1->npages; VAR_5++)
  if (VAR_2 >= VAR_1->pmap[VAR_5].kva &&
      VAR_2 < VAR_1->pmap[VAR_5].kva + VAR_0) {
   *VAR_4 = VAR_2 - VAR_1->pmap[VAR_5].kva;
   *VAR_3 = VAR_1->pmap[VAR_5].pte_num << 8;
   return (1);
  }
 return (0);
}
