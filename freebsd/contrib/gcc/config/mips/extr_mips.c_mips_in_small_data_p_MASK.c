
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef scalar_t__ HOST_WIDE_INT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static bool
FUNC_11 (tree VAR_7)
{
  HOST_WIDE_INT VAR_8;

  if (FUNC_3 (VAR_7) == VAR_1 || FUNC_3 (VAR_7) == VAR_0)
    return 0;



  if (VAR_2)
    return 0;

  if (FUNC_3 (VAR_7) == VAR_5 && FUNC_2 (VAR_7) != 0)
    {
      const char *VAR_9;


      VAR_9 = FUNC_7 (FUNC_2 (VAR_7));
      if (FUNC_10 (VAR_9, ".sdata") != 0 && FUNC_10 (VAR_9, ".sbss") != 0)
 return 0;



      if (VAR_4 || !FUNC_0 (VAR_7))
 return 1;
    }
  else if (VAR_3)
    {


      if (FUNC_3 (VAR_7) != VAR_5)
 return 0;

      if (FUNC_5 (VAR_7)
   && !FUNC_6 (VAR_7)
   && (!FUNC_1 (VAR_7) || FUNC_4 (FUNC_1 (VAR_7))))
 return 0;
    }

  VAR_8 = FUNC_9 (FUNC_8 (VAR_7));
  return (VAR_8 > 0 && VAR_8 <= VAR_6);
}
