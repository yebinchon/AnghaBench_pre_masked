
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_6 (scalar_t__) ;

rtx
FUNC_7 (void)
{
  rtx VAR_2 = VAR_1;

  if (VAR_2)
    {
      if (FUNC_2 (VAR_2))
 for (VAR_2 = FUNC_6 (VAR_2);
      VAR_2 && FUNC_2 (VAR_2);
      VAR_2 = FUNC_6 (VAR_2))
   continue;
      else
 {
   if (FUNC_1 (VAR_2)
       && FUNC_0 (FUNC_3 (VAR_2)) == VAR_0)
     VAR_2 = FUNC_4 (FUNC_3 (VAR_2), 0,
       FUNC_5 (FUNC_3 (VAR_2), 0) - 1);
 }
    }

  return VAR_2;
}
