
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;
typedef int CUMULATIVE_ARGS ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int *,int,scalar_t__,int,int ,int*,int*) ;
 int FUNC_5 (scalar_t__) ;

__attribute__((used)) static int
FUNC_6 (CUMULATIVE_ARGS *VAR_8, enum machine_mode VAR_9,
    tree VAR_10, bool VAR_11)
{
  int VAR_12, VAR_13, VAR_14;


  VAR_12 = FUNC_4 (VAR_8, VAR_9, VAR_10, VAR_11, 0, &VAR_13, &VAR_14);

  if (VAR_12 == -1)
    return 0;

  if (VAR_5)
    {
      if ((VAR_12 + (VAR_9 == VAR_0
       ? FUNC_3 (FUNC_5 (VAR_10))
       : FUNC_3 (FUNC_2 (VAR_9))))
   > VAR_4)
 return (VAR_4 - VAR_12) * VAR_7;
    }
  else
    {




      if (VAR_10 && FUNC_0 (VAR_10))
 {
   int VAR_15 = FUNC_5 (VAR_10);

   if (VAR_15 > VAR_7
       && VAR_12 == VAR_4 - 1)
     return VAR_7;
 }
      else if (FUNC_1 (VAR_9) == VAR_2
        || (FUNC_1 (VAR_9) == VAR_1
     && ! (VAR_6 && VAR_11)))
 {

   if (FUNC_2 (VAR_9) > VAR_7
       && VAR_12 == VAR_4 - 1)
     return VAR_7;
 }
      else if (FUNC_1 (VAR_9) == VAR_1)
 {
   if ((VAR_12 + FUNC_2 (VAR_9) / VAR_7)
       > VAR_3)
     return VAR_7;
 }
    }

  return 0;
}
