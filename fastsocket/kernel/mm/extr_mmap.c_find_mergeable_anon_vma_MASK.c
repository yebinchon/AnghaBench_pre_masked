
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_start; int vm_mm; struct vm_area_struct* vm_next; } ;
struct anon_vma {int dummy; } ;


 int FUNC_0 (int) ;
 struct vm_area_struct* FUNC_1 (int ,int ,struct vm_area_struct**) ;
 struct anon_vma* FUNC_2 (struct vm_area_struct*,struct vm_area_struct*,struct vm_area_struct*) ;

struct anon_vma *FUNC_3(struct vm_area_struct *VAR_0)
{
 struct anon_vma *VAR_1;
 struct vm_area_struct *VAR_2;

 VAR_2 = VAR_0->vm_next;
 if (!VAR_2)
  goto try_prev;

 VAR_1 = FUNC_2(VAR_2, VAR_0, VAR_2);
 if (VAR_1)
  return VAR_1;
try_prev:







 FUNC_0(FUNC_1(VAR_0->vm_mm, VAR_0->vm_start, &VAR_2) != VAR_0);
 if (!VAR_2)
  goto none;

 VAR_1 = FUNC_2(VAR_2, VAR_2, VAR_0);
 if (VAR_1)
  return VAR_1;
none:
 return ((void*)0);
}
