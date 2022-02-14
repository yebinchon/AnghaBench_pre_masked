
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ HOST_WIDE_INT ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static bool
FUNC_7 (tree VAR_5)
{
  if (VAR_2)
    return 0;


  if (FUNC_1 (VAR_5) == VAR_1)
    return 0;


  if (FUNC_1 (VAR_5) == VAR_0)
    return 0;

  if (FUNC_1 (VAR_5) == VAR_3 && FUNC_0 (VAR_5))
    {
      const char *VAR_6 = FUNC_2 (FUNC_0 (VAR_5));

      if (FUNC_5 (VAR_6, ".sdata") == 0
   || FUNC_6 (VAR_6, ".sdata.", 7) == 0
   || FUNC_6 (VAR_6, ".gnu.linkonce.s.", 16) == 0
   || FUNC_5 (VAR_6, ".sbss") == 0
   || FUNC_6 (VAR_6, ".sbss.", 6) == 0
   || FUNC_6 (VAR_6, ".gnu.linkonce.sb.", 17) == 0)
 return 1;
    }
  else
    {
      HOST_WIDE_INT VAR_7 = FUNC_4 (FUNC_3 (VAR_5));



      if (VAR_7 > 0 && VAR_7 <= VAR_4)
 return 1;
    }

  return 0;
}
