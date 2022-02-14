
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


typedef int xen_ulong_t ;
typedef int xen_pfn_t ;
typedef int vm_prot_t ;
typedef int vm_pindex_t ;
typedef TYPE_5__* vm_object_t ;
typedef int * vm_map_t ;
typedef TYPE_6__* vm_map_entry_t ;
typedef int uint16_t ;
struct xen_add_to_physmap_range {int size; int errs; int gpfns; int idxs; int foreign_domid; int space; int domid; } ;
struct thread {TYPE_2__* td_proc; } ;
struct privcmd_map {int* err; int mapped; int phys_base_addr; } ;
struct ioctl_privcmd_mmapbatch {int num; int addr; int * err; int * arr; int dom; } ;
struct ioctl_privcmd_hypercall {int retval; int * arg; int op; } ;
struct cdev {int dummy; } ;
typedef int idxs ;
typedef int errs ;
typedef scalar_t__ caddr_t ;
typedef int boolean_t ;
struct TYPE_15__ {int start; int end; } ;
struct TYPE_12__ {int * ops; } ;
struct TYPE_13__ {TYPE_3__ devp; } ;
struct TYPE_14__ {struct privcmd_map* handle; TYPE_4__ un_pager; int type; } ;
struct TYPE_11__ {TYPE_1__* p_vmspace; } ;
struct TYPE_10__ {int vm_map; } ;


 int* FUNC_0 (int,int ,int) ;
 int FUNC_1 (int,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct xen_add_to_physmap_range*) ;


 int VAR_4 ;
 int FUNC_3 (int,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int*,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *,int*,int) ;
 int FUNC_8 (int*,int *,int) ;
 int VAR_15 ;
 int FUNC_9 (int*,int ) ;
 int* FUNC_10 (int,int ,int) ;
 int FUNC_11 (int ,int ,int ,int ,int ,int ) ;
 int VAR_16 ;
 int FUNC_12 (int ,int*) ;
 int FUNC_13 () ;
 int FUNC_14 (int **,int,int ,TYPE_6__**,TYPE_5__**,int *,int *,int *) ;
 int FUNC_15 (int *,TYPE_6__*) ;
 int FUNC_16 (int) ;

__attribute__((used)) static int
FUNC_17(struct cdev *VAR_17, unsigned long VAR_18, caddr_t VAR_19,
       int VAR_20, struct thread *VAR_21)
{
 int VAR_22, VAR_23;

 switch (VAR_18) {
 case 129: {
  struct ioctl_privcmd_hypercall *VAR_24;

  VAR_24 = (struct ioctl_privcmd_hypercall *)VAR_19;






  if (VAR_15 & VAR_0)
   FUNC_13();

  VAR_22 = FUNC_11(VAR_24->op, VAR_24->arg[0],
      VAR_24->arg[1], VAR_24->arg[2], VAR_24->arg[3], VAR_24->arg[4]);

  if (VAR_15 & VAR_0)
   FUNC_6();

  if (VAR_22 >= 0) {
   VAR_24->retval = VAR_22;
   VAR_22 = 0;
  } else {
   VAR_22 = FUNC_16(VAR_22);
   VAR_24->retval = 0;
  }
  break;
 }
 case 128: {
  struct ioctl_privcmd_mmapbatch *VAR_25;
  vm_map_t VAR_26;
  vm_map_entry_t VAR_27;
  vm_object_t VAR_28;
  vm_pindex_t VAR_29;
  vm_prot_t VAR_30;
  boolean_t VAR_31;
  struct xen_add_to_physmap_range VAR_32;
  xen_ulong_t *VAR_33;
  xen_pfn_t *VAR_34;
  int *VAR_35, VAR_36;
  struct privcmd_map *VAR_37;
  uint16_t VAR_38;

  VAR_25 = (struct ioctl_privcmd_mmapbatch *)VAR_19;

  if ((VAR_25->num == 0) ||
      ((VAR_25->addr & VAR_9) != 0)) {
   VAR_22 = VAR_2;
   break;
  }

  VAR_26 = &VAR_21->td_proc->p_vmspace->vm_map;
  VAR_22 = FUNC_14(&VAR_26, VAR_25->addr, VAR_12, &VAR_27,
      &VAR_28, &VAR_29, &VAR_30, &VAR_31);
  if (VAR_22 != VAR_4) {
   VAR_22 = VAR_2;
   break;
  }
  if ((VAR_27->start != VAR_25->addr) ||
      (VAR_27->end != VAR_25->addr + (VAR_25->num * VAR_10))) {
   FUNC_15(VAR_26, VAR_27);
   VAR_22 = VAR_2;
   break;
  }
  FUNC_15(VAR_26, VAR_27);
  if ((VAR_28->type != VAR_8) ||
      (VAR_28->un_pager.devp.ops != &VAR_16)) {
   VAR_22 = VAR_2;
   break;
  }
  VAR_37 = VAR_28->handle;

  VAR_32.domid = VAR_1;
  VAR_32.space = VAR_13;
  VAR_32.foreign_domid = VAR_25->dom;





  VAR_38 = FUNC_3(VAR_25->num, VAR_11);

  VAR_33 = FUNC_10(sizeof(*VAR_33) * VAR_38, VAR_5, VAR_6);
  VAR_34 = FUNC_10(sizeof(*VAR_34) * VAR_38, VAR_5, VAR_6);
  VAR_35 = FUNC_10(sizeof(*VAR_35) * VAR_38, VAR_5, VAR_6);

  FUNC_12(VAR_32.idxs, VAR_33);
  FUNC_12(VAR_32.gpfns, VAR_34);
  FUNC_12(VAR_32.errs, VAR_35);


  VAR_37->err = FUNC_0(VAR_25->num, VAR_5,
      VAR_6 | VAR_7);

  for (VAR_36 = 0; VAR_36 < VAR_25->num; VAR_36 += VAR_38) {
   VAR_38 = FUNC_3(VAR_25->num - VAR_36, VAR_11);
   VAR_32.size = VAR_38;

   VAR_22 = FUNC_7(&VAR_25->arr[VAR_36], VAR_33,
       sizeof(VAR_33[0]) * VAR_38);
   if (VAR_22 != 0)
    goto mmap_out;

   for (VAR_23 = 0; VAR_23 < VAR_38; VAR_23++)
    VAR_34[VAR_23] = FUNC_4(VAR_37->phys_base_addr +
        (VAR_23 + VAR_36) * VAR_10);

   FUNC_5(VAR_35, sizeof(*VAR_35) * VAR_38);

   VAR_22 = FUNC_2(
       VAR_14, &VAR_32);
   if (VAR_22 != 0) {
    VAR_22 = FUNC_16(VAR_22);
    goto mmap_out;
   }

   for (VAR_23 = 0; VAR_23 < VAR_38; VAR_23++) {
    if (VAR_35[VAR_23] != 0) {
     VAR_35[VAR_23] = FUNC_16(VAR_35[VAR_23]);


     FUNC_1(VAR_25->num, VAR_36 + VAR_23,
         VAR_37->err);
    }
   }

   VAR_22 = FUNC_8(VAR_35, &VAR_25->err[VAR_36],
       sizeof(VAR_35[0]) * VAR_38);
   if (VAR_22 != 0)
    goto mmap_out;
  }

  VAR_37->mapped = 1;

mmap_out:
  FUNC_9(VAR_33, VAR_5);
  FUNC_9(VAR_34, VAR_5);
  FUNC_9(VAR_35, VAR_5);
  if (!VAR_37->mapped)
   FUNC_9(VAR_37->err, VAR_5);

  break;
 }

 default:
  VAR_22 = VAR_3;
  break;
 }

 return (VAR_22);
}
