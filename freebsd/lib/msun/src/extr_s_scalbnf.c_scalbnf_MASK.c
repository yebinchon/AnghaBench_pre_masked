
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float FUNC_2 (float,float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

float
FUNC_3 (float VAR_4, int VAR_5)
{
 int32_t VAR_6,VAR_7;
 FUNC_0(VAR_7,VAR_4);
        VAR_6 = (VAR_7&0x7f800000)>>23;
        if (VAR_6==0) {
            if ((VAR_7&0x7fffffff)==0) return VAR_4;
     VAR_4 *= VAR_2;
     FUNC_0(VAR_7,VAR_4);
     VAR_6 = ((VAR_7&0x7f800000)>>23) - 25;
            if (VAR_5< -50000) return VAR_1*VAR_4;
     }
        if (VAR_6==0xff) return VAR_4+VAR_4;
        VAR_6 = VAR_6+VAR_5;
        if (VAR_6 > 0xfe) return VAR_0*FUNC_2(VAR_0,VAR_4);
        if (VAR_6 > 0)
     {FUNC_1(VAR_4,(VAR_7&0x807fffff)|(VAR_6<<23)); return VAR_4;}
        if (VAR_6 <= -25) {
            if (VAR_5 > 50000)
  return VAR_0*FUNC_2(VAR_0,VAR_4);
     else
  return VAR_1*FUNC_2(VAR_1,VAR_4);
 }
        VAR_6 += 25;
 FUNC_1(VAR_4,(VAR_7&0x807fffff)|(VAR_6<<23));
        return VAR_4*VAR_3;
}
