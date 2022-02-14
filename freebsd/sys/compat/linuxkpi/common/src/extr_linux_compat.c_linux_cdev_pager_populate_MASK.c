
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef scalar_t__ vm_pindex_t ;
typedef TYPE_3__* vm_object_t ;
struct vm_fault {struct vm_area_struct* vma; int * page; scalar_t__ pgoff; int flags; void* virtual_address; } ;
struct vm_area_struct {scalar_t__ vm_private_data; scalar_t__ vm_pfn_count; scalar_t__* vm_pfn_pcount; scalar_t__ vm_pfn_first; TYPE_2__* vm_mm; TYPE_1__* vm_ops; TYPE_3__* vm_obj; } ;
struct TYPE_9__ {scalar_t__ handle; } ;
struct TYPE_8__ {int mmap_sem; } ;
struct TYPE_7__ {int (* fault ) (struct vm_area_struct*,struct vm_fault*) ;} ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int VAR_1 ;



 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 struct vm_area_struct* FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct vm_area_struct*,struct vm_fault*) ;
 int FUNC_9 (struct vm_area_struct*,struct vm_fault*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int
FUNC_12(vm_object_t VAR_8, vm_pindex_t VAR_9, int VAR_10,
    vm_prot_t VAR_11, vm_pindex_t *VAR_12, vm_pindex_t *VAR_13)
{
 struct vm_area_struct *VAR_14;
 int VAR_15;

 FUNC_7(VAR_7);


 VAR_14 = FUNC_6(VAR_8->handle);
 FUNC_1(VAR_14 != ((void*)0));
 FUNC_1(VAR_14->vm_private_data == VAR_8->handle);

 FUNC_3(VAR_8);

 FUNC_4(&VAR_14->vm_mm->mmap_sem);
 if (FUNC_10(VAR_14->vm_ops == ((void*)0))) {
  VAR_15 = 128;
 } else {
  struct vm_fault VAR_16;


  VAR_16.virtual_address = (void *)(uintptr_t)FUNC_0(VAR_9);
  VAR_16.flags = (VAR_10 & VAR_6) ? VAR_0 : 0;
  VAR_16.pgoff = 0;
  VAR_16.page = ((void*)0);
  VAR_16.vma = VAR_14;

  VAR_14->vm_pfn_count = 0;
  VAR_14->vm_pfn_pcount = &VAR_14->vm_pfn_count;
  VAR_14->vm_obj = VAR_8;

  VAR_15 = VAR_14->vm_ops->fault(VAR_14, &VAR_16);

  while (VAR_14->vm_pfn_count == 0 && VAR_15 == 130) {
   FUNC_5(VAR_1);
   VAR_15 = VAR_14->vm_ops->fault(VAR_14, &VAR_16);
  }
 }


 switch (VAR_15) {
 case 129:
  VAR_15 = VAR_2;
  break;
 case 128:
  VAR_15 = VAR_3;
  break;
 case 130:






  *VAR_12 = VAR_14->vm_pfn_first;
  *VAR_13 = *VAR_12 + VAR_14->vm_pfn_count - 1;
  VAR_15 = VAR_5;
  break;
 default:
  VAR_15 = VAR_4;
  break;
 }
 FUNC_11(&VAR_14->vm_mm->mmap_sem);
 FUNC_2(VAR_8);
 return (VAR_15);
}
