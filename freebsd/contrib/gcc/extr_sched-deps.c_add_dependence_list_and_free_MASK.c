
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef enum reg_note { ____Placeholder_reg_note } reg_note ;


 int * FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static void
FUNC_4 (rtx VAR_0, rtx *VAR_1, int VAR_2,
         enum reg_note VAR_3)
{
  rtx VAR_4, VAR_5;
  for (VAR_4 = *VAR_1, *VAR_1 = ((void*)0); VAR_4 ; VAR_4 = VAR_5)
    {
      VAR_5 = FUNC_0 (VAR_4, 1);
      if (VAR_2 || ! FUNC_3 (VAR_0, FUNC_0 (VAR_4, 0)))
 FUNC_1 (VAR_0, FUNC_0 (VAR_4, 0), VAR_3);
      FUNC_2 (VAR_4);
    }
}
