
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 int FUNC_9 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static bool
FUNC_10 (tree VAR_4, tree VAR_5)
{
  int VAR_6;

  if (VAR_5 == 0)
    return 0;

  if (FUNC_5 (VAR_5) == VAR_2)
    {
      if (FUNC_2 (VAR_5) == VAR_1)
 VAR_5 = FUNC_3 (VAR_5);
      else
 {
   tree VAR_7;
   for (VAR_7 = VAR_5; VAR_7; VAR_7 = FUNC_4 (VAR_7))
     {
       if (FUNC_10 (VAR_4, FUNC_3 (VAR_7)))
  return 1;
     }
   return 0;
 }
    }



  if (FUNC_6 (VAR_5) == VAR_3)
    return 1;



  if (FUNC_0 (VAR_5))
    return 0;

  if (FUNC_5 (VAR_5) != VAR_0)
    return 0;


  if (FUNC_1 (VAR_5)
      && FUNC_1 (VAR_4))
    return 1;


  if (FUNC_8 (FUNC_7 (FUNC_6 (VAR_4)),
   FUNC_7 (FUNC_6 (VAR_5))))
    return 1;

  VAR_6 = FUNC_9 (VAR_4, VAR_5);

  if (VAR_6)
    return 1;

  return 0;
}
