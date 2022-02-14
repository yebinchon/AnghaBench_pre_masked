
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void *
FUNC_0(const void *VAR_0, int VAR_1, size_t VAR_2)
{
 if (VAR_2 != 0) {
  const unsigned char *VAR_3 = VAR_0;

  do {
   if (*VAR_3++ == (unsigned char)VAR_1)
    return ((void *)(uintptr_t)(VAR_3 - 1));
  } while (--VAR_2 != 0);
 }
 return (((void*)0));
}
