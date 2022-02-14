
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long off_t ;


 int FUNC_0 (int,long) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int,int ,int) ;

int
FUNC_3(off_t VAR_3)
{
 int VAR_4;




 while (VAR_3 > 0L) {
  VAR_4 = VAR_1 - VAR_2;
  if ((VAR_4 <= 0) && ((VAR_4 = FUNC_1(VAR_0)) < 0))
   return(-1);
  VAR_4 = FUNC_0(VAR_4, VAR_3);
  FUNC_2(VAR_2, 0, VAR_4);
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
 }
 return(0);
}
