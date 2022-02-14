
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static const char *
FUNC_0(register const char *VAR_0, const int VAR_1)
{
 register int VAR_2;

 while ((VAR_2 = *VAR_0) != '\0' && VAR_2 != VAR_1)
  ++VAR_0;
 return VAR_0;
}
