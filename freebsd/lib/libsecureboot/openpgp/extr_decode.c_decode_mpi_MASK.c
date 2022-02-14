
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
unsigned char *
FUNC_0(unsigned char **VAR_0, size_t *VAR_1)
{
 unsigned char *VAR_2;
 unsigned char *VAR_3;
 size_t VAR_4;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (((void*)0));

 VAR_3 = *VAR_0;

 VAR_4 = (size_t)(*VAR_3++ << 8);
 VAR_4 |= (size_t)*VAR_3++;
 VAR_4 = (VAR_4 + 7) / 8;
 *VAR_1 = VAR_4;
 VAR_2 = VAR_3;
 VAR_3 += VAR_4;
 *VAR_0 = VAR_3;
 return (VAR_2);
}
