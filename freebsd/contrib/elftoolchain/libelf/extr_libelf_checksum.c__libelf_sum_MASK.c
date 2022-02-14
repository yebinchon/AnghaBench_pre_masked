
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned long
FUNC_0(unsigned long VAR_0, const unsigned char *VAR_1, size_t VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_2 == 0)
  return (VAR_0);

 while (VAR_2--)
  VAR_0 += *VAR_1++;

 return (VAR_0);
}
