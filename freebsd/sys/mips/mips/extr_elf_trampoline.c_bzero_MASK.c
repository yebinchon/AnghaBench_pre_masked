
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef scalar_t__ uint32_t ;



__attribute__((used)) static __inline void
FUNC_0(void *VAR_0, size_t VAR_1)
{
 char *VAR_2 = (char *)VAR_0;

 while (VAR_1 > 0) {
  if (VAR_1 >= 4 && !((vm_offset_t)VAR_2 & 3)) {
   *(uint32_t *)VAR_2 = 0;
   VAR_2 += 4;
   VAR_1 -= 4;
  } else {
   *VAR_2 = 0;
   VAR_2++;
   VAR_1--;
  }
 }
}
