
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 double FUNC_1 (int ) ;
 double FUNC_2 (int ,int) ;
 double FUNC_3 (int ) ;
 int FUNC_4 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;

double
FUNC_5(double VAR_3)
{
 double VAR_4,VAR_5;
 int32_t VAR_6;


 FUNC_0(VAR_6,VAR_3);
 VAR_6 &= 0x7fffffff;


 if(VAR_6>=0x7ff00000) return VAR_3*VAR_3;


 if(VAR_6<0x3fd62e43) {
     VAR_4 = FUNC_3(FUNC_4(VAR_3));
     VAR_5 = VAR_2+VAR_4;
     if (VAR_6<0x3c800000) return VAR_5;
     return VAR_2+(VAR_4*VAR_4)/(VAR_5+VAR_5);
 }


 if (VAR_6 < 0x40360000) {
  VAR_4 = FUNC_1(FUNC_4(VAR_3));
  return VAR_0*VAR_4+VAR_0/VAR_4;
 }


 if (VAR_6 < 0x40862E42) return VAR_0*FUNC_1(FUNC_4(VAR_3));


 if (VAR_6<=0x408633CE)
     return FUNC_2(FUNC_4(VAR_3), -1);


 return VAR_1*VAR_1;
}
