
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 size_t FUNC_0 (char const*,char*) ;

__attribute__((used)) static bfd_boolean
FUNC_1 (const char *VAR_0)
{
  size_t VAR_1 = FUNC_0 (VAR_0, "*?[");
  return VAR_1 >= 4 && VAR_0[VAR_1] == '*' && VAR_0[VAR_1 + 1] == '\0';
}
