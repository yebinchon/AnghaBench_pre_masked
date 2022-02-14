
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;

float
FUNC_2(float VAR_1, int *VAR_2)
{
 int32_t VAR_3,VAR_4;
 FUNC_0(VAR_3,VAR_1);
 VAR_4 = 0x7fffffff&VAR_3;
 *VAR_2 = 0;
 if(VAR_4>=0x7f800000||(VAR_4==0)) return VAR_1;
 if (VAR_4<0x00800000) {
     VAR_1 *= VAR_0;
     FUNC_0(VAR_3,VAR_1);
     VAR_4 = VAR_3&0x7fffffff;
     *VAR_2 = -25;
 }
 *VAR_2 += (VAR_4>>23)-126;
 VAR_3 = (VAR_3&0x807fffff)|0x3f000000;
 FUNC_1(VAR_1,VAR_3);
 return VAR_1;
}
