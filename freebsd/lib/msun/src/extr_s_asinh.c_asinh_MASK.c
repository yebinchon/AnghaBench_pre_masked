
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_4 (double) ;
 double VAR_2 ;

double
FUNC_5(double VAR_3)
{
 double VAR_4,VAR_5;
 int32_t VAR_6,VAR_7;
 FUNC_0(VAR_6,VAR_3);
 VAR_7 = VAR_6&0x7fffffff;
 if(VAR_7>=0x7ff00000) return VAR_3+VAR_3;
 if(VAR_7< 0x3e300000) {
     if(VAR_0+VAR_3>VAR_2) return VAR_3;
 }
 if(VAR_7>0x41b00000) {
     VAR_5 = FUNC_1(FUNC_3(VAR_3))+VAR_1;
 } else if (VAR_7>0x40000000) {
     VAR_4 = FUNC_3(VAR_3);
     VAR_5 = FUNC_1(2.0*VAR_4+VAR_2/(FUNC_2(VAR_3*VAR_3+VAR_2)+VAR_4));
 } else {
     VAR_4 = VAR_3*VAR_3;
     VAR_5 =FUNC_4(FUNC_3(VAR_3)+VAR_4/(VAR_2+FUNC_2(VAR_2+VAR_4)));
 }
 if(VAR_6>0) return VAR_5; else return -VAR_5;
}
