
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char const*) ;

__attribute__((used)) static const char *FUNC_1(const char *VAR_0, const char *VAR_1)
{
 for (; VAR_0 < VAR_1; VAR_0++) {
  if (*VAR_0 == ' ')
   continue;
  if (*VAR_0 != '\r' && *VAR_0 != '\n')
   break;
  VAR_0 = FUNC_0(VAR_0, VAR_1);
  if (VAR_0 == ((void*)0))
   return ((void*)0);
 }
 return VAR_0;
}
