
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;
 float VAR_0 ;
 float VAR_1 ;

float
FUNC_2(float VAR_2)
{
 float VAR_3;
 int32_t VAR_4 = (int)0x80000000;
 int32_t VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
 u_int32_t VAR_11;

 FUNC_0(VAR_5,VAR_2);


 if((VAR_5&0x7f800000)==0x7f800000) {
     return VAR_2*VAR_2+VAR_2;

 }

 if(VAR_5<=0) {
     if((VAR_5&(~VAR_4))==0) return VAR_2;
     else if(VAR_5<0)
  return (VAR_2-VAR_2)/(VAR_2-VAR_2);
 }

 VAR_8 = (VAR_5>>23);
 if(VAR_8==0) {
     for(VAR_10=0;(VAR_5&0x00800000)==0;VAR_10++) VAR_5<<=1;
     VAR_8 -= VAR_10-1;
 }
 VAR_8 -= 127;
 VAR_5 = (VAR_5&0x007fffff)|0x00800000;
 if(VAR_8&1)
     VAR_5 += VAR_5;
 VAR_8 >>= 1;


 VAR_5 += VAR_5;
 VAR_7 = VAR_6 = 0;
 VAR_11 = 0x01000000;

 while(VAR_11!=0) {
     VAR_9 = VAR_6+VAR_11;
     if(VAR_9<=VAR_5) {
  VAR_6 = VAR_9+VAR_11;
  VAR_5 -= VAR_9;
  VAR_7 += VAR_11;
     }
     VAR_5 += VAR_5;
     VAR_11>>=1;
 }


 if(VAR_5!=0) {
     VAR_3 = VAR_0-VAR_1;
     if (VAR_3>=VAR_0) {
         VAR_3 = VAR_0+VAR_1;
  if (VAR_3>VAR_0)
      VAR_7 += 2;
  else
      VAR_7 += (VAR_7&1);
     }
 }
 VAR_5 = (VAR_7>>1)+0x3f000000;
 VAR_5 += (VAR_8 <<23);
 FUNC_1(VAR_3,VAR_5);
 return VAR_3;
}
