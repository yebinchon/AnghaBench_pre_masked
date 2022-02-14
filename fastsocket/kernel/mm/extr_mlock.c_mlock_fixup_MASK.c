
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {unsigned int vm_flags; unsigned long vm_start; unsigned long vm_end; int vm_file; int anon_vma; scalar_t__ vm_pgoff; struct mm_struct* vm_mm; } ;
struct mm_struct {int locked_vm; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_2__ {int mm; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct vm_area_struct*,unsigned long,unsigned long) ;
 TYPE_1__* VAR_6 ;
 struct vm_area_struct* FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct vm_area_struct*) ;
 int FUNC_4 (unsigned long,unsigned long) ;
 int FUNC_5 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_6 (struct mm_struct*,struct vm_area_struct*,unsigned long,int) ;
 struct vm_area_struct* FUNC_7 (struct mm_struct*,struct vm_area_struct*,unsigned long,unsigned long,unsigned int,int ,int ,scalar_t__,int ) ;
 int FUNC_8 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_9(struct vm_area_struct *VAR_7, struct vm_area_struct **VAR_8,
 unsigned long VAR_9, unsigned long VAR_10, unsigned int VAR_11)
{
 struct mm_struct *VAR_12 = VAR_7->vm_mm;
 pgoff_t VAR_13;
 int VAR_14;
 int VAR_15 = 0;
 int VAR_16 = VAR_11 & VAR_3;

 if (VAR_11 == VAR_7->vm_flags ||
   (VAR_7->vm_flags & (VAR_2 | VAR_4)))
  goto out;

 if ((VAR_7->vm_flags & (VAR_1 | VAR_5)) ||
   FUNC_3(VAR_7) ||
   VAR_7 == FUNC_2(VAR_6->mm)) {
  if (VAR_16)
   FUNC_4(VAR_9, VAR_10);
  goto out;
 }

 VAR_13 = VAR_7->vm_pgoff + ((VAR_9 - VAR_7->vm_start) >> VAR_0);
 *VAR_8 = FUNC_7(VAR_12, *VAR_8, VAR_9, VAR_10, VAR_11, VAR_7->anon_vma,
     VAR_7->vm_file, VAR_13, FUNC_8(VAR_7));
 if (*VAR_8) {
  VAR_7 = *VAR_8;
  goto success;
 }

 if (VAR_9 != VAR_7->vm_start) {
  VAR_15 = FUNC_6(VAR_12, VAR_7, VAR_9, 1);
  if (VAR_15)
   goto out;
 }

 if (VAR_10 != VAR_7->vm_end) {
  VAR_15 = FUNC_6(VAR_12, VAR_7, VAR_10, 0);
  if (VAR_15)
   goto out;
 }

success:



 VAR_14 = (VAR_10 - VAR_9) >> VAR_0;
 if (!VAR_16)
  VAR_14 = -VAR_14;
 VAR_12->locked_vm += VAR_14;







 if (VAR_16) {
  VAR_7->vm_flags = VAR_11;
  VAR_15 = FUNC_1(VAR_7, VAR_9, VAR_10);
  if (VAR_15 < 0)
   VAR_15 = FUNC_0(VAR_15);
 } else {
  FUNC_5(VAR_7, VAR_9, VAR_10);
 }

out:
 *VAR_8 = VAR_7;
 return VAR_15;
}
