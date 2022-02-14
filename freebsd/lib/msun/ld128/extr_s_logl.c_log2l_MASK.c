
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ld {float hi; float lo; int lo_set; } ;


 int FUNC_0 (long double*) ;
 int FUNC_1 () ;
 int FUNC_2 (float,float) ;
 int FUNC_3 (float) ;
 int FUNC_4 (float,float) ;
 float VAR_0 ;
 float VAR_1 ;
 int FUNC_5 (long double,struct ld*) ;

long double
FUNC_6(long double VAR_2)
{
 struct ld VAR_3;
 long double VAR_4;
 float VAR_5;

 FUNC_1();
 FUNC_0(&VAR_2);
 FUNC_5(VAR_2, &VAR_3);
 if (!VAR_3.lo_set)
  FUNC_3(VAR_3.hi);
 FUNC_4(VAR_3.hi, VAR_3.lo);
 VAR_5 = VAR_3.hi;
 VAR_4 = VAR_3.lo + (VAR_3.hi - VAR_5);
 FUNC_2(VAR_0 * VAR_5,
     (VAR_1 + VAR_0) * VAR_4 + VAR_1 * VAR_5);
}
