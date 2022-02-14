
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct mm_struct {unsigned long shlib_base; unsigned long brk; unsigned long (* get_unmapped_area ) (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;int start_brk; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (unsigned long) ;
 unsigned long VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct vm_area_struct* FUNC_1 (struct mm_struct*,unsigned long) ;
 unsigned long FUNC_2 (int ,unsigned long) ;
 unsigned long FUNC_3 (int,int,unsigned long) ;
 scalar_t__ FUNC_4 () ;
 unsigned long FUNC_5 (struct file*,unsigned long,unsigned long,unsigned long,unsigned long) ;

unsigned long
FUNC_6(struct file *VAR_4, unsigned long VAR_5,
  unsigned long VAR_6, unsigned long VAR_7, unsigned long VAR_8)
{
 unsigned long VAR_9 = VAR_5, VAR_10 = VAR_6;
 struct mm_struct *VAR_11 = VAR_3->mm;
 struct vm_area_struct *VAR_12;
 unsigned long VAR_13;

 if (VAR_10 > VAR_2)
  return -VAR_0;

 if (VAR_8 & VAR_1)
  return VAR_9;

 if (!VAR_9)
  VAR_9 = !FUNC_4() ? VAR_11->shlib_base :
   FUNC_3(VAR_11->shlib_base, 0x01000000, VAR_10);

 if (VAR_9) {
  VAR_9 = FUNC_0(VAR_9);
  VAR_12 = FUNC_1(VAR_11, VAR_9);
  if (VAR_2 - VAR_10 >= VAR_9 &&
      (!VAR_12 || VAR_9 + VAR_10 <= VAR_12->vm_start))
   return VAR_9;
 }

 VAR_9 = VAR_11->shlib_base;
 for (VAR_12 = FUNC_1(VAR_11, VAR_9); ; VAR_12 = VAR_12->vm_next) {

  if (VAR_2 - VAR_10 < VAR_9)
   return -VAR_0;

  if (!VAR_12 || VAR_9 + VAR_10 <= VAR_12->vm_start) {




   if (VAR_9 + VAR_10 > VAR_11->brk)
    goto failed;





   if (VAR_9 >= 0x01000000 && FUNC_4()) {
    VAR_13 = FUNC_3(0x01000000,
     FUNC_0(FUNC_2(VAR_11->start_brk,
     (unsigned long)0x08000000)), VAR_10);
    VAR_12 = FUNC_1(VAR_11, VAR_13);
    if (VAR_2 - VAR_10 >= VAR_13 &&
        (!VAR_12 || VAR_13 + VAR_10 <= VAR_12->vm_start))
     return VAR_13;
   }




   return VAR_9;
  }
  VAR_9 = VAR_12->vm_end;
 }

failed:
 return VAR_3->mm->get_unmapped_area(VAR_4, VAR_5, VAR_6, VAR_7, VAR_8);
}
