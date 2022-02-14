
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (double) ;
 int VAR_3 ;
 int FUNC_1 (char*,double,double,double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;

__attribute__((used)) static double
FUNC_4(
 double VAR_4
 )
{
 double VAR_5, VAR_6, VAR_7;
 double VAR_8;
 double VAR_9;

 VAR_8 = VAR_4 / (VAR_0);
 VAR_5 = VAR_0 * FUNC_2(VAR_8);
 VAR_6 = VAR_2 - (VAR_0 * FUNC_0(VAR_8));
 if (VAR_3 >= 2)
     FUNC_1("Theta %g k1 %g k2 %g\n", VAR_8, VAR_5, VAR_6);
 VAR_7 = FUNC_3(VAR_5*VAR_5 + VAR_6*VAR_6);
 VAR_9 = VAR_7 / VAR_1;
 if (VAR_3 >= 2)
     FUNC_1("propdelay dist %g height %g time %g\n", VAR_4, VAR_7, VAR_9);
 return VAR_9;
}
