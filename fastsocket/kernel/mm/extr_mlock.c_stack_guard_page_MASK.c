
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; unsigned long vm_start; int vm_prev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;

__attribute__((used)) static inline int FUNC_1(struct vm_area_struct *VAR_1, unsigned long VAR_2)
{
 return (VAR_1->vm_flags & VAR_0) &&
  (VAR_1->vm_start == VAR_2) &&
  !FUNC_0(VAR_1->vm_prev, VAR_2);
}
