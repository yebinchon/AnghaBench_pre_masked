
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int
FUNC_0(const char *VAR_0)
{
 const unsigned char *VAR_1 = (const unsigned char *)VAR_0;

 if (VAR_1 == ((void*)0))
  return (1);
 while (*VAR_1 != '\0' && *VAR_1 < 128)
  VAR_1++;
 return (*VAR_1 != '\0');
}
