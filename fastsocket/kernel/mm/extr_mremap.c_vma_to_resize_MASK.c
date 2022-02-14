
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {unsigned long vm_start; unsigned long vm_end; int vm_flags; scalar_t__ vm_pgoff; } ;
struct mm_struct {unsigned long locked_vm; } ;
struct TYPE_6__ {TYPE_2__* signal; struct mm_struct* mm; } ;
struct TYPE_5__ {TYPE_1__* rlim; } ;
struct TYPE_4__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct vm_area_struct* FUNC_0 (int ) ;
 unsigned long VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_11 ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_5 (unsigned long) ;

__attribute__((used)) static struct vm_area_struct *FUNC_6(unsigned long VAR_12,
 unsigned long VAR_13, unsigned long VAR_14, unsigned long *VAR_15)
{
 struct mm_struct *VAR_16 = VAR_11->mm;
 struct vm_area_struct *VAR_17 = FUNC_2(VAR_16, VAR_12);

 if (!VAR_17 || VAR_17->vm_start > VAR_12)
  goto Efault;

 if (FUNC_3(VAR_17))
  goto Einval;


 if (VAR_13 > VAR_17->vm_end - VAR_12)
  goto Efault;


 if (VAR_14 > VAR_13) {
  unsigned long VAR_18;

  if (VAR_17->vm_flags & (VAR_8 | VAR_10))
   goto Efault;
  VAR_18 = (VAR_12 - VAR_17->vm_start) >> VAR_5;
  VAR_18 += VAR_17->vm_pgoff;
  if (VAR_18 + (VAR_14 >> VAR_5) < VAR_18)
   goto Einval;
 }

 if (VAR_17->vm_flags & VAR_9) {
  unsigned long VAR_19, VAR_20;
  VAR_19 = VAR_16->locked_vm << VAR_5;
  VAR_20 = VAR_11->signal->rlim[VAR_6].rlim_cur;
  VAR_19 += VAR_14 - VAR_13;
  if (VAR_19 > VAR_20 && !FUNC_1(VAR_0))
   goto Eagain;
 }

 if (!FUNC_4(VAR_16, (VAR_14 - VAR_13) >> VAR_5))
  goto Enomem;

 if (VAR_17->vm_flags & VAR_7) {
  unsigned long VAR_21 = (VAR_14 - VAR_13) >> VAR_5;
  if (FUNC_5(VAR_21))
   goto Efault;
  *VAR_15 = VAR_21;
 }

 return VAR_17;

Efault:
 return FUNC_0(-VAR_2);
Einval:
 return FUNC_0(-VAR_3);
Enomem:
 return FUNC_0(-VAR_4);
Eagain:
 return FUNC_0(-VAR_1);
}
