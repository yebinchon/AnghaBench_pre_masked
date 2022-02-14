
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int vm_flags; void* vm_private_data; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct vm_area_struct*) ;

void FUNC_2(struct vm_area_struct *VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1));
 if (!(VAR_1->vm_flags & VAR_0))
  VAR_1->vm_private_data = (void *)0;
}
