
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_size_t ;
typedef size_t vm_offset_t ;
struct vmspace {int vm_map; scalar_t__ vm_daddr; } ;
struct thread {TYPE_1__* td_proc; } ;
struct TYPE_2__ {struct vmspace* p_vmspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (struct thread*,int ) ;
 size_t FUNC_1 (size_t) ;
 int FUNC_2 (int *,size_t*,scalar_t__,int,int ,int,int *,int ,int ,struct thread*) ;

int
FUNC_3(struct thread *VAR_8, vm_offset_t *VAR_9, size_t VAR_10)
{
 struct vmspace *VAR_11;
 int VAR_12;
 vm_size_t VAR_13;

 VAR_11 = VAR_8->td_proc->p_vmspace;




 *VAR_9 = FUNC_1((vm_offset_t)VAR_11->vm_daddr +
     FUNC_0(VAR_8, VAR_4));


 VAR_13 = (vm_size_t)FUNC_1(VAR_10);
 if (VAR_13 == 0)
  return (VAR_0);
 VAR_12 = FUNC_2(&VAR_11->vm_map, VAR_9, VAR_13, VAR_6 |
     VAR_7, VAR_5, VAR_3 | VAR_2, ((void*)0), 0,
     VAR_1, VAR_8);
 return (VAR_12);
}
