
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int u_int ;


 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int,size_t) ;
 int FUNC_3 () ;

int
FUNC_4(vm_offset_t VAR_0, size_t VAR_1, char *VAR_2)
{
 char *VAR_3;
 size_t VAR_4;

 VAR_3 = (char *)VAR_0;
 if (FUNC_1((u_int)VAR_3)) {
  FUNC_0("address %p is invalid\n", VAR_3);
  return (0);
 }

 if (VAR_1 == 4 && (VAR_0 & 3) == 0 && ((uintptr_t)VAR_2 & 3) == 0)
  *((int*)VAR_3) = *((int*)VAR_2);
 else
 if (VAR_1 == 2 && (VAR_0 & 1) == 0 && ((uintptr_t)VAR_2 & 1) == 0)
  *((short*)VAR_3) = *((short*)VAR_2);
 else {
  VAR_4 = VAR_1;
  while (VAR_4-- > 0) {
   if (FUNC_1((u_int)VAR_3)) {
    FUNC_0("address %p is invalid\n", VAR_3);
    return (-1);
   }
   *VAR_3++ = *VAR_2++;
  }
 }


 FUNC_2(VAR_0, VAR_1);


 FUNC_3();
 return (0);
}
