
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef int uint16_t ;
typedef void* jmp_buf ;
typedef int db_addr_t ;


 void* FUNC_0 (void*) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (int ,size_t) ;
 int FUNC_3 (void*) ;

int
FUNC_4(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 int VAR_3;
 jmp_buf VAR_4;
 void *VAR_5;

 VAR_5 = FUNC_0(VAR_4);
 VAR_3 = FUNC_3(VAR_4);

 if (VAR_3 == 0) {





  if ((VAR_1 == 2 || VAR_1 == 4 || VAR_1 == 8) &&
      ((VAR_0 & (VAR_1 -1)) == 0) &&
      (((vm_offset_t)VAR_2 & (VAR_1 -1)) == 0)) {
   switch (VAR_1) {
   case 2:
    *(uint16_t *)VAR_0 = *(uint16_t *)VAR_2;
    break;
   case 4:
    *(uint32_t *)VAR_0 = *(uint32_t *)VAR_2;
    break;
   case 8:
    *(uint64_t *)VAR_0 = *(uint64_t *)VAR_2;
    break;
   }
  } else {
   char *VAR_6;
   size_t VAR_7 = VAR_1;

   VAR_6 = (char *)VAR_0;
   while (VAR_7-- > 0)
    *VAR_6++ = *VAR_2++;
  }

  FUNC_2((db_addr_t) VAR_0, VAR_1);
  FUNC_1((db_addr_t) VAR_0, VAR_1);
 }
 (void)FUNC_0(VAR_5);
 return (VAR_3);
}
