
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (char*,int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int* VAR_5 ;

__attribute__((used)) static rtx
FUNC_11 (tree VAR_6)
{
  tree VAR_7 = FUNC_1 (VAR_6);

  if (VAR_2)
    {
      int VAR_8 = FUNC_5 (FUNC_1 (VAR_7), VAR_7) != 0;
      return FUNC_7 (VAR_0, VAR_5[VAR_8]);
    }

  if (FUNC_8 (VAR_7, VAR_6) > 0)
    {
      tree VAR_9;

      VAR_9 = FUNC_3 (VAR_7);


      for (; VAR_9; VAR_9 = FUNC_0 (VAR_9))
 if (FUNC_2 (VAR_9) == VAR_4)
   break;

      if (VAR_9)
 {
   int VAR_10 = 0;
   if (FUNC_9 ("fastcall", FUNC_4 (VAR_7)))
     VAR_10 = 2;
   return FUNC_7 (VAR_1, VAR_10);
 }
    }

  if (FUNC_5 (FUNC_1 (VAR_7), VAR_7))
    return FUNC_6 (VAR_1, FUNC_10 (VAR_3, 8));
  else
    return FUNC_6 (VAR_1, FUNC_10 (VAR_3, 4));
}
