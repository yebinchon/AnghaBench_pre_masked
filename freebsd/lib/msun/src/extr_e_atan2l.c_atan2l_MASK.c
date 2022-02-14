
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int manh; int manl; } ;
struct TYPE_3__ {int expsign; } ;
union IEEEl2bits {long double e; TYPE_2__ bits; TYPE_1__ xbits; } ;
typedef int int32_t ;
typedef int int16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long double FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;
 long double FUNC_2 (long double,long double) ;
 long double VAR_4 ;
 int VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 long double VAR_8 ;
 long double VAR_9 ;

long double
FUNC_3(long double VAR_10, long double VAR_11)
{
 union IEEEl2bits VAR_12, VAR_13;
 long double VAR_14;
 int32_t VAR_15,VAR_16;
 int16_t VAR_17, VAR_18, VAR_19, VAR_20;

 VAR_13.e = VAR_10;
 VAR_20 = VAR_13.xbits.expsign;
 VAR_19 = VAR_20 & 0x7fff;
 VAR_12.e = VAR_11;
 VAR_18 = VAR_12.xbits.expsign;
 VAR_17 = VAR_18 & 0x7fff;

 if ((VAR_17==VAR_0+VAR_2 &&
      ((VAR_12.bits.manh&~VAR_3)|VAR_12.bits.manl)!=0) ||
     (VAR_19==VAR_0+VAR_2 &&
      ((VAR_13.bits.manh&~VAR_3)|VAR_13.bits.manl)!=0))
     return FUNC_2(VAR_11, VAR_10);
 if (VAR_18==VAR_0 && ((VAR_12.bits.manh&~VAR_3)|VAR_12.bits.manl)==0)
     return FUNC_0(VAR_10);
 VAR_16 = ((VAR_20>>15)&1)|((VAR_18>>14)&2);


 if(VAR_19==0 && ((VAR_13.bits.manh&~VAR_3)|VAR_13.bits.manl)==0) {
     switch(VAR_16) {
  case 0:
  case 1: return VAR_10;
  case 2: return VAR_4+VAR_8;
  case 3: return -VAR_4-VAR_8;
     }
 }

 if(VAR_17==0 && ((VAR_12.bits.manh&~VAR_3)|VAR_12.bits.manl)==0)
     return (VAR_20<0)? -VAR_6-VAR_8: VAR_6+VAR_8;


 if(VAR_17==VAR_0+VAR_2) {
     if(VAR_19==VAR_0+VAR_2) {
  switch(VAR_16) {
      case 0: return VAR_6*0.5+VAR_8;
      case 1: return -VAR_6*0.5-VAR_8;
      case 2: return 1.5*VAR_6+VAR_8;
      case 3: return -1.5*VAR_6-VAR_8;
  }
     } else {
  switch(VAR_16) {
      case 0: return VAR_9 ;
      case 1: return -VAR_9 ;
      case 2: return VAR_4+VAR_8 ;
      case 3: return -VAR_4-VAR_8 ;
  }
     }
 }

 if(VAR_19==VAR_0+VAR_2)
     return (VAR_20<0)? -VAR_6-VAR_8: VAR_6+VAR_8;


 VAR_15 = VAR_19-VAR_17;
 if(VAR_15 > VAR_1+2) {
     VAR_14=VAR_6+VAR_7;
     VAR_16&=1;
 }
 else if(VAR_18<0&&VAR_15<-VAR_1-2) VAR_14=0.0;
 else VAR_14=FUNC_0(FUNC_1(VAR_10/VAR_11));
 switch (VAR_16) {
     case 0: return VAR_14 ;
     case 1: return -VAR_14 ;
     case 2: return VAR_4-(VAR_14-VAR_5);
     default:
          return (VAR_14-VAR_5)-VAR_4;
 }
}
