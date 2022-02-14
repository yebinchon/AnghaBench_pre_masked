
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {scalar_t__ vm_end; scalar_t__ vm_start; scalar_t__ vm_pgoff; int anon_vma; } ;
struct file {int dummy; } ;
struct anon_vma {int dummy; } ;
typedef scalar_t__ pgoff_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct anon_vma*,int ,struct vm_area_struct*) ;
 scalar_t__ FUNC_1 (struct vm_area_struct*,struct file*,unsigned long) ;

__attribute__((used)) static int
FUNC_2(struct vm_area_struct *VAR_1, unsigned long VAR_2,
 struct anon_vma *VAR_3, struct file *VAR_4, pgoff_t VAR_5)
{
 if (FUNC_1(VAR_1, VAR_4, VAR_2) &&
     FUNC_0(VAR_3, VAR_1->anon_vma, VAR_1)) {
  pgoff_t VAR_6;
  VAR_6 = (VAR_1->vm_end - VAR_1->vm_start) >> VAR_0;
  if (VAR_1->vm_pgoff + VAR_6 == VAR_5)
   return 1;
 }
 return 0;
}
