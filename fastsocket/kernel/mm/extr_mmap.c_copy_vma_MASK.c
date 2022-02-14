
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; int vm_flags; unsigned long vm_end; unsigned long vm_pgoff; TYPE_1__* vm_ops; scalar_t__ vm_file; int anon_vma_chain; int anon_vma; struct mm_struct* vm_mm; } ;
struct rb_node {int dummy; } ;
struct mm_struct {int dummy; } ;
struct mempolicy {int dummy; } ;
typedef unsigned long pgoff_t ;
struct TYPE_2__ {int (* open ) (struct vm_area_struct*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct mempolicy*) ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct mm_struct*) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*,struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,unsigned long,struct vm_area_struct**,struct rb_node***,struct rb_node**) ;
 int FUNC_5 (scalar_t__) ;
 struct vm_area_struct* FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,struct vm_area_struct*) ;
 struct mempolicy* FUNC_8 (int ) ;
 int FUNC_9 (struct mempolicy*) ;
 int FUNC_10 (struct vm_area_struct*) ;
 int VAR_3 ;
 int FUNC_11 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,struct rb_node**,struct rb_node*) ;
 struct vm_area_struct* FUNC_12 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,int,int ,scalar_t__,unsigned long,int ) ;
 int FUNC_13 (struct vm_area_struct*) ;
 int FUNC_14 (struct vm_area_struct*,struct mempolicy*) ;

struct vm_area_struct *FUNC_15(struct vm_area_struct **VAR_4,
 unsigned long VAR_5, unsigned long VAR_6, pgoff_t VAR_7)
{
 struct vm_area_struct *VAR_8 = *VAR_4;
 unsigned long VAR_9 = VAR_8->vm_start;
 struct mm_struct *VAR_10 = VAR_8->vm_mm;
 struct vm_area_struct *VAR_11, *VAR_12;
 struct rb_node **VAR_13, *VAR_14;
 struct mempolicy *VAR_15;





 if (!VAR_8->vm_file && !VAR_8->anon_vma)
  VAR_7 = VAR_5 >> VAR_1;

 FUNC_4(VAR_10, VAR_5, &VAR_12, &VAR_13, &VAR_14);
 VAR_11 = FUNC_12(VAR_10, VAR_12, VAR_5, VAR_5 + VAR_6, VAR_8->vm_flags,
   VAR_8->anon_vma, VAR_8->vm_file, VAR_7, FUNC_13(VAR_8));
 if (VAR_11) {



  if (VAR_9 >= VAR_11->vm_start &&
      VAR_9 < VAR_11->vm_end)
   *VAR_4 = VAR_11;
 } else {
  VAR_11 = FUNC_6(VAR_3, VAR_0);
  if (VAR_11) {
   *VAR_11 = *VAR_8;
   VAR_15 = FUNC_8(FUNC_13(VAR_8));
   if (FUNC_1(VAR_15))
    goto out_free_vma;
   FUNC_0(&VAR_11->anon_vma_chain);
   if (FUNC_3(VAR_11, VAR_8))
    goto out_free_mempol;
   FUNC_14(VAR_11, VAR_15);
   VAR_11->vm_start = VAR_5;
   VAR_11->vm_end = VAR_5 + VAR_6;
   VAR_11->vm_pgoff = VAR_7;
   if (VAR_11->vm_file) {
    FUNC_5(VAR_11->vm_file);
    if (VAR_8->vm_flags & VAR_2)
     FUNC_2(VAR_10);
   }
   if (VAR_11->vm_ops && VAR_11->vm_ops->open)
    VAR_11->vm_ops->open(VAR_11);
   FUNC_11(VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
  }
 }
 return VAR_11;

 out_free_mempol:
 FUNC_9(VAR_15);
 out_free_vma:
 FUNC_7(VAR_3, VAR_11);
 return ((void*)0);
}
