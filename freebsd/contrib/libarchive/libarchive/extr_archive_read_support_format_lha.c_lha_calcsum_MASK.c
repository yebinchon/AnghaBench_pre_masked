
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static unsigned char
FUNC_0(unsigned char VAR_0, const void *VAR_1, int VAR_2, size_t VAR_3)
{
 unsigned char const *VAR_4 = (unsigned char const *)VAR_1;

 VAR_4 += VAR_2;
 for (;VAR_3 > 0; --VAR_3)
  VAR_0 += *VAR_4++;
 return (VAR_0);
}
