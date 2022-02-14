
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned int vm_flags; unsigned long vm_end; struct vm_area_struct* vm_next; } ;
struct TYPE_2__ {int mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (size_t) ;
 unsigned int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct vm_area_struct* FUNC_1 (int ,unsigned long,struct vm_area_struct**) ;
 int FUNC_2 (struct vm_area_struct*,struct vm_area_struct**,unsigned long,unsigned long,unsigned int) ;

__attribute__((used)) static int FUNC_3(unsigned long VAR_4, size_t VAR_5, int VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;
 struct vm_area_struct * VAR_10, * VAR_11;
 int VAR_12;

 VAR_5 = FUNC_0(VAR_5);
 VAR_8 = VAR_4 + VAR_5;
 if (VAR_8 < VAR_4)
  return -VAR_0;
 if (VAR_8 == VAR_4)
  return 0;
 VAR_10 = FUNC_1(VAR_3->mm, VAR_4, &VAR_11);
 if (!VAR_10 || VAR_10->vm_start > VAR_4)
  return -VAR_1;

 if (VAR_4 > VAR_10->vm_start)
  VAR_11 = VAR_10;

 for (VAR_7 = VAR_4 ; ; ) {
  unsigned int VAR_13;



  VAR_13 = VAR_10->vm_flags | VAR_2;
  if (!VAR_6)
   VAR_13 &= ~VAR_2;

  VAR_9 = VAR_10->vm_end;
  if (VAR_9 > VAR_8)
   VAR_9 = VAR_8;
  VAR_12 = FUNC_2(VAR_10, &VAR_11, VAR_7, VAR_9, VAR_13);
  if (VAR_12)
   break;
  VAR_7 = VAR_9;
  if (VAR_7 < VAR_11->vm_end)
   VAR_7 = VAR_11->vm_end;
  if (VAR_7 >= VAR_8)
   break;

  VAR_10 = VAR_11->vm_next;
  if (!VAR_10 || VAR_10->vm_start != VAR_7) {
   VAR_12 = -VAR_1;
   break;
  }
 }
 return VAR_12;
}
