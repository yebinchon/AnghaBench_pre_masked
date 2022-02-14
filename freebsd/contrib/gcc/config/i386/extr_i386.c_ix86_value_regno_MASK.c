
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (enum machine_mode VAR_10, tree VAR_11, tree VAR_12)
{
  FUNC_4 (!VAR_5);




  if (FUNC_3 (VAR_10) && FUNC_1 (VAR_10) == 8)
    return VAR_7 ? VAR_2 : 0;




  if (VAR_10 == VAR_9 || (FUNC_3 (VAR_10) && FUNC_1 (VAR_10) == 16))
    return VAR_8 ? VAR_3 : 0;


  if (FUNC_0 (VAR_10))
    return 0;


  if (!FUNC_2 (VAR_10) || !VAR_6)
    return 0;



  if ((VAR_11 || VAR_12)
      && (VAR_10 == VAR_4 || VAR_10 == VAR_0))
    {
      int VAR_13 = FUNC_5 (VAR_12, VAR_11);
      if ((VAR_13 >= 1 && VAR_10 == VAR_4)
   || (VAR_13 == 2 && VAR_10 == VAR_0))
        return VAR_3;
    }

  return VAR_1;
}
