
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef TYPE_5__* vm_object_t ;
typedef int * vm_map_t ;
typedef TYPE_6__* vm_map_entry_t ;
struct thread {TYPE_2__* td_proc; } ;
struct ioctl_gntdev_get_offset_for_vaddr {int count; int offset; int vaddr; } ;
struct gntdev_gmap {int count; int file_index; } ;
typedef int boolean_t ;
struct TYPE_15__ {int end; int start; } ;
struct TYPE_12__ {int * ops; } ;
struct TYPE_13__ {TYPE_3__ devp; } ;
struct TYPE_14__ {scalar_t__ type; struct gntdev_gmap* handle; TYPE_4__ un_pager; } ;
struct TYPE_11__ {TYPE_1__* p_vmspace; } ;
struct TYPE_10__ {int vm_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,int ,int ,TYPE_6__**,TYPE_5__**,int *,int *,int *) ;
 int FUNC_1 (int *,TYPE_6__*) ;

__attribute__((used)) static int
FUNC_2(struct ioctl_gntdev_get_offset_for_vaddr *VAR_6,
 struct thread *VAR_7)
{
 int VAR_8;
 vm_map_t VAR_9;
 vm_map_entry_t VAR_10;
 vm_object_t VAR_11;
 vm_pindex_t VAR_12;
 vm_prot_t VAR_13;
 boolean_t VAR_14;
 struct gntdev_gmap *VAR_15;
 int VAR_16;

 VAR_9 = &VAR_7->td_proc->p_vmspace->vm_map;
 VAR_8 = FUNC_0(&VAR_9, VAR_6->vaddr, VAR_4, &VAR_10,
      &VAR_11, &VAR_12, &VAR_13, &VAR_14);
 if (VAR_8 != VAR_1)
  return (VAR_0);

 if ((VAR_11->type != VAR_2) ||
     (VAR_11->un_pager.devp.ops != &VAR_5)) {
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_15 = VAR_11->handle;
 if (VAR_15 == ((void*)0) ||
     (VAR_10->end - VAR_10->start) != (VAR_15->count * VAR_3)) {
  VAR_16 = VAR_0;
  goto out;
 }

 VAR_6->count = VAR_15->count;
 VAR_6->offset = VAR_15->file_index;
 VAR_16 = 0;

out:
 FUNC_1(VAR_9, VAR_10);
 return (VAR_16);
}
