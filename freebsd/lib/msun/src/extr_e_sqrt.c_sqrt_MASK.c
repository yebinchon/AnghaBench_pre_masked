
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (double,int,int) ;
 double VAR_0 ;
 double VAR_1 ;

double
FUNC_2(double VAR_2)
{
 double VAR_3;
 int32_t VAR_4 = (int)0x80000000;
 int32_t VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10;
 u_int32_t VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;

 FUNC_0(VAR_5,VAR_14,VAR_2);


 if((VAR_5&0x7ff00000)==0x7ff00000) {
     return VAR_2*VAR_2+VAR_2;

 }

 if(VAR_5<=0) {
     if(((VAR_5&(~VAR_4))|VAR_14)==0) return VAR_2;
     else if(VAR_5<0)
  return (VAR_2-VAR_2)/(VAR_2-VAR_2);
 }

 VAR_8 = (VAR_5>>20);
 if(VAR_8==0) {
     while(VAR_5==0) {
  VAR_8 -= 21;
  VAR_5 |= (VAR_14>>11); VAR_14 <<= 21;
     }
     for(VAR_10=0;(VAR_5&0x00100000)==0;VAR_10++) VAR_5<<=1;
     VAR_8 -= VAR_10-1;
     VAR_5 |= (VAR_14>>(32-VAR_10));
     VAR_14 <<= VAR_10;
 }
 VAR_8 -= 1023;
 VAR_5 = (VAR_5&0x000fffff)|0x00100000;
 if(VAR_8&1){
     VAR_5 += VAR_5 + ((VAR_14&VAR_4)>>31);
     VAR_14 += VAR_14;
 }
 VAR_8 >>= 1;


 VAR_5 += VAR_5 + ((VAR_14&VAR_4)>>31);
 VAR_14 += VAR_14;
 VAR_7 = VAR_15 = VAR_6 = VAR_13 = 0;
 VAR_11 = 0x00200000;

 while(VAR_11!=0) {
     VAR_9 = VAR_6+VAR_11;
     if(VAR_9<=VAR_5) {
  VAR_6 = VAR_9+VAR_11;
  VAR_5 -= VAR_9;
  VAR_7 += VAR_11;
     }
     VAR_5 += VAR_5 + ((VAR_14&VAR_4)>>31);
     VAR_14 += VAR_14;
     VAR_11>>=1;
 }

 VAR_11 = VAR_4;
 while(VAR_11!=0) {
     VAR_12 = VAR_13+VAR_11;
     VAR_9 = VAR_6;
     if((VAR_9<VAR_5)||((VAR_9==VAR_5)&&(VAR_12<=VAR_14))) {
  VAR_13 = VAR_12+VAR_11;
  if(((VAR_12&VAR_4)==VAR_4)&&(VAR_13&VAR_4)==0) VAR_6 += 1;
  VAR_5 -= VAR_9;
  if (VAR_14 < VAR_12) VAR_5 -= 1;
  VAR_14 -= VAR_12;
  VAR_15 += VAR_11;
     }
     VAR_5 += VAR_5 + ((VAR_14&VAR_4)>>31);
     VAR_14 += VAR_14;
     VAR_11>>=1;
 }


 if((VAR_5|VAR_14)!=0) {
     VAR_3 = VAR_0-VAR_1;
     if (VAR_3>=VAR_0) {
         VAR_3 = VAR_0+VAR_1;
         if (VAR_15==(u_int32_t)0xffffffff) { VAR_15=0; VAR_7 += 1;}
  else if (VAR_3>VAR_0) {
      if (VAR_15==(u_int32_t)0xfffffffe) VAR_7+=1;
      VAR_15+=2;
  } else
             VAR_15 += (VAR_15&1);
     }
 }
 VAR_5 = (VAR_7>>1)+0x3fe00000;
 VAR_14 = VAR_15>>1;
 if ((VAR_7&1)==1) VAR_14 |= VAR_4;
 VAR_5 += (VAR_8 <<20);
 FUNC_1(VAR_3,VAR_5,VAR_14);
 return VAR_3;
}
