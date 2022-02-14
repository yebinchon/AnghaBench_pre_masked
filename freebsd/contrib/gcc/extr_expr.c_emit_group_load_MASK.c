
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int * rtx ;


 int * FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int ** FUNC_3 (int) ;
 int FUNC_4 (int **,int *,int *,int ,int) ;
 int FUNC_5 (int *,int *) ;

void
FUNC_6 (rtx VAR_0, rtx VAR_1, tree VAR_2, int VAR_3)
{
  rtx *VAR_4;
  int VAR_5;

  VAR_4 = FUNC_3 (sizeof (rtx) * FUNC_2 (VAR_0, 0));
  FUNC_4 (VAR_4, VAR_0, VAR_1, VAR_2, VAR_3);


  for (VAR_5 = 0; VAR_5 < FUNC_2 (VAR_0, 0); VAR_5++)
    {
      rtx VAR_6 = FUNC_0 (FUNC_1 (VAR_0, 0, VAR_5), 0);
      if (VAR_6 == ((void*)0))
 continue;
      FUNC_5 (VAR_6, VAR_4[VAR_5]);
    }
}
