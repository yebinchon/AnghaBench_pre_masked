
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*,int,int) ;

int
FUNC_3(char *VAR_2, int VAR_3)
{
 int VAR_4;
 int VAR_5;
 int VAR_6 = VAR_3;




 while (VAR_6 > 0) {
  VAR_5 = VAR_0 - VAR_1;
  if ((VAR_5 <= 0) && ((VAR_5 = FUNC_1()) <= 0)) {






   if ((VAR_4 = VAR_3 - VAR_6) > 0)
    return(VAR_4);
   return(VAR_5);
  }





  VAR_5 = FUNC_0(VAR_5, VAR_6);
  FUNC_2(VAR_2, VAR_1, VAR_5);
  VAR_1 += VAR_5;
  VAR_6 -= VAR_5;
  VAR_2 += VAR_5;
 }
 return(VAR_3);
}
