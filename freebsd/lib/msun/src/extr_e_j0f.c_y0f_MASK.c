
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float FUNC_4 (float) ;
 float FUNC_5 (float) ;
 int FUNC_6 (float,float*,float*) ;
 float FUNC_7 (float) ;
 float VAR_2 ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 float VAR_12 ;
 float VAR_13 ;
 float VAR_14 ;
 float VAR_15 ;
 float VAR_16 ;

float
FUNC_8(float VAR_17)
{
 float VAR_18, VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;
 int32_t VAR_25,VAR_26;

 FUNC_0(VAR_25,VAR_17);
        VAR_26 = 0x7fffffff&VAR_25;
 if(VAR_26>=0x7f800000) return VAR_14/(VAR_17+VAR_17*VAR_17);
 if(VAR_26==0) return -VAR_1/VAR_15;
 if(VAR_25<0) return VAR_15/VAR_15;
        if(VAR_26 >= 0x40000000) {
                FUNC_6(VAR_17, &VAR_19, &VAR_20);
                VAR_21 = VAR_19-VAR_20;
                VAR_22 = VAR_19+VAR_20;




                if(VAR_26<0x7f000000) {
                    VAR_18 = -FUNC_3(VAR_17+VAR_17);
                    if ((VAR_19*VAR_20)<VAR_16) VAR_22 = VAR_18/VAR_21;
                    else VAR_21 = VAR_18/VAR_22;
                }
                if(VAR_26>0x58000000) VAR_18 = (VAR_0*VAR_21)/FUNC_7(VAR_17);
                else {
                    VAR_23 = FUNC_4(VAR_17); VAR_24 = FUNC_5(VAR_17);
                    VAR_18 = VAR_0*(VAR_23*VAR_21+VAR_24*VAR_22)/FUNC_7(VAR_17);
                }
                return VAR_18;
 }
 if(VAR_26<=0x39000000) {
     return(VAR_3 + VAR_2*FUNC_2(VAR_17));
 }
 VAR_18 = VAR_17*VAR_17;
 VAR_23 = VAR_3+VAR_18*(VAR_4+VAR_18*(VAR_5+VAR_18*(VAR_6+VAR_18*(VAR_7+VAR_18*(VAR_8+VAR_18*VAR_9)))));
 VAR_24 = VAR_1+VAR_18*(VAR_10+VAR_18*(VAR_11+VAR_18*(VAR_12+VAR_18*VAR_13)));
 return(VAR_23/VAR_24 + VAR_2*(FUNC_1(VAR_17)*FUNC_2(VAR_17)));
}
