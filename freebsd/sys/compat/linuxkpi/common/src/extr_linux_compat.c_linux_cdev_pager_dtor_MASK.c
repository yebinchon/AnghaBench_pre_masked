
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_operations_struct {int (* close ) (struct vm_area_struct*) ;} ;
struct vm_area_struct {TYPE_1__* vm_mm; struct vm_operations_struct* vm_ops; } ;
struct TYPE_2__ {int mmap_sem; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct vm_area_struct* FUNC_3 (void*) ;
 int FUNC_4 (struct vm_area_struct*) ;
 int FUNC_5 (struct vm_area_struct*) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(void *VAR_0)
{
 const struct vm_operations_struct *VAR_1;
 struct vm_area_struct *VAR_2;

 VAR_2 = FUNC_3(VAR_0);
 FUNC_0(VAR_2 != ((void*)0));





 FUNC_5(VAR_2);

 FUNC_1(&VAR_2->vm_mm->mmap_sem);
 VAR_1 = VAR_2->vm_ops;
 if (FUNC_2(VAR_1 != ((void*)0)))
  VAR_1->close(VAR_2);
 FUNC_7(&VAR_2->vm_mm->mmap_sem);

 FUNC_4(VAR_2);
}
