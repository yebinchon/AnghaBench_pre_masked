
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* pmap_t ;
typedef int pd_entry_t ;
struct TYPE_3__ {int * pm_segtab; } ;


 size_t FUNC_0 (int ) ;

__attribute__((used)) static __inline pd_entry_t *
FUNC_1(pmap_t VAR_0, vm_offset_t VAR_1)
{

 return (&VAR_0->pm_segtab[FUNC_0(VAR_1)]);
}
