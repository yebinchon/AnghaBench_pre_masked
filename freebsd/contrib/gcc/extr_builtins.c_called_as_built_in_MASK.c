
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static bool FUNC_3 (tree VAR_0)
{
  const char *VAR_1 = FUNC_1 (FUNC_0 (VAR_0));
  if (FUNC_2 (VAR_1, "__builtin_", 10) == 0)
    return 1;
  if (FUNC_2 (VAR_1, "__sync_", 7) == 0)
    return 1;
  return 0;
}
