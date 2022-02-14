
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_map_t ;
typedef TYPE_6__* vm_map_entry_t ;
struct TYPE_12__ {uintptr_t addr; TYPE_2__* vs; } ;
struct TYPE_9__ {int object; scalar_t__ offset; } ;
struct TYPE_13__ {TYPE_4__ private; TYPE_1__ shared; } ;
struct umtx_key {int type; int shared; TYPE_5__ info; } ;
struct thread {TYPE_3__* td_proc; } ;
typedef int boolean_t ;
struct TYPE_14__ {scalar_t__ inheritance; scalar_t__ offset; scalar_t__ start; } ;
struct TYPE_11__ {TYPE_2__* p_vmspace; } ;
struct TYPE_10__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 struct thread* VAR_7 ;
 int FUNC_1 (struct umtx_key*) ;
 scalar_t__ FUNC_2 (int **,scalar_t__,int ,TYPE_6__**,int *,int *,int *,int *) ;
 int FUNC_3 (int *,TYPE_6__*) ;
 int FUNC_4 (int ) ;

int
FUNC_5(const void *VAR_8, int VAR_9, int VAR_10, struct umtx_key *VAR_11)
{
 struct thread *VAR_12 = VAR_7;
 vm_map_t VAR_13;
 vm_map_entry_t VAR_14;
 vm_pindex_t VAR_15;
 vm_prot_t VAR_16;
 boolean_t VAR_17;

 VAR_11->type = VAR_9;
 if (VAR_10 == VAR_4) {
  VAR_11->shared = 0;
  VAR_11->info.private.vs = VAR_12->td_proc->p_vmspace;
  VAR_11->info.private.addr = (uintptr_t)VAR_8;
 } else {
  FUNC_0(VAR_10 == VAR_3 || VAR_10 == VAR_0);
  VAR_13 = &VAR_12->td_proc->p_vmspace->vm_map;
  if (FUNC_2(&VAR_13, (vm_offset_t)VAR_8, VAR_6,
      &VAR_14, &VAR_11->info.shared.object, &VAR_15, &VAR_16,
      &VAR_17) != VAR_2) {
   return (VAR_1);
  }

  if ((VAR_10 == VAR_3) ||
      (VAR_10 == VAR_0 &&
       VAR_5 == VAR_14->inheritance)) {
   VAR_11->shared = 1;
   VAR_11->info.shared.offset = (vm_offset_t)VAR_8 -
       VAR_14->start + VAR_14->offset;
   FUNC_4(VAR_11->info.shared.object);
  } else {
   VAR_11->shared = 0;
   VAR_11->info.private.vs = VAR_12->td_proc->p_vmspace;
   VAR_11->info.private.addr = (uintptr_t)VAR_8;
  }
  FUNC_3(VAR_13, VAR_14);
 }

 FUNC_1(VAR_11);
 return (0);
}
