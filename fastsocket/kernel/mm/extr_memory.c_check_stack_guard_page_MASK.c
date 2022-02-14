
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; unsigned long vm_end; struct vm_area_struct* vm_next; struct vm_area_struct* vm_prev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct vm_area_struct*,scalar_t__) ;
 int FUNC_1 (struct vm_area_struct*,scalar_t__) ;

__attribute__((used)) static inline int FUNC_2(struct vm_area_struct *VAR_5, unsigned long VAR_6)
{
 VAR_6 &= VAR_1;
 if ((VAR_5->vm_flags & VAR_3) && VAR_6 == VAR_5->vm_start) {
  struct vm_area_struct *VAR_7 = VAR_5->vm_prev;







  if (VAR_7 && VAR_7->vm_end == VAR_6)
   return VAR_7->vm_flags & VAR_3 ? 0 : -VAR_0;

  FUNC_0(VAR_5, VAR_6 - VAR_2);
 }
 if ((VAR_5->vm_flags & VAR_4) && VAR_6 + VAR_2 == VAR_5->vm_end) {
  struct vm_area_struct *VAR_8 = VAR_5->vm_next;


  if (VAR_8 && VAR_8->vm_start == VAR_6 + VAR_2)
   return VAR_8->vm_flags & VAR_4 ? 0 : -VAR_0;

  FUNC_1(VAR_5, VAR_6 + VAR_2);
 }
 return 0;
}
