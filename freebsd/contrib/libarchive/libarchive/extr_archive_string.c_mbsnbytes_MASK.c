
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static size_t
FUNC_0(const void *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 const char *VAR_3, *VAR_4;

 if (VAR_0 == ((void*)0))
  return (0);
 VAR_3 = (const char *)VAR_0;


 VAR_2 = 0;
 VAR_4 = VAR_3;
 while (VAR_2 < VAR_1 && *VAR_4) {
  VAR_4++;
  VAR_2++;
 }
 return (VAR_2);
}
