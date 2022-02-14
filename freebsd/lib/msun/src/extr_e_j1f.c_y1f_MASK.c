
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float* VAR_0 ;
 float* VAR_1 ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float VAR_2 ;
 float VAR_3 ;
 float FUNC_4 (float) ;
 float FUNC_5 (float) ;
 int FUNC_6 (float,float*,float*) ;
 float FUNC_7 (float) ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;

float
FUNC_8(float VAR_8)
{
 float VAR_9, VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;
 int32_t VAR_16,VAR_17;

 FUNC_0(VAR_16,VAR_8);
        VAR_17 = 0x7fffffff&VAR_16;
 if(VAR_17>=0x7f800000) return VAR_5/(VAR_8+VAR_8*VAR_8);
 if(VAR_17==0) return -VAR_3/VAR_6;
 if(VAR_16<0) return VAR_6/VAR_6;
        if(VAR_17 >= 0x40000000) {
                FUNC_6(VAR_8, &VAR_10, &VAR_11);
                VAR_12 = -VAR_10-VAR_11;
                VAR_13 = VAR_10-VAR_11;
                if(VAR_17<0x7f000000) {
                    VAR_9 = FUNC_3(VAR_8+VAR_8);
                    if ((VAR_10*VAR_11)>VAR_7) VAR_13 = VAR_9/VAR_12;
                    else VAR_12 = VAR_9/VAR_13;
                }
                if(VAR_17>0x58000000) VAR_9 = (VAR_2*VAR_12)/FUNC_7(VAR_8);
                else {
                    VAR_14 = FUNC_4(VAR_8); VAR_15 = FUNC_5(VAR_8);
                    VAR_9 = VAR_2*(VAR_14*VAR_12+VAR_15*VAR_13)/FUNC_7(VAR_8);
                }
                return VAR_9;
        }
        if(VAR_17<=0x33000000) {
            return(-VAR_4/VAR_8);
        }
        VAR_9 = VAR_8*VAR_8;
        VAR_14 = VAR_0[0]+VAR_9*(VAR_0[1]+VAR_9*(VAR_0[2]+VAR_9*(VAR_0[3]+VAR_9*VAR_0[4])));
        VAR_15 = VAR_3+VAR_9*(VAR_1[0]+VAR_9*(VAR_1[1]+VAR_9*(VAR_1[2]+VAR_9*(VAR_1[3]+VAR_9*VAR_1[4]))));
        return(VAR_8*(VAR_14/VAR_15) + VAR_4*(FUNC_1(VAR_8)*FUNC_2(VAR_8)-VAR_3/VAR_8));
}
