
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef void* jmp_buf ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

int
FUNC_2(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 jmp_buf VAR_3;
 void *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_0(VAR_3);
 VAR_6 = FUNC_1(VAR_3);
 if (VAR_6 == 0) {
  VAR_5 = (char *)VAR_0;
  while (VAR_1-- > 0)
   *VAR_2++ = *VAR_5++;
 }
 (void)FUNC_0(VAR_4);
 return (VAR_6);
}
