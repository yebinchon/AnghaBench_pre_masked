
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double,double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;

double
FUNC_4(double VAR_6, double VAR_7)
{
 double VAR_8;
 int32_t VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;
 u_int32_t VAR_15,VAR_16;

 FUNC_0(VAR_11,VAR_15,VAR_7);
 VAR_13 = VAR_11&0x7fffffff;
 FUNC_0(VAR_12,VAR_16,VAR_6);
 VAR_14 = VAR_12&0x7fffffff;
 if(((VAR_13|((VAR_15|-VAR_15)>>31))>0x7ff00000)||
    ((VAR_14|((VAR_16|-VAR_16)>>31))>0x7ff00000))
     return FUNC_3(VAR_7, VAR_6);
 if(VAR_11==0x3ff00000&&VAR_15==0) return FUNC_1(VAR_6);
 VAR_10 = ((VAR_12>>31)&1)|((VAR_11>>30)&2);


 if((VAR_14|VAR_16)==0) {
     switch(VAR_10) {
  case 0:
  case 1: return VAR_6;
  case 2: return VAR_0+VAR_4;
  case 3: return -VAR_0-VAR_4;
     }
 }

 if((VAR_13|VAR_15)==0) return (VAR_12<0)? -VAR_2-VAR_4: VAR_2+VAR_4;


 if(VAR_13==0x7ff00000) {
     if(VAR_14==0x7ff00000) {
  switch(VAR_10) {
      case 0: return VAR_3+VAR_4;
      case 1: return -VAR_3-VAR_4;
      case 2: return 3.0*VAR_3+VAR_4;
      case 3: return -3.0*VAR_3-VAR_4;
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

 if(VAR_14==0x7ff00000) return (VAR_12<0)? -VAR_2-VAR_4: VAR_2+VAR_4;


 VAR_9 = (VAR_14-VAR_13)>>20;
 if(VAR_9 > 60) {
     VAR_8=VAR_2+0.5*VAR_1;
     VAR_10&=1;
 }
 else if(VAR_11<0&&VAR_9<-60) VAR_8=0.0;
 else VAR_8=FUNC_1(FUNC_2(VAR_6/VAR_7));
 switch (VAR_10) {
     case 0: return VAR_8 ;
     case 1: return -VAR_8 ;
     case 2: return VAR_0-(VAR_8-VAR_1);
     default:
          return (VAR_8-VAR_1)-VAR_0;
 }
}
