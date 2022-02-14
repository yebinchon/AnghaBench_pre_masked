
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int) ;
 double VAR_0 ;
 double FUNC_2 (double) ;
 double VAR_1 ;
 double VAR_2 ;

double
FUNC_3(double VAR_3)
{
 double VAR_4;
 int32_t VAR_5,VAR_6;
 u_int32_t VAR_7;
 FUNC_0(VAR_5,VAR_7,VAR_3);
 VAR_6 = VAR_5&0x7fffffff;
 if ((VAR_6|((VAR_7|(-VAR_7))>>31))>0x3ff00000)
     return (VAR_3-VAR_3)/(VAR_3-VAR_3);
 if(VAR_6==0x3ff00000)
     return VAR_3/VAR_2;
 if(VAR_6<0x3e300000&&(VAR_0+VAR_3)>VAR_2) return VAR_3;
 FUNC_1(VAR_3,VAR_6);
 if(VAR_6<0x3fe00000) {
     VAR_4 = VAR_3+VAR_3;
     VAR_4 = 0.5*FUNC_2(VAR_4+VAR_4*VAR_3/(VAR_1-VAR_3));
 } else
     VAR_4 = 0.5*FUNC_2((VAR_3+VAR_3)/(VAR_1-VAR_3));
 if(VAR_5>=0) return VAR_4; else return -VAR_4;
}
