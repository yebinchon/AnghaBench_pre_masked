
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *FUNC_0(const char *VAR_0, const char *VAR_1)
{

 if (++VAR_0 >= VAR_1)
  return ((void*)0);


 if (*(VAR_0 - 1) == '\r' && *VAR_0 == '\n') {
  if (++VAR_0 >= VAR_1)
   return ((void*)0);
 }


 if (*VAR_0 != ' ' && *VAR_0 != '\t')
  return ((void*)0);


 for (; VAR_0 < VAR_1; VAR_0++) {
  if (*VAR_0 != ' ' && *VAR_0 != '\t')
   break;
 }
 return VAR_0;
}
