
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_flags; unsigned long vm_pgoff; unsigned long vm_start; unsigned long vm_end; TYPE_1__* vm_next; int vm_file; struct mm_struct* vm_mm; } ;
struct mm_struct {int map_count; unsigned long hiwater_vm; unsigned long total_vm; unsigned long locked_vm; } ;
struct TYPE_2__ {unsigned long vm_flags; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 struct vm_area_struct* FUNC_0 (struct vm_area_struct**,unsigned long,unsigned long,unsigned long) ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct vm_area_struct*,unsigned long,unsigned long,int ,unsigned long*) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct vm_area_struct*,unsigned long,struct vm_area_struct*,unsigned long,unsigned long) ;
 int VAR_5 ;
 int FUNC_5 (struct mm_struct*,unsigned long,int ,unsigned long) ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static unsigned long FUNC_7(struct vm_area_struct *VAR_6,
  unsigned long VAR_7, unsigned long VAR_8,
  unsigned long VAR_9, unsigned long VAR_10)
{
 struct mm_struct *VAR_11 = VAR_6->vm_mm;
 struct vm_area_struct *VAR_12;
 unsigned long VAR_13 = VAR_6->vm_flags;
 unsigned long VAR_14;
 unsigned long VAR_15;
 unsigned long VAR_16 = 0;
 unsigned long VAR_17;
 int VAR_18 = 0;
 int VAR_19;





 if (VAR_11->map_count >= VAR_5 - 3)
  return -VAR_0;
 VAR_19 = FUNC_2(VAR_6, VAR_7, VAR_7 + VAR_8,
      VAR_1, &VAR_13);
 if (VAR_19)
  return VAR_19;

 VAR_14 = VAR_6->vm_pgoff + ((VAR_7 - VAR_6->vm_start) >> VAR_2);
 VAR_12 = FUNC_0(&VAR_6, VAR_10, VAR_9, VAR_14);
 if (!VAR_12)
  return -VAR_0;

 VAR_15 = FUNC_4(VAR_6, VAR_7, VAR_12, VAR_10, VAR_8);
 if (VAR_15 < VAR_8) {





  FUNC_4(VAR_12, VAR_10, VAR_6, VAR_7, VAR_15);
  VAR_6 = VAR_12;
  VAR_8 = VAR_9;
  VAR_7 = VAR_10;
  VAR_10 = -VAR_0;
 }


 if (VAR_13 & VAR_3) {
  VAR_6->vm_flags &= ~VAR_3;
  VAR_16 = VAR_6->vm_end - VAR_6->vm_start - VAR_8;
  if (VAR_7 > VAR_6->vm_start &&
      VAR_7 + VAR_8 < VAR_6->vm_end)
   VAR_18 = 1;
 }
 VAR_17 = VAR_11->hiwater_vm;
 VAR_11->total_vm += VAR_9 >> VAR_2;
 FUNC_5(VAR_11, VAR_6->vm_flags, VAR_6->vm_file, VAR_9>>VAR_2);

 if (FUNC_1(VAR_11, VAR_7, VAR_8) < 0) {

  FUNC_6(VAR_16 >> VAR_2);
  VAR_16 = 0;
 }
 VAR_11->hiwater_vm = VAR_17;


 if (VAR_16) {
  VAR_6->vm_flags |= VAR_3;
  if (VAR_18)
   VAR_6->vm_next->vm_flags |= VAR_3;
 }

 if (VAR_13 & VAR_4) {
  VAR_11->locked_vm += VAR_9 >> VAR_2;
  if (VAR_9 > VAR_8)
   FUNC_3(VAR_12, VAR_10 + VAR_8,
             VAR_10 + VAR_9);
 }

 return VAR_10;
}
