
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum cdi_direction { ____Placeholder_cdi_direction } cdi_direction ;
typedef int * basic_block ;


 int ** VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int,int *) ;
 int * FUNC_2 (int,int *) ;
 int FUNC_3 (int,int *,int *) ;

void
FUNC_4 (enum cdi_direction VAR_1, basic_block *VAR_2, int VAR_3)
{
  int VAR_4, VAR_5 = 1;
  basic_block VAR_6, VAR_7;

  FUNC_0 (VAR_0[VAR_1]);

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    FUNC_3 (VAR_1, VAR_2[VAR_4], ((void*)0));

  while (VAR_5)
    {
      VAR_5 = 0;
      for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
 {
   VAR_6 = FUNC_1 (VAR_1, VAR_2[VAR_4]);
   VAR_7 = FUNC_2 (VAR_1, VAR_2[VAR_4]);
   if (VAR_6 != VAR_7)
     {
       VAR_5 = 1;
       FUNC_3 (VAR_1, VAR_2[VAR_4], VAR_7);
     }
 }
    }

  for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
    FUNC_0 (FUNC_1 (VAR_1, VAR_2[VAR_4]));
}
