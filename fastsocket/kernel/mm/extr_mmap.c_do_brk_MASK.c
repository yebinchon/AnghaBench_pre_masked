
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; unsigned long vm_pgoff; unsigned long vm_flags; int vm_page_prot; struct mm_struct* vm_mm; int anon_vma_chain; } ;
struct rb_node {int dummy; } ;
struct mm_struct {unsigned long def_flags; scalar_t__ map_count; unsigned long total_vm; scalar_t__ locked_vm; } ;
typedef unsigned long pgoff_t ;
struct TYPE_6__ {TYPE_2__* signal; struct mm_struct* mm; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 size_t VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ) ;
 TYPE_3__* VAR_11 ;
 scalar_t__ FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_5 (int *,unsigned long,unsigned long,int ,int ) ;
 struct vm_area_struct* FUNC_6 (int ,int ) ;
 int FUNC_7 (struct mm_struct*,unsigned long) ;
 int FUNC_8 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_9 (struct vm_area_struct*) ;
 int FUNC_10 (int *,int ,int ,int ,unsigned long,int) ;
 scalar_t__ FUNC_11 (unsigned long) ;
 scalar_t__ VAR_12 ;
 int FUNC_12 (struct mm_struct*) ;
 int VAR_13 ;
 int FUNC_13 (unsigned long) ;
 int FUNC_14 (unsigned long) ;
 int FUNC_15 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_16 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *,int *,unsigned long,int *) ;

unsigned long FUNC_17(unsigned long VAR_14, unsigned long VAR_15)
{
 struct mm_struct * VAR_16 = VAR_11->mm;
 struct vm_area_struct * VAR_17, * VAR_18;
 unsigned long VAR_19;
 struct rb_node ** VAR_20, * VAR_21;
 pgoff_t VAR_22 = VAR_14 >> VAR_6;
 int VAR_23;

 VAR_15 = FUNC_1(VAR_15);
 if (!VAR_15)
  return VAR_14;

 VAR_23 = FUNC_10(((void*)0), 0, 0, 0, VAR_14, 1);
 if (VAR_23)
  return VAR_23;

 VAR_19 = VAR_9 | VAR_8 | VAR_16->def_flags;

 VAR_23 = FUNC_5(((void*)0), VAR_14, VAR_15, 0, VAR_4);
 if (VAR_23 & ~VAR_5)
  return VAR_23;




 if (VAR_16->def_flags & VAR_10) {
  unsigned long VAR_24, VAR_25;
  VAR_24 = VAR_15 >> VAR_6;
  VAR_24 += VAR_16->locked_vm;
  VAR_25 = VAR_11->signal->rlim[VAR_7].rlim_cur;
  VAR_25 >>= VAR_6;
  if (VAR_24 > VAR_25 && !FUNC_2(VAR_0))
   return -VAR_1;
 }





 FUNC_12(VAR_16);




 munmap_back:
 VAR_17 = FUNC_4(VAR_16, VAR_14, &VAR_18, &VAR_20, &VAR_21);
 if (VAR_17 && VAR_17->vm_start < VAR_14 + VAR_15) {
  if (FUNC_3(VAR_16, VAR_14, VAR_15))
   return -VAR_2;
  goto munmap_back;
 }


 if (!FUNC_7(VAR_16, VAR_15 >> VAR_6))
  return -VAR_2;

 if (VAR_16->map_count > VAR_12)
  return -VAR_2;

 if (FUNC_11(VAR_15 >> VAR_6))
  return -VAR_2;


 VAR_17 = FUNC_16(VAR_16, VAR_18, VAR_14, VAR_14 + VAR_15, VAR_19,
     ((void*)0), ((void*)0), VAR_22, ((void*)0));
 if (VAR_17)
  goto out;




 VAR_17 = FUNC_6(VAR_13, VAR_3);
 if (!VAR_17) {
  FUNC_14(VAR_15 >> VAR_6);
  return -VAR_2;
 }

 FUNC_0(&VAR_17->anon_vma_chain);
 VAR_17->vm_mm = VAR_16;
 VAR_17->vm_start = VAR_14;
 VAR_17->vm_end = VAR_14 + VAR_15;
 VAR_17->vm_pgoff = VAR_22;
 VAR_17->vm_flags = VAR_19;
 VAR_17->vm_page_prot = FUNC_13(VAR_19);
 FUNC_15(VAR_16, VAR_17, VAR_18, VAR_20, VAR_21);
out:
 FUNC_9(VAR_17);
 VAR_16->total_vm += VAR_15 >> VAR_6;
 if (VAR_19 & VAR_10) {
  if (!FUNC_8(VAR_17, VAR_14, VAR_14 + VAR_15))
   VAR_16->locked_vm += (VAR_15 >> VAR_6);
 }
 return VAR_14;
}
