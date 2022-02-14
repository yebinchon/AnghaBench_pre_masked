
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; struct vm_area_struct* vm_next; } ;
struct mm_struct {scalar_t__ map_count; scalar_t__ locked_vm; struct vm_area_struct* mmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 int FUNC_2 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_3 (struct mm_struct*,unsigned long) ;
 struct vm_area_struct* FUNC_4 (struct mm_struct*,unsigned long,struct vm_area_struct**) ;
 int FUNC_5 (struct vm_area_struct*) ;
 int FUNC_6 (struct mm_struct*,struct vm_area_struct*) ;
 scalar_t__ VAR_5 ;
 int FUNC_7 (struct mm_struct*,struct vm_area_struct*,struct vm_area_struct*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_8 (struct vm_area_struct*) ;

int FUNC_9(struct mm_struct *VAR_6, unsigned long VAR_7, size_t VAR_8)
{
 unsigned long VAR_9;
 struct vm_area_struct *VAR_10, *VAR_11, *VAR_12;

 if ((VAR_7 & ~VAR_2) || VAR_7 > VAR_3 || VAR_8 > VAR_3-VAR_7)
  return -VAR_0;

 if ((VAR_8 = FUNC_0(VAR_8)) == 0)
  return -VAR_0;


 VAR_10 = FUNC_4(VAR_6, VAR_7, &VAR_11);
 if (!VAR_10)
  return 0;



 VAR_9 = VAR_7 + VAR_8;
 if (VAR_10->vm_start >= VAR_9)
  return 0;
 if (VAR_7 > VAR_10->vm_start) {
  int VAR_13;






  if (VAR_9 < VAR_10->vm_end && VAR_6->map_count >= VAR_5)
   return -VAR_1;

  VAR_13 = FUNC_1(VAR_6, VAR_10, VAR_7, 0);
  if (VAR_13)
   return VAR_13;
  VAR_11 = VAR_10;
 }


 VAR_12 = FUNC_3(VAR_6, VAR_9);
 if (VAR_12 && VAR_9 > VAR_12->vm_start) {
  int VAR_14 = FUNC_1(VAR_6, VAR_12, VAR_9, 1);
  if (VAR_14)
   return VAR_14;
 }
 VAR_10 = VAR_11? VAR_11->vm_next: VAR_6->mmap;




 if (VAR_6->locked_vm) {
  struct vm_area_struct *VAR_15 = VAR_10;
  while (VAR_15 && VAR_15->vm_start < VAR_9) {
   if (VAR_15->vm_flags & VAR_4) {
    VAR_6->locked_vm -= FUNC_8(VAR_15);
    FUNC_5(VAR_15);
   }
   VAR_15 = VAR_15->vm_next;
  }
 }




 FUNC_2(VAR_6, VAR_10, VAR_11, VAR_9);
 FUNC_7(VAR_6, VAR_10, VAR_11, VAR_7, VAR_9);


 FUNC_6(VAR_6, VAR_10);

 return 0;
}
