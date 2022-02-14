
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef void* jmp_buf ;


 int FUNC_0 () ;
 void* FUNC_1 (void*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (void*) ;

int
FUNC_4(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 jmp_buf VAR_3;
 void *VAR_4;
 char *VAR_5;
 bool VAR_6;
 int VAR_7;

 VAR_6 = 0;
 VAR_4 = FUNC_1(VAR_3);
 VAR_7 = FUNC_3(VAR_3);
 if (VAR_7 == 0) {
  VAR_6 = FUNC_0();
  VAR_5 = (char *)VAR_0;
  while (VAR_1-- > 0)
   *VAR_5++ = *VAR_2++;
 }
 FUNC_2(VAR_6);
 (void)FUNC_1(VAR_4);
 return (VAR_7);
}
