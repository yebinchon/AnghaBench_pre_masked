
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float,float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;

float
FUNC_4(float VAR_6, float VAR_7)
{
 float VAR_8;
 int32_t VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;

 FUNC_0(VAR_11,VAR_7);
 VAR_13 = VAR_11&0x7fffffff;
 FUNC_0(VAR_12,VAR_6);
 VAR_14 = VAR_12&0x7fffffff;
 if((VAR_13>0x7f800000)||
    (VAR_14>0x7f800000))
     return FUNC_3(VAR_7, VAR_6);
 if(VAR_11==0x3f800000) return FUNC_1(VAR_6);
 VAR_10 = ((VAR_12>>31)&1)|((VAR_11>>30)&2);


 if(VAR_14==0) {
     switch(VAR_10) {
  case 0:
  case 1: return VAR_6;
  case 2: return VAR_0+VAR_4;
  case 3: return -VAR_0-VAR_4;
     }
 }

 if(VAR_13==0) return (VAR_12<0)? -VAR_2-VAR_4: VAR_2+VAR_4;


 if(VAR_13==0x7f800000) {
     if(VAR_14==0x7f800000) {
  switch(VAR_10) {
      case 0: return VAR_3+VAR_4;
      case 1: return -VAR_3-VAR_4;
      case 2: return (float)3.0*VAR_3+VAR_4;
      case 3: return (float)-3.0*VAR_3-VAR_4;
  }
     } else {
  switch(VAR_10) {
      case 0: return VAR_5 ;
      case 1: return -VAR_5 ;
      case 2: return VAR_0+VAR_4 ;
      case 3: return -VAR_0-VAR_4 ;
  }
     }
 }

 if(VAR_14==0x7f800000) return (VAR_12<0)? -VAR_2-VAR_4: VAR_2+VAR_4;


 VAR_9 = (VAR_14-VAR_13)>>23;
 if(VAR_9 > 26) {
     VAR_8=VAR_2+(float)0.5*VAR_1;
     VAR_10&=1;
 }
 else if(VAR_9<-26&&VAR_11<0) VAR_8=0.0;
 else VAR_8=FUNC_1(FUNC_2(VAR_6/VAR_7));
 switch (VAR_10) {
     case 0: return VAR_8 ;
     case 1: return -VAR_8 ;
     case 2: return VAR_0-(VAR_8-VAR_1);
     default:
          return (VAR_8-VAR_1)-VAR_0;
 }
}
