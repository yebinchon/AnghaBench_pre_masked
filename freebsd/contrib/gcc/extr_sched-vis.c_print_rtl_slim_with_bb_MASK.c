
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * rtx ;
typedef int * basic_block ;
typedef int FILE ;


 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (int *,int,int,int,char*,int *) ;
 int FUNC_6 (int *,int *) ;

void
FUNC_7 (FILE *VAR_2, rtx VAR_3, int VAR_4)
{
  basic_block VAR_5 = ((void*)0);
  rtx VAR_6;

  for (VAR_6 = VAR_3; ((void*)0) != VAR_6; VAR_6 = FUNC_4 (VAR_6))
    {
      if ((VAR_4 & VAR_1)
   && (FUNC_3 (VAR_6) || FUNC_2 (VAR_6) == VAR_0)
   && FUNC_1 (VAR_6)
   && !VAR_5)
 {
   VAR_5 = FUNC_1 (VAR_6);
   FUNC_5 (VAR_5, 1, 0, VAR_4, ";; ", VAR_2);
 }

      FUNC_6 (VAR_2, VAR_6);

      if ((VAR_4 & VAR_1)
   && VAR_5
   && VAR_6 == FUNC_0 (VAR_5))
 {
   FUNC_5 (VAR_5, 0, 1, VAR_4, ";; ", VAR_2);
   VAR_5 = ((void*)0);
 }
    }
}
