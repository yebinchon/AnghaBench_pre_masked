
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int) ;
 double FUNC_3 (double,double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_4 (double VAR_4, int VAR_5)
{
 int32_t VAR_6,VAR_7,VAR_8;
 FUNC_0(VAR_7,VAR_8,VAR_4);
        VAR_6 = (VAR_7&0x7ff00000)>>20;
        if (VAR_6==0) {
            if ((VAR_8|(VAR_7&0x7fffffff))==0) return VAR_4;
     VAR_4 *= VAR_2;
     FUNC_1(VAR_7,VAR_4);
     VAR_6 = ((VAR_7&0x7ff00000)>>20) - 54;
            if (VAR_5< -50000) return VAR_1*VAR_4;
     }
        if (VAR_6==0x7ff) return VAR_4+VAR_4;
        VAR_6 = VAR_6+VAR_5;
        if (VAR_6 > 0x7fe) return VAR_0*FUNC_3(VAR_0,VAR_4);
        if (VAR_6 > 0)
     {FUNC_2(VAR_4,(VAR_7&0x800fffff)|(VAR_6<<20)); return VAR_4;}
        if (VAR_6 <= -54) {
            if (VAR_5 > 50000)
  return VAR_0*FUNC_3(VAR_0,VAR_4);
     else
  return VAR_1*FUNC_3(VAR_1,VAR_4);
 }
        VAR_6 += 54;
 FUNC_2(VAR_4,(VAR_7&0x800fffff)|(VAR_6<<20));
        return VAR_4*VAR_3;
}
