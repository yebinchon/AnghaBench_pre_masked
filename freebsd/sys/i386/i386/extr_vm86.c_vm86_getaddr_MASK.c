
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int u_short ;
struct vm86context {int npages; TYPE_1__* pmap; } ;
struct TYPE_2__ {int pte_num; int kva; } ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;

vm_offset_t
FUNC_1(struct vm86context *VAR_2, u_short VAR_3, u_short VAR_4)
{
 int VAR_5, VAR_6;
 vm_offset_t VAR_7;

 VAR_7 = (vm_offset_t)FUNC_0(VAR_3, VAR_4);
 VAR_6 = VAR_7 >> VAR_1;
 for (VAR_5 = 0; VAR_5 < VAR_2->npages; VAR_5++)
  if (VAR_6 == VAR_2->pmap[VAR_5].pte_num)
   return (VAR_2->pmap[VAR_5].kva + (VAR_7 & VAR_0));
 return (0);
}
