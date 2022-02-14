
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int * FUNC_3 () ;
 int * FUNC_4 () ;

void
FUNC_5 (void)
{
  rtx VAR_0, VAR_1, VAR_2;
  int VAR_3, VAR_4;

  for (VAR_1 = ((void*)0), VAR_3 = 1, VAR_0 = FUNC_3 ();
       VAR_0 != 0;
       VAR_1 = VAR_0, VAR_3++, VAR_0 = FUNC_0 (VAR_0))
    FUNC_2 (FUNC_1 (VAR_0) == VAR_1);

  FUNC_2 (VAR_1 == FUNC_4 ());

  for (VAR_2 = ((void*)0), VAR_4 = 1, VAR_0 = FUNC_4 ();
       VAR_0 != 0;
       VAR_2 = VAR_0, VAR_4++, VAR_0 = FUNC_1 (VAR_0))
    FUNC_2 (FUNC_0 (VAR_0) == VAR_2);

  FUNC_2 (VAR_3 == VAR_4);
}
