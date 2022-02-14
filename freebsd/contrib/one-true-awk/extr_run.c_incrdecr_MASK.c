
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;
typedef scalar_t__ Awkfloat ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;

Cell *FUNC_5(Node **VAR_3, int VAR_4)
{
 Cell *VAR_5, *VAR_6;
 int VAR_7;
 Awkfloat VAR_8;

 VAR_5 = FUNC_0(VAR_3[0]);
 VAR_8 = FUNC_1(VAR_5);
 VAR_7 = (VAR_4 == VAR_2 || VAR_4 == VAR_0) ? 1 : -1;
 if (VAR_4 == VAR_2 || VAR_4 == VAR_1) {
  FUNC_3(VAR_5, VAR_8 + VAR_7);
  return(VAR_5);
 }
 VAR_6 = FUNC_2();
 FUNC_3(VAR_6, VAR_8);
 FUNC_3(VAR_5, VAR_8 + VAR_7);
 FUNC_4(VAR_5);
 return(VAR_6);
}
