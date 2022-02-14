
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum reg_note { ____Placeholder_reg_note } reg_note ;


 size_t VAR_0 ;
 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__,int) ;
 int** VAR_1 ;

rtx
FUNC_7 (rtx VAR_2, enum reg_note VAR_3, unsigned int VAR_4)
{
  rtx VAR_5;


  if (! FUNC_1 (VAR_2))
    return 0;

  for (VAR_5 = FUNC_3 (VAR_2); VAR_5; VAR_5 = FUNC_6 (VAR_5, 1))
    if (FUNC_4 (VAR_5) == VAR_3


 && FUNC_5 (FUNC_6 (VAR_5, 0))
 && FUNC_2 (FUNC_6 (VAR_5, 0)) <= VAR_4
 && ((FUNC_2 (FUNC_6 (VAR_5, 0))
      + (FUNC_2 (FUNC_6 (VAR_5, 0)) >= VAR_0 ? 1
  : VAR_1[FUNC_2 (FUNC_6 (VAR_5, 0))]
      [FUNC_0 (FUNC_6 (VAR_5, 0))]))
     > VAR_4))
      return VAR_5;
  return 0;
}
