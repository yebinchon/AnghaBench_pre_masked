
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_end; unsigned long vm_start; int vm_flags; scalar_t__ vm_pgoff; int vm_file; } ;
struct mm_struct {int total_vm; int locked_vm; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (unsigned long) ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long FUNC_2 (struct vm_area_struct*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 unsigned long FUNC_3 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (int ,int ,unsigned long,scalar_t__,unsigned long,int) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_6 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_7 (unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_8 (int *,int ,int ,int ,unsigned long,int) ;
 int FUNC_9 (struct mm_struct*,int,int ,int) ;
 int FUNC_10 (unsigned long) ;
 scalar_t__ FUNC_11 (struct vm_area_struct*,unsigned long,unsigned long,scalar_t__,int *) ;
 scalar_t__ FUNC_12 (struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_13 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

unsigned long FUNC_14(unsigned long VAR_11,
 unsigned long VAR_12, unsigned long VAR_13,
 unsigned long VAR_14, unsigned long VAR_15)
{
 struct mm_struct *VAR_16 = VAR_10->mm;
 struct vm_area_struct *VAR_17;
 unsigned long VAR_18 = -VAR_0;
 unsigned long VAR_19 = 0;

 if (VAR_14 & ~(VAR_3 | VAR_4))
  goto out;

 if (VAR_11 & ~VAR_5)
  goto out;

 VAR_12 = FUNC_1(VAR_12);
 VAR_13 = FUNC_1(VAR_13);






 if (!VAR_13)
  goto out;

 if (VAR_14 & VAR_3) {
  if (VAR_14 & VAR_4)
   VAR_18 = FUNC_7(VAR_11, VAR_12, VAR_15, VAR_13);
  goto out;
 }






 if (VAR_12 >= VAR_13) {
  VAR_18 = FUNC_3(VAR_16, VAR_11+VAR_13, VAR_12 - VAR_13);
  if (VAR_18 && VAR_12 != VAR_13)
   goto out;
  VAR_18 = VAR_11;
  goto out;
 }




 VAR_17 = FUNC_13(VAR_11, VAR_12, VAR_13, &VAR_19);
 if (FUNC_0(VAR_17)) {
  VAR_18 = FUNC_2(VAR_17);
  goto out;
 }



 if (VAR_12 == VAR_17->vm_end - VAR_11) {

  if (FUNC_12(VAR_17, VAR_13 - VAR_12)) {
   int VAR_20 = (VAR_13 - VAR_12) >> VAR_6;

   if (FUNC_11(VAR_17, VAR_17->vm_start, VAR_11 + VAR_13,
           VAR_17->vm_pgoff, ((void*)0))) {
    VAR_18 = -VAR_1;
    goto out;
   }

   VAR_16->total_vm += VAR_20;
   FUNC_9(VAR_16, VAR_17->vm_flags, VAR_17->vm_file, VAR_20);
   if (VAR_17->vm_flags & VAR_8) {
    VAR_16->locked_vm += VAR_20;
    FUNC_5(VAR_17, VAR_11 + VAR_12,
         VAR_11 + VAR_13);
   }
   VAR_18 = VAR_11;
   goto out;
  }
 }





 VAR_18 = -VAR_1;
 if (VAR_14 & VAR_4) {
  unsigned long VAR_21 = 0;
  if (VAR_17->vm_flags & VAR_9)
   VAR_21 |= VAR_2;

  VAR_15 = FUNC_4(VAR_17->vm_file, 0, VAR_13,
     VAR_17->vm_pgoff +
     ((VAR_11 - VAR_17->vm_start) >> VAR_6),
     VAR_21, VAR_17->vm_flags & VAR_7);
  if (VAR_15 & ~VAR_5) {
   VAR_18 = VAR_15;
   goto out;
  }

  VAR_18 = FUNC_8(((void*)0), 0, 0, 0, VAR_15, 1);
  if (VAR_18)
   goto out;
  VAR_18 = FUNC_6(VAR_17, VAR_11, VAR_12, VAR_13, VAR_15);
 }
out:
 if (VAR_18 & ~VAR_5)
  FUNC_10(VAR_19);
 return VAR_18;
}
