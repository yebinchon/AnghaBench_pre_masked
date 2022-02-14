
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;

double
FUNC_0(double VAR_7, double VAR_8)
{
 double VAR_9,VAR_10,VAR_11,VAR_12;

 VAR_10 = VAR_7*VAR_7;
 VAR_12 = VAR_10*VAR_10;
 VAR_11 = VAR_10*(VAR_0+VAR_10*(VAR_1+VAR_10*VAR_2)) + VAR_12*VAR_12*(VAR_3+VAR_10*(VAR_4+VAR_10*VAR_5));
 VAR_9 = 0.5*VAR_10;
 VAR_12 = VAR_6-VAR_9;
 return VAR_12 + (((VAR_6-VAR_12)-VAR_9) + (VAR_10*VAR_11-VAR_7*VAR_8));
}
