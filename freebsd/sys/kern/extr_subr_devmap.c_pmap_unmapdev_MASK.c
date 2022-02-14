
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef int vm_offset_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void
FUNC_5(vm_offset_t VAR_2, vm_size_t VAR_3)
{
 vm_offset_t VAR_4;


 if (FUNC_0((void*)VAR_2, VAR_3) != VAR_0)
  return;

 VAR_4 = VAR_2 & VAR_1;
 VAR_2 = FUNC_4(VAR_2);
 VAR_3 = FUNC_3(VAR_3 + VAR_4);

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2, VAR_3);
}
