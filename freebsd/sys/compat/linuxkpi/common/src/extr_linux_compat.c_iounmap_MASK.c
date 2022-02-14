
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct vmmap {int vm_size; } ;


 int FUNC_0 (struct vmmap*) ;
 int FUNC_1 (int ,int ) ;
 struct vmmap* FUNC_2 (void*) ;

void
FUNC_3(void *VAR_0)
{
 struct vmmap *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1 == ((void*)0))
  return;

 FUNC_1((vm_offset_t)VAR_0, VAR_1->vm_size);

 FUNC_0(VAR_1);
}
