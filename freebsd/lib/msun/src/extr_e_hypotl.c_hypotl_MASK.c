
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ manl; } ;
union IEEEl2bits {long double e; TYPE_1__ bits; } ;
typedef int u_int32_t ;
typedef scalar_t__ man_t ;
typedef int int32_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,long double) ;
 int FUNC_3 (scalar_t__,scalar_t__,long double) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (long double,int) ;
 long double FUNC_5 (long double) ;
 long double FUNC_6 (long double) ;

long double
FUNC_7(long double VAR_3, long double VAR_4)
{
 long double VAR_5=VAR_3,VAR_6=VAR_4,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;
 int32_t VAR_12,VAR_13,VAR_14,VAR_15;

 FUNC_2(VAR_14,VAR_3);
 VAR_14 &= 0x7fff;
 FUNC_2(VAR_15,VAR_4);
 VAR_15 &= 0x7fff;
 if(VAR_15 > VAR_14) {VAR_5=VAR_4;VAR_6=VAR_3;VAR_12=VAR_14; VAR_14=VAR_15;VAR_15=VAR_12;} else {VAR_5=VAR_3;VAR_6=VAR_4;}
 VAR_5 = FUNC_5(VAR_5);
 VAR_6 = FUNC_5(VAR_6);
 if((VAR_14-VAR_15)>FUNC_0(VAR_1+7)) {return VAR_5+VAR_6;}
 VAR_13=0;
 if(VAR_14 > FUNC_1(VAR_2/2-12)) {
    if(VAR_14 >= FUNC_1(VAR_2)) {
        man_t VAR_16, VAR_17;

        VAR_11 = FUNC_5(VAR_3+0.0L)-FUNC_5(VAR_4+0);
        FUNC_3(VAR_16,VAR_17,VAR_5);
        if (VAR_16 == VAR_0 && VAR_17 == 0) VAR_11 = VAR_5;
        FUNC_3(VAR_16,VAR_17,VAR_6);
        if (VAR_15 >= FUNC_1(VAR_2) && VAR_16 == VAR_0 && VAR_17 == 0) VAR_11 = VAR_6;
        return VAR_11;
    }

    VAR_14 -= FUNC_0(VAR_2/2+88); VAR_15 -= FUNC_0(VAR_2/2+88);
    VAR_13 += VAR_2/2+88;
    FUNC_4(VAR_5,VAR_14);
    FUNC_4(VAR_6,VAR_15);
 }
 if(VAR_15 < FUNC_1(-(VAR_2/2-12))) {
     if(VAR_15 <= 0) {
         man_t VAR_18, VAR_19;
  FUNC_3(VAR_18,VAR_19,VAR_6);
  if((VAR_18|VAR_19)==0) return VAR_5;
  VAR_7=0;
  FUNC_4(VAR_7,FUNC_1(VAR_2-2));
  VAR_6 *= VAR_7;
  VAR_5 *= VAR_7;
  VAR_13 -= VAR_2-2;
     } else {
  VAR_14 += FUNC_0(VAR_2/2+88);
  VAR_15 += FUNC_0(VAR_2/2+88);
  VAR_13 -= VAR_2/2+88;
  FUNC_4(VAR_5,VAR_14);
  FUNC_4(VAR_6,VAR_15);
     }
 }

 VAR_11 = VAR_5-VAR_6;
 if (VAR_11>VAR_6) {
     VAR_7 = VAR_5;
     union IEEEl2bits VAR_20;
     VAR_20.e = VAR_7; VAR_20.bits.manl = 0; VAR_7 = VAR_20.e;
     VAR_8 = VAR_5-VAR_7;
     VAR_11 = FUNC_6(VAR_7*VAR_7-(VAR_6*(-VAR_6)-VAR_8*(VAR_5+VAR_7)));
 } else {
     VAR_5 = VAR_5+VAR_5;
     VAR_9 = VAR_6;
     union IEEEl2bits VAR_21;
     VAR_21.e = VAR_9; VAR_21.bits.manl = 0; VAR_9 = VAR_21.e;
     VAR_10 = VAR_6 - VAR_9;
     VAR_7 = VAR_5;
     VAR_21.e = VAR_7; VAR_21.bits.manl = 0; VAR_7 = VAR_21.e;
     VAR_8 = VAR_5 - VAR_7;
     VAR_11 = FUNC_6(VAR_7*VAR_9-(VAR_11*(-VAR_11)-(VAR_7*VAR_10+VAR_8*VAR_6)));
 }
 if(VAR_13!=0) {
     u_int32_t VAR_22;
     VAR_7 = 1.0;
     FUNC_2(VAR_22,VAR_7);
     FUNC_4(VAR_7,VAR_22+FUNC_0(VAR_13));
     return VAR_7*VAR_11;
 } else return VAR_11;
}
