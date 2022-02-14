
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
typedef int * vm_map_t ;
typedef int vm_map_entry_t ;
struct thread {TYPE_2__* td_proc; } ;
typedef int boolean_t ;
struct TYPE_7__ {int flags; } ;
struct TYPE_6__ {TYPE_1__* p_vmspace; } ;
struct TYPE_5__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,uintptr_t,int ,int *,TYPE_3__**,int *,int *,int *) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int
FUNC_2(struct thread *VAR_6, void *VAR_7)
{
 vm_map_t VAR_8;
 vm_map_entry_t VAR_9;
 vm_object_t VAR_10;
 vm_pindex_t VAR_11;
 vm_prot_t VAR_12;
 int VAR_13, VAR_14;
 boolean_t VAR_15;

 VAR_8 = &VAR_6->td_proc->p_vmspace->vm_map;
 VAR_13 = FUNC_0(&VAR_8, (uintptr_t)VAR_7, VAR_5, &VAR_9,
     &VAR_10, &VAR_11, &VAR_12, &VAR_15);
 if (VAR_13 != VAR_3)
  return (VAR_0);
 if (VAR_10 == ((void*)0))
  VAR_14 = VAR_1;
 else
  VAR_14 = (VAR_10->flags & VAR_4) != 0 ? VAR_2 : 0;
 FUNC_1(VAR_8, VAR_9);
 return (VAR_14);
}
