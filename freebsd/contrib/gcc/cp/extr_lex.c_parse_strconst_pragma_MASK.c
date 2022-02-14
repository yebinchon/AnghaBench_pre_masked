
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum cpp_ttype { ____Placeholder_cpp_ttype } cpp_ttype ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,char*,char const*) ;

__attribute__((used)) static tree
FUNC_3 (const char* VAR_4, int VAR_5)
{
  tree VAR_6, VAR_7;
  enum cpp_ttype VAR_8;

  VAR_8 = FUNC_1 (&VAR_6);
  if (VAR_8 == VAR_1)
    {
      if (FUNC_1 (&VAR_7) != VAR_0)
 FUNC_2 (0, "junk at end of #pragma %s", VAR_4);
      return VAR_6;
    }

  if (VAR_8 == VAR_0 && VAR_5)
    return VAR_2;

  FUNC_0 ("invalid #pragma %s", VAR_4);
  return VAR_3;
}
