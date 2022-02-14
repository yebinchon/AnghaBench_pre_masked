
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long off_t ;


 long FUNC_0 (long,long) ;
 scalar_t__ FUNC_1 (long,long*) ;
 long FUNC_2 () ;
 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;

int
FUNC_3(off_t VAR_4)
{
 off_t VAR_5;
 off_t VAR_6;
 off_t VAR_7 = 0;







 if (VAR_4 == 0)
  return(0);
 VAR_5 = FUNC_0((VAR_0 - VAR_1), VAR_4);
 VAR_1 += VAR_5;
 VAR_4 -= VAR_5;




 if (VAR_4 == 0)
  return(0);





 VAR_5 = VAR_4%VAR_2;
 VAR_6 = (VAR_4/VAR_2) * VAR_2;





 if (FUNC_1(VAR_6, &VAR_7) < 0)
  return(-1);
 VAR_5 += VAR_6 - VAR_7;
 VAR_3 += VAR_7;





 while (VAR_5 > 0L) {
  VAR_6 = VAR_0 - VAR_1;



  if ((VAR_6 <= 0) && ((VAR_6 = FUNC_2()) < 0))
   return(-1);
  if (VAR_6 == 0)
   return(1);
  VAR_6 = FUNC_0(VAR_6, VAR_5);
  VAR_1 += VAR_6;
  VAR_5 -= VAR_6;
 }
 return(0);
}
