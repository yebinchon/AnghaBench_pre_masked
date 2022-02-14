
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct data_reference {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct data_reference*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__,struct data_reference*) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,struct data_reference*,struct data_reference*,int*) ;
 scalar_t__ FUNC_6 (struct data_reference*,struct data_reference*) ;
 scalar_t__ FUNC_7 (struct data_reference*,struct data_reference*) ;
 scalar_t__ FUNC_8 (struct data_reference*,struct data_reference*) ;

__attribute__((used)) static bool
FUNC_9 (struct data_reference *VAR_4,
        struct data_reference *VAR_5,
        bool *VAR_6)
{
  tree VAR_7 = FUNC_0 (VAR_4);
  tree VAR_8 = FUNC_0 (VAR_5);
  bool VAR_9;

  if (!VAR_7 || !VAR_8)
    return 0;



  if (VAR_7 == VAR_8)
    {
      *VAR_6 = 0;
      return 1;
    }



  if (FUNC_1 (VAR_7) == VAR_1 && FUNC_1 (VAR_8) == VAR_1
      && FUNC_2 (VAR_7, 0) == FUNC_2 (VAR_8, 0))
    {
      *VAR_6 = 0;
      return 1;
    }


  if (FUNC_1 (VAR_7) == VAR_0 && FUNC_1 (VAR_8) == VAR_0
      && FUNC_2 (VAR_7, 0) == FUNC_2 (VAR_8, 0)
      && FUNC_2 (VAR_7, 1) == FUNC_2 (VAR_8, 1))
    {
      *VAR_6 = 0;
      return 1;
    }
  if (FUNC_1 (VAR_7) == VAR_3 && FUNC_1 (VAR_8) == VAR_3)
    {
      *VAR_6 = 1;
      return 1;
    }



  if (FUNC_4 (VAR_7, VAR_8, VAR_5)
      || FUNC_4 (VAR_8, VAR_7, VAR_4))
    {
      *VAR_6 = 1;
      return 1;
    }



  if (FUNC_1 (VAR_7) == VAR_1 && FUNC_1 (VAR_8) == VAR_1
      && (FUNC_5 (FUNC_2 (VAR_7, 0), FUNC_2 (VAR_8, 0), VAR_4, VAR_5,
         &VAR_9)
   && !VAR_9))
    {
      *VAR_6 = 1;
      return 1;
    }



  if (FUNC_1 (VAR_7) == VAR_0 && FUNC_1 (VAR_8) == VAR_0
      && ((FUNC_1 (FUNC_2 (VAR_7, 0)) == VAR_3
           && FUNC_1 (FUNC_2 (VAR_8, 0)) == VAR_3
           && FUNC_2 (VAR_7, 0) != FUNC_2 (VAR_8, 0))
          || (FUNC_1 (FUNC_3 (FUNC_2 (VAR_7, 0))) == VAR_2
              && FUNC_1 (FUNC_3 (FUNC_2 (VAR_8, 0))) == VAR_2
              && FUNC_2 (VAR_7, 1) != FUNC_2 (VAR_8, 1))))
    {
      *VAR_6 = 1;
      return 1;
    }



  if (FUNC_7 (VAR_4, VAR_5) || FUNC_7 (VAR_5, VAR_4))
    {
      *VAR_6 = 1;
      return 1;
    }




  if (FUNC_6 (VAR_4, VAR_5) || FUNC_6 (VAR_5, VAR_4))
    {
      *VAR_6 = 1;
      return 1;
    }


  if (FUNC_8 (VAR_4, VAR_5))
    {
      *VAR_6 = 1;
      return 1;
    }

  return 0;
}
