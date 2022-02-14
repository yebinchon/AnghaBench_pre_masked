
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; scalar_t__ vm_pgoff; int vm_file; } ;
struct mm_struct {int dummy; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 unsigned long VAR_0 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*) ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_1 (struct vm_area_struct*) ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned long FUNC_2 (struct mm_struct*,unsigned long,unsigned long) ;
 unsigned long FUNC_3 (int ,unsigned long,unsigned long,scalar_t__,unsigned long) ;
 unsigned long FUNC_4 (struct vm_area_struct*,unsigned long,unsigned long,unsigned long,unsigned long) ;
 unsigned long FUNC_5 (int *,int ,int ,int ,unsigned long,int) ;
 int FUNC_6 (unsigned long) ;
 struct vm_area_struct* FUNC_7 (unsigned long,unsigned long,unsigned long,unsigned long*) ;

__attribute__((used)) static unsigned long FUNC_8(unsigned long VAR_8,
 unsigned long VAR_9, unsigned long VAR_10,
 unsigned long VAR_11)
{
 struct mm_struct *VAR_12 = VAR_7->mm;
 struct vm_area_struct *VAR_13;
 unsigned long VAR_14 = -VAR_0;
 unsigned long VAR_15 = 0;
 unsigned long VAR_16;

 if (VAR_10 & ~VAR_3)
  goto out;

 if (VAR_11 > VAR_5 || VAR_10 > VAR_5 - VAR_11)
  goto out;




 if ((VAR_10 <= VAR_8) && (VAR_10+VAR_11) > VAR_8)
  goto out;

 if ((VAR_8 <= VAR_10) && (VAR_8+VAR_9) > VAR_10)
  goto out;

 VAR_14 = FUNC_5(((void*)0), 0, 0, 0, VAR_10, 1);
 if (VAR_14)
  goto out;

 VAR_14 = FUNC_2(VAR_12, VAR_10, VAR_11);
 if (VAR_14)
  goto out;

 if (VAR_9 >= VAR_11) {
  VAR_14 = FUNC_2(VAR_12, VAR_8+VAR_11, VAR_9 - VAR_11);
  if (VAR_14 && VAR_9 != VAR_11)
   goto out;
  VAR_9 = VAR_11;
 }

 VAR_13 = FUNC_7(VAR_8, VAR_9, VAR_11, &VAR_15);
 if (FUNC_0(VAR_13)) {
  VAR_14 = FUNC_1(VAR_13);
  goto out;
 }

 VAR_16 = VAR_1;
 if (VAR_13->vm_flags & VAR_6)
  VAR_16 |= VAR_2;

 VAR_14 = FUNC_3(VAR_13->vm_file, VAR_10, VAR_11, VAR_13->vm_pgoff +
    ((VAR_8 - VAR_13->vm_start) >> VAR_4),
    VAR_16);
 if (VAR_14 & ~VAR_3)
  goto out1;

 VAR_14 = FUNC_4(VAR_13, VAR_8, VAR_9, VAR_11, VAR_10);
 if (!(VAR_14 & ~VAR_3))
  goto out;
out1:
 FUNC_6(VAR_15);

out:
 return VAR_14;
}
