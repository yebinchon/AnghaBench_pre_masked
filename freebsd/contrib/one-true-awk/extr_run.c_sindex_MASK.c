
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;
typedef double Awkfloat ;


 int * FUNC_0 (int *) ;
 char* FUNC_1 (int *) ;
 int * FUNC_2 () ;
 int FUNC_3 (int *,double) ;
 int FUNC_4 (int *) ;

Cell *FUNC_5(Node **VAR_0, int VAR_1)
{
 Cell *VAR_2, *VAR_3, *VAR_4;
 char *VAR_5, *VAR_6, *VAR_7, *VAR_8, *VAR_9;
 Awkfloat VAR_10 = 0.0;

 VAR_2 = FUNC_0(VAR_0[0]);
 VAR_5 = FUNC_1(VAR_2);
 VAR_3 = FUNC_0(VAR_0[1]);
 VAR_6 = FUNC_1(VAR_3);

 VAR_4 = FUNC_2();
 for (VAR_7 = VAR_5; *VAR_7 != '\0'; VAR_7++) {
  for (VAR_9=VAR_7, VAR_8=VAR_6; *VAR_8 != '\0' && *VAR_9 == *VAR_8; VAR_9++, VAR_8++)
   ;
  if (*VAR_8 == '\0') {
   VAR_10 = (Awkfloat) (VAR_7 - VAR_5 + 1);
   break;
  }
 }
 FUNC_4(VAR_2);
 FUNC_4(VAR_3);
 FUNC_3(VAR_4, VAR_10);
 return(VAR_4);
}
