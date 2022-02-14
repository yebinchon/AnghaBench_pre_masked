
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int,char*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

int
FUNC_5(off_t VAR_11)
{
 int VAR_12;
 off_t VAR_13;

 if (VAR_6 != 0) {
  FUNC_4(0, "Cannot append to an archive that may have flaws.");
  return(-1);
 }





 if (!VAR_9)
  VAR_9 = VAR_2 = VAR_7;
 else
  VAR_2 = VAR_7;




 if (FUNC_0() < 0)
  return(-1);







 VAR_11 += VAR_4 - VAR_5;
 if ((VAR_13 = (VAR_11/VAR_2) * VAR_2) < VAR_11)
  VAR_13 += VAR_2;
 if (FUNC_2((off_t)VAR_13) < 0)
  goto out;






 if ((VAR_13 -= VAR_11) > 0) {






  VAR_5 = VAR_3;
  VAR_4 = VAR_3 + VAR_2;
  while (VAR_5 < VAR_4) {
   if ((VAR_12 = FUNC_1(VAR_5, VAR_7)) <= 0)
    goto out;
   VAR_5 += VAR_12;
  }
  if (FUNC_2((off_t)(VAR_5 - VAR_3)) < 0)
   goto out;
  VAR_5 = VAR_3 + VAR_13;
  VAR_4 = VAR_3 + VAR_2;
 } else {



  VAR_4 = VAR_3 + VAR_2;
  VAR_5 = VAR_3;
 }
 VAR_7 = VAR_2;
 VAR_8 -= VAR_11;
 VAR_10 = 0;







 if (FUNC_3() < 0)
  return(-1);
 VAR_1 = VAR_0;
 return(0);

    out:
 FUNC_4(1, "Unable to rewrite archive trailer, cannot append.");
 return(-1);
}
