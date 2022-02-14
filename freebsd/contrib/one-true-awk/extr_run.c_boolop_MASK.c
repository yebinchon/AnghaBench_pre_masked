
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Node ;
typedef int Cell ;




 int FUNC_0 (char*,int) ;
 int * VAR_0 ;

 int * VAR_1 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

Cell *FUNC_4(Node **VAR_2, int VAR_3)
{
 Cell *VAR_4, *VAR_5;
 int VAR_6;

 VAR_4 = FUNC_1(VAR_2[0]);
 VAR_6 = FUNC_2(VAR_4);
 FUNC_3(VAR_4);
 switch (VAR_3) {
 case 129:
  if (VAR_6) return(VAR_1);
  VAR_5 = FUNC_1(VAR_2[1]);
  VAR_6 = FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  if (VAR_6) return(VAR_1);
  else return(VAR_0);
 case 130:
  if ( !VAR_6 ) return(VAR_0);
  VAR_5 = FUNC_1(VAR_2[1]);
  VAR_6 = FUNC_2(VAR_5);
  FUNC_3(VAR_5);
  if (VAR_6) return(VAR_1);
  else return(VAR_0);
 case 128:
  if (VAR_6) return(VAR_0);
  else return(VAR_1);
 default:
  FUNC_0("unknown boolean operator %d", VAR_3);
 }
 return 0;
}
