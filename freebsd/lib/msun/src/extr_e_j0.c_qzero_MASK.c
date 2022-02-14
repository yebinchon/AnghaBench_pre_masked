
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 double VAR_0 ;
 double* VAR_1 ;
 double* VAR_2 ;
 double* VAR_3 ;
 double* VAR_4 ;
 double* VAR_5 ;
 double* VAR_6 ;
 double* VAR_7 ;
 double* VAR_8 ;

__attribute__((used)) static __inline double
FUNC_1(double VAR_9)
{
 static const double VAR_10 = 0.125;
 const double *VAR_11,*VAR_12;
 double VAR_13,VAR_14,VAR_15;
 int32_t VAR_16;
 FUNC_0(VAR_16,VAR_9);
 VAR_16 &= 0x7fffffff;
 if(VAR_16>=0x40200000) {VAR_11 = VAR_4; VAR_12= VAR_8;}
 else if(VAR_16>=0x40122E8B){VAR_11 = VAR_3; VAR_12= VAR_7;}
 else if(VAR_16>=0x4006DB6D){VAR_11 = VAR_2; VAR_12= VAR_6;}
 else {VAR_11 = VAR_1; VAR_12= VAR_5;}
 VAR_15 = VAR_0/(VAR_9*VAR_9);
 VAR_14 = VAR_11[0]+VAR_15*(VAR_11[1]+VAR_15*(VAR_11[2]+VAR_15*(VAR_11[3]+VAR_15*(VAR_11[4]+VAR_15*VAR_11[5]))));
 VAR_13 = VAR_0+VAR_15*(VAR_12[0]+VAR_15*(VAR_12[1]+VAR_15*(VAR_12[2]+VAR_15*(VAR_12[3]+VAR_15*(VAR_12[4]+VAR_15*VAR_12[5])))));
 return (VAR_14/VAR_13-VAR_10)/VAR_9;
}
