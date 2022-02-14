
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_size_t ;
typedef scalar_t__ vm_offset_t ;
typedef void* jmp_buf ;


 int FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (scalar_t__,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;

int
FUNC_5(vm_offset_t VAR_1, size_t VAR_2, char *VAR_3)
{
 jmp_buf VAR_4;
 void *VAR_5;
 char *VAR_6;
 int VAR_7;

 VAR_5 = FUNC_3(VAR_4);
 VAR_7 = FUNC_4(VAR_4);
 if (VAR_7 == 0) {
  VAR_6 = (char *)VAR_1;
  while (VAR_2-- > 0)
   *VAR_6++ = *VAR_3++;

  FUNC_2(VAR_0);


  FUNC_0(VAR_1, (vm_size_t)VAR_2);
  FUNC_1(VAR_1, (vm_size_t)VAR_2);
 }
 (void)FUNC_3(VAR_5);

 return (VAR_7);
}
