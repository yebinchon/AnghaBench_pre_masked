
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,char*,int) ;

int
FUNC_3(char *VAR_3, int VAR_4)
{
 int VAR_5;





 while (VAR_4 > 0) {
  VAR_5 = VAR_1 - VAR_2;
  if ((VAR_5 <= 0) && ((VAR_5 = FUNC_1(VAR_0)) < 0))
   return(-1);



  VAR_5 = FUNC_0(VAR_5, VAR_4);
  FUNC_2(VAR_2, VAR_3, VAR_5);
  VAR_2 += VAR_5;
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }
 return(0);
}
