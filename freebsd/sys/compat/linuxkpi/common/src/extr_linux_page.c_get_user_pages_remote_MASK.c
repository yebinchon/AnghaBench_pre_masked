
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int * vm_map_t ;
struct vm_area_struct {int dummy; } ;
struct task_struct {TYPE_3__* task_thread; } ;
struct page {int dummy; } ;
struct mm_struct {int dummy; } ;
struct TYPE_6__ {TYPE_2__* td_proc; } ;
struct TYPE_5__ {TYPE_1__* p_vmspace; } ;
struct TYPE_4__ {int vm_map; } ;


 int VAR_0 ;
 long FUNC_0 (int *,unsigned long,unsigned long,int,struct page**) ;

long
FUNC_1(struct task_struct *VAR_1, struct mm_struct *VAR_2,
    unsigned long VAR_3, unsigned long VAR_4, int VAR_5,
    struct page **VAR_6, struct vm_area_struct **VAR_7)
{
 vm_map_t VAR_8;

 VAR_8 = &VAR_1->task_thread->td_proc->p_vmspace->vm_map;
 return (FUNC_0(VAR_8, VAR_3, VAR_4,
     !!(VAR_5 & VAR_0), VAR_6));
}
