
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_0 ;
 int FUNC_11 (int ,int,int*,int) ;

rtx
FUNC_12 (unsigned int VAR_1, enum machine_mode *VAR_2, int *VAR_3)
{
  tree VAR_4;

  for (VAR_4 = FUNC_0 (VAR_0); VAR_4;
       VAR_4 = FUNC_7 (VAR_4))
    if (FUNC_6 (FUNC_2 (VAR_4))
 && FUNC_5 (FUNC_2 (VAR_4)) == VAR_1
 && FUNC_9 (FUNC_1 (VAR_4)) == FUNC_9 (FUNC_8 (VAR_4)))
      {
 enum machine_mode VAR_5 = FUNC_9 (FUNC_8 (VAR_4));
 int VAR_6 = FUNC_10 (FUNC_8 (VAR_4));

 VAR_5 = FUNC_11 (FUNC_8 (VAR_4), VAR_5, &VAR_6, 1);
 if (VAR_5 == FUNC_4 (FUNC_2 (VAR_4))
     && VAR_5 != FUNC_3 (VAR_4))
   {
     *VAR_2 = FUNC_3 (VAR_4);
     *VAR_3 = VAR_6;
     return FUNC_2 (VAR_4);
   }
      }

  return 0;
}
