
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_map_t ;
struct vm_area_struct {int dummy; } ;
struct page {int dummy; } ;
struct TYPE_6__ {TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {int vm_map; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 long FUNC_0 (int *,unsigned long,unsigned long,int,struct page**) ;

long
FUNC_1(unsigned long VAR_2, unsigned long VAR_3, int VAR_4,
    struct page **VAR_5, struct vm_area_struct **VAR_6)
{
 vm_map_t VAR_7;

 VAR_7 = &VAR_1->td_proc->p_vmspace->vm_map;
 return (FUNC_0(VAR_7, VAR_2, VAR_3,
     !!(VAR_4 & VAR_0), VAR_5));
}
