
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct data_reference {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct data_reference*) ;
 int FUNC_1 (struct data_reference*) ;
 scalar_t__ FUNC_2 (struct data_reference*) ;
 scalar_t__ FUNC_3 (struct data_reference*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct data_reference*,struct data_reference*,int*) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__,struct data_reference*,struct data_reference*,int*) ;

__attribute__((used)) static bool
FUNC_13 (struct data_reference *VAR_4,
      struct data_reference *VAR_5,
      bool *VAR_6)
{
  tree VAR_7 = FUNC_0 (VAR_4);
  tree VAR_8 = FUNC_0 (VAR_5);
  tree VAR_9, VAR_10;
  bool VAR_11;

  if (!VAR_7 || !VAR_8)
    return 0;

  VAR_9 = FUNC_8 (VAR_7);
  VAR_10 = FUNC_8 (VAR_8);

  FUNC_11 (FUNC_4 (VAR_9) && FUNC_4 (VAR_10));



  if (FUNC_3 (VAR_4) == VAR_1 && FUNC_3 (VAR_5) == VAR_1)
    return FUNC_10 (VAR_4, VAR_5, VAR_6);







  if (FUNC_3 (VAR_4) == VAR_3 && FUNC_3 (VAR_5) == VAR_3
      && (VAR_7 == VAR_8
   || (FUNC_6 (VAR_7) == VAR_0 && FUNC_6 (VAR_8) == VAR_0
       && FUNC_7 (VAR_7, 0) == FUNC_7 (VAR_8, 0))))
    {

      tree VAR_12 = FUNC_2 (VAR_4);
      tree VAR_13 = FUNC_2 (VAR_5);

      FUNC_5 (VAR_12);
      FUNC_5 (VAR_13);



      if (VAR_12 == VAR_13
   || (FUNC_6 (VAR_12) == VAR_2
       && FUNC_6 (VAR_13) == VAR_2
       && FUNC_7 (VAR_12, 0) == FUNC_7 (VAR_13, 0)
       && FUNC_7 (VAR_12, 1) == FUNC_7 (VAR_13, 1)))
 {
   *VAR_6 = 0;
   return 1;
 }
    }





  if (FUNC_12 (VAR_7, VAR_8, VAR_4, VAR_5, &VAR_11) && !VAR_11)
    {
      *VAR_6 = 1;
      return 1;
    }




  else if ((FUNC_9 (VAR_9) && !FUNC_1 (VAR_4))
      || (FUNC_9 (VAR_10) && !FUNC_1 (VAR_5)))
    {
      *VAR_6 = 1;
      return 1;
    }
  return 0;
}
