
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_map_t ;
struct thread {TYPE_2__* td_proc; } ;
struct TYPE_4__ {TYPE_1__* p_vmspace; } ;
struct TYPE_3__ {int vm_map; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int *,scalar_t__,scalar_t__) ;

int
FUNC_2(struct thread *VAR_2, vm_offset_t VAR_3, size_t VAR_4)
{
 vm_map_t VAR_5;
 vm_size_t VAR_6;

 if (VAR_4 == 0)
  return (0);

 VAR_5 = &VAR_2->td_proc->p_vmspace->vm_map;
 VAR_6 = (vm_size_t)FUNC_0(VAR_4);

 if (FUNC_1(VAR_5, VAR_3, VAR_3 + VAR_6) != VAR_1)
  return (VAR_0);

 return (0);
}
