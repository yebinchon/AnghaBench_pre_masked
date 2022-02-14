
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef void* jmp_buf ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

int
FUNC_2(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 jmp_buf VAR_3;
 void *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = FUNC_1(VAR_3);
 if (VAR_5 == 0) {





  if ((VAR_1 == 2 || VAR_1 == 4 || VAR_1 == 8) &&
      ((VAR_0 & (VAR_1 -1)) == 0) &&
      (((vm_offset_t)VAR_2 & (VAR_1 -1)) == 0)) {
   switch (VAR_1) {
   case 2:
    *(uint16_t *)VAR_2 = *(uint16_t *)VAR_0;
    break;
   case 4:
    *(uint32_t *)VAR_2 = *(uint32_t *)VAR_0;
    break;
   case 8:
    *(uint64_t *)VAR_2 = *(uint64_t *)VAR_0;
    break;
   }
  } else {
   char *VAR_6;

   VAR_6 = (char *)VAR_0;
   while (VAR_1-- > 0)
    *VAR_2++ = *VAR_6++;
  }
 }

 (void)FUNC_0(VAR_4);
 return (VAR_5);
}
