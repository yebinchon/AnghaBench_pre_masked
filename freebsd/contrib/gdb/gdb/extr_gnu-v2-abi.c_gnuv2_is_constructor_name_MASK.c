
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ctor_kinds { ____Placeholder_ctor_kinds } ctor_kinds ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char*,char const) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static enum ctor_kinds
FUNC_3 (const char *VAR_1)
{
  if ((VAR_1[0] == '_' && VAR_1[1] == '_'
       && (FUNC_0 (VAR_1[2]) || FUNC_1 ("Qt", VAR_1[2])))
      || FUNC_2 (VAR_1, "__ct__", 6) == 0)
    return VAR_0;
  else
    return 0;
}
