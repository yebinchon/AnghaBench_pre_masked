
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_file; struct mm_struct* vm_mm; } ;
struct rlimit {unsigned long rlim_cur; } ;
struct mm_struct {unsigned long locked_vm; unsigned long total_vm; } ;
struct TYPE_4__ {TYPE_1__* signal; } ;
struct TYPE_3__ {struct rlimit* rlim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 TYPE_2__* VAR_7 ;
 scalar_t__ FUNC_1 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_2 (struct mm_struct*,unsigned long) ;
 scalar_t__ FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (struct mm_struct*,unsigned long) ;
 int FUNC_5 (struct mm_struct*,int,int ,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct vm_area_struct *VAR_8, unsigned long VAR_9, unsigned long VAR_10)
{
 struct mm_struct *VAR_11 = VAR_8->vm_mm;
 struct rlimit *VAR_12 = VAR_7->signal->rlim;
 unsigned long VAR_13;


 if (!FUNC_2(VAR_11, VAR_10))
  return -VAR_2;


 if (FUNC_3(VAR_9))
  return -VAR_2;


 if (VAR_8->vm_flags & VAR_6) {
  unsigned long VAR_14;
  unsigned long VAR_15;
  VAR_14 = VAR_11->locked_vm + VAR_10;
  VAR_15 = VAR_12[VAR_4].rlim_cur >> VAR_3;
  if (VAR_14 > VAR_15 && !FUNC_0(VAR_0))
   return -VAR_2;
 }


 VAR_13 = (VAR_8->vm_flags & VAR_5) ? VAR_8->vm_start :
   VAR_8->vm_end - VAR_9;
 if (FUNC_1(VAR_8->vm_mm, VAR_13, VAR_9))
  return -VAR_1;





 if (FUNC_4(VAR_11, VAR_10))
  return -VAR_2;


 VAR_11->total_vm += VAR_10;
 if (VAR_8->vm_flags & VAR_6)
  VAR_11->locked_vm += VAR_10;
 FUNC_5(VAR_11, VAR_8->vm_flags, VAR_8->vm_file, VAR_10);
 return 0;
}
