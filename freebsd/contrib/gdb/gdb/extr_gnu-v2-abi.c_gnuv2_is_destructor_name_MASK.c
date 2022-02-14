
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dtor_kinds { ____Placeholder_dtor_kinds } dtor_kinds ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;

__attribute__((used)) static enum dtor_kinds
FUNC_2 (const char *VAR_1)
{
  if ((VAR_1[0] == '_' && FUNC_0 (VAR_1[1]) && VAR_1[2] == '_')
      || FUNC_1 (VAR_1, "__dt__", 6) == 0)
    return VAR_0;
  else
    return 0;
}
