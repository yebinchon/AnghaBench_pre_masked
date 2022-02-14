
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_6 (tree VAR_6)
{
  if (VAR_4 != VAR_0 && VAR_4 != VAR_1)
    return 0;


  if (FUNC_1 (VAR_6) == VAR_2)
    return 0;

  if (FUNC_1 (VAR_6) == VAR_3 && FUNC_0 (VAR_6))
    {
      const char *VAR_7 = FUNC_2 (FUNC_0 (VAR_6));
      if (FUNC_5 (VAR_7, ".ldata") == 0
   || FUNC_5 (VAR_7, ".lbss") == 0)
 return 1;
      return 0;
    }
  else
    {
      HOST_WIDE_INT VAR_8 = FUNC_4 (FUNC_3 (VAR_6));



      if (!VAR_8 || VAR_8 > VAR_5)
 return 1;
    }

  return 0;
}
