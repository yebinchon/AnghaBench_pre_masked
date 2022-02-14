
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;


 int * VAR_0 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

Cell *FUNC_7(Node **VAR_1, int VAR_2)
{
 Cell *VAR_3;

 for (;;) {
  VAR_3 = FUNC_0(VAR_1[0]);
  if (FUNC_1(VAR_3))
   return VAR_0;
  if (FUNC_3(VAR_3) || FUNC_2(VAR_3) || FUNC_4(VAR_3))
   return(VAR_3);
  FUNC_6(VAR_3);
  VAR_3 = FUNC_0(VAR_1[1]);
  if (!FUNC_5(VAR_3))
   return(VAR_3);
  FUNC_6(VAR_3);
 }
}
