
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; unsigned long vm_pgoff; int vm_flags; int anon_vma; struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; } ;
struct mempolicy {int dummy; } ;
struct file {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef unsigned long pgoff_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,unsigned long,struct anon_vma*,struct file*,unsigned long) ;
 scalar_t__ FUNC_2 (struct vm_area_struct*,unsigned long,struct anon_vma*,struct file*,unsigned long) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (struct vm_area_struct*) ;
 scalar_t__ FUNC_5 (struct mempolicy*,struct mempolicy*) ;
 int FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,int *) ;
 struct mempolicy* FUNC_7 (struct vm_area_struct*) ;

struct vm_area_struct *FUNC_8(struct mm_struct *VAR_3,
   struct vm_area_struct *VAR_4, unsigned long VAR_5,
   unsigned long VAR_6, unsigned long VAR_7,
        struct anon_vma *VAR_8, struct file *VAR_9,
   pgoff_t VAR_10, struct mempolicy *VAR_11)
{
 pgoff_t VAR_12 = (VAR_6 - VAR_5) >> VAR_0;
 struct vm_area_struct *VAR_13, *VAR_14;
 int VAR_15;





 if (VAR_7 & VAR_2)
  return ((void*)0);

 if (VAR_4)
  VAR_14 = VAR_4->vm_next;
 else
  VAR_14 = VAR_3->mmap;
 VAR_13 = VAR_14;
 if (VAR_14 && VAR_14->vm_end == VAR_6)
  VAR_14 = VAR_14->vm_next;




 if (VAR_4 && VAR_4->vm_end == VAR_5 &&
     FUNC_5(FUNC_7(VAR_4), VAR_11) &&
   FUNC_1(VAR_4, VAR_7,
      VAR_8, VAR_9, VAR_10)) {



  if (VAR_14 && VAR_6 == VAR_14->vm_start &&
    FUNC_5(VAR_11, FUNC_7(VAR_14)) &&
    FUNC_2(VAR_14, VAR_7,
     VAR_8, VAR_9, VAR_10+VAR_12) &&
    FUNC_3(VAR_4->anon_vma,
            VAR_14->anon_vma, ((void*)0))) {

   VAR_15 = FUNC_6(VAR_4, VAR_4->vm_start,
    VAR_14->vm_end, VAR_4->vm_pgoff, ((void*)0));
  } else
   VAR_15 = FUNC_6(VAR_4, VAR_4->vm_start,
    VAR_6, VAR_4->vm_pgoff, ((void*)0));
  if (VAR_15)
   return ((void*)0);
  if (VAR_4->vm_flags & VAR_1)
   FUNC_0(VAR_3, VAR_4->vm_end);
  FUNC_4(VAR_4);
  return VAR_4;
 }




 if (VAR_14 && VAR_6 == VAR_14->vm_start &&
    FUNC_5(VAR_11, FUNC_7(VAR_14)) &&
   FUNC_2(VAR_14, VAR_7,
     VAR_8, VAR_9, VAR_10+VAR_12)) {
  if (VAR_4 && VAR_5 < VAR_4->vm_end)
   VAR_15 = FUNC_6(VAR_4, VAR_4->vm_start,
    VAR_5, VAR_4->vm_pgoff, ((void*)0));
  else
   VAR_15 = FUNC_6(VAR_13, VAR_5, VAR_14->vm_end,
    VAR_14->vm_pgoff - VAR_12, ((void*)0));
  if (VAR_15)
   return ((void*)0);
  FUNC_4(VAR_13);
  return VAR_13;
 }

 return ((void*)0);
}
