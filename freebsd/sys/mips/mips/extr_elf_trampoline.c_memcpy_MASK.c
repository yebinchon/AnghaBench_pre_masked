
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int uint32_t ;



__attribute__((used)) static __inline void *
FUNC_0(void *VAR_0, const void *VAR_1, size_t VAR_2)
{
 const char *VAR_3 = VAR_1;
     char *VAR_4 = VAR_0;

 while (VAR_2) {
  if (0 && VAR_2 >= 4 && !((vm_offset_t)VAR_4 & 3) &&
      !((vm_offset_t)VAR_3 & 3)) {
   *(uint32_t *)VAR_4 = *(uint32_t *)VAR_3;
   VAR_3 += 4;
   VAR_4 += 4;
   VAR_2 -= 4;
  } else {
   *VAR_4++ = *VAR_3++;
   VAR_2--;
  }
 }
 return (VAR_0);
}
