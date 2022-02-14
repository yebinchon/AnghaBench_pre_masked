
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (int,int,double) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (double,int) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;

float
FUNC_4(float VAR_2, float VAR_3, float VAR_4)
{
 double VAR_5, VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_5 = (double)VAR_2 * VAR_3;
 VAR_6 = VAR_5 + VAR_4;
 FUNC_0(VAR_7, VAR_8, VAR_6);

 if ((VAR_8 & 0x1fffffff) != 0x10000000 ||
     (VAR_7 & 0x7ff00000) == 0x7ff00000 ||
     VAR_6 - VAR_5 == VAR_4 ||
     FUNC_2() != VAR_0)
  return (VAR_6);





 FUNC_3(VAR_1);
 volatile double VAR_9 = VAR_5;
 double VAR_10 = VAR_9 + VAR_4;
 FUNC_3(VAR_0);
 if (VAR_6 == VAR_10)
  FUNC_1(VAR_10, VAR_8 + 1);
 return (VAR_10);
}
