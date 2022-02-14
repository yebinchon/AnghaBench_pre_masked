
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct vm86context {int npages; TYPE_1__* pmap; } ;
struct TYPE_2__ {int pte_num; int flags; scalar_t__ kva; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (char*) ;

vm_offset_t
FUNC_2(struct vm86context *VAR_5, int VAR_6, vm_offset_t VAR_7)
{
 int VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_5->npages; VAR_8++)
  if (VAR_5->pmap[VAR_8].pte_num == VAR_6)
   goto overlap;

 if (VAR_5->npages == VAR_3)
  goto full;

 if (VAR_7 == 0) {
  VAR_7 = (vm_offset_t)FUNC_0(VAR_2, VAR_0, VAR_1);
  VAR_9 = VAR_4;
 }

 VAR_8 = VAR_5->npages++;
 VAR_5->pmap[VAR_8].flags = VAR_9;
 VAR_5->pmap[VAR_8].kva = VAR_7;
 VAR_5->pmap[VAR_8].pte_num = VAR_6;
 return (VAR_7);
overlap:
 FUNC_1("vm86_addpage: overlap");
full:
 FUNC_1("vm86_addpage: not enough room");
}
