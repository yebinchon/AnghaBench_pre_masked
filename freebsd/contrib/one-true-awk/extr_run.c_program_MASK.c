
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;


 int FUNC_0 (char*) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *,int) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int *) ;

Cell *FUNC_10(Node **VAR_4, int VAR_5)
{
 Cell *VAR_6;

 if (FUNC_8(VAR_1) != 0)
  goto ex;
 if (VAR_4[0]) {
  VAR_6 = FUNC_1(VAR_4[0]);
  if (FUNC_5(VAR_6))
   return(VAR_0);
  if (FUNC_6(VAR_6))
   FUNC_0("illegal break, continue, next or nextfile from BEGIN");
  FUNC_9(VAR_6);
 }
 if (VAR_4[1] || VAR_4[2])
  while (FUNC_2(&VAR_2, &VAR_3, 1) > 0) {
   VAR_6 = FUNC_1(VAR_4[1]);
   if (FUNC_5(VAR_6))
    break;
   FUNC_9(VAR_6);
  }
  ex:
 if (FUNC_8(VAR_1) != 0)
  goto ex1;
 if (VAR_4[2]) {
  VAR_6 = FUNC_1(VAR_4[2]);
  if (FUNC_3(VAR_6) || FUNC_7(VAR_6) || FUNC_4(VAR_6))
   FUNC_0("illegal break, continue, next or nextfile from END");
  FUNC_9(VAR_6);
 }
  ex1:
 return(VAR_0);
}
