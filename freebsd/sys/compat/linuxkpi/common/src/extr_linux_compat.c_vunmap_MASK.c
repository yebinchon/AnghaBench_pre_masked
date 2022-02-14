
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct vmmap {int vm_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct vmmap*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 struct vmmap* FUNC_3 (void*) ;

void
FUNC_4(void *VAR_1)
{
 struct vmmap *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0))
  return;
 FUNC_2((vm_offset_t)VAR_1, VAR_2->vm_size / VAR_0);
 FUNC_1((vm_offset_t)VAR_1, VAR_2->vm_size);
 FUNC_0(VAR_2);
}
