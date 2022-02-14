
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *FUNC_0(const void *VAR_0, int VAR_1, size_t VAR_2)
{
 const unsigned char *VAR_3 = VAR_0;
 while (VAR_2-- != 0) {
         if ((unsigned char)VAR_1 == *VAR_3++) {
   return (void *)(VAR_3 - 1);
  }
 }
 return ((void*)0);
}
