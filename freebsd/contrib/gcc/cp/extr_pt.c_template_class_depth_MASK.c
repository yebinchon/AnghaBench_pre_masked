
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (int ) ;

int
FUNC_11 (tree VAR_2)
{
  int VAR_3;

  for (VAR_3 = 0;
       VAR_2 && FUNC_8 (VAR_2) != VAR_1;
       VAR_2 = (FUNC_8 (VAR_2) == VAR_0)
  ? FUNC_3 (VAR_2) : FUNC_9 (VAR_2))
    {
      if (FUNC_8 (VAR_2) != VAR_0)
 {
   if (FUNC_0 (VAR_2)
       && FUNC_7 (FUNC_2 (VAR_2))
       && FUNC_10 (FUNC_1 (VAR_2)))
     ++VAR_3;
 }
      else
 {
   if (FUNC_4 (VAR_2)
       && FUNC_7 (FUNC_6 (VAR_2))
       && FUNC_10 (FUNC_5 (VAR_2)))
     ++VAR_3;
 }
    }

  return VAR_3;
}
