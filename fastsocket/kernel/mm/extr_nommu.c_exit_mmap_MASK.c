
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {struct vm_area_struct* vm_next; } ;
struct mm_struct {struct vm_area_struct* mmap; scalar_t__ total_vm; } ;


 int FUNC_0 (struct mm_struct*,struct vm_area_struct*) ;
 int FUNC_1 (struct vm_area_struct*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;

void FUNC_4(struct mm_struct *VAR_0)
{
 struct vm_area_struct *VAR_1;

 if (!VAR_0)
  return;

 FUNC_2("");

 VAR_0->total_vm = 0;

 while ((VAR_1 = VAR_0->mmap)) {
  VAR_0->mmap = VAR_1->vm_next;
  FUNC_1(VAR_1);
  FUNC_0(VAR_0, VAR_1);
 }

 FUNC_3("");
}
