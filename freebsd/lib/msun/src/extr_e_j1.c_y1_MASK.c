
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double* VAR_0 ;
 double* VAR_1 ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double VAR_2 ;
 double VAR_3 ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 int FUNC_6 (double,double*,double*) ;
 double FUNC_7 (double) ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;

double
FUNC_8(double VAR_8)
{
 double VAR_9, VAR_10,VAR_11,VAR_12,VAR_13,VAR_14,VAR_15;
 int32_t VAR_16,VAR_17,VAR_18;

 FUNC_0(VAR_16,VAR_18,VAR_8);
        VAR_17 = 0x7fffffff&VAR_16;





 if(VAR_17>=0x7ff00000) return VAR_5/(VAR_8+VAR_8*VAR_8);

        if((VAR_17|VAR_18)==0) return -VAR_3/VAR_6;

        if(VAR_16<0) return VAR_6/VAR_6;
        if(VAR_17 >= 0x40000000) {
                FUNC_6(VAR_8, &VAR_10, &VAR_11);
                VAR_12 = -VAR_10-VAR_11;
                VAR_13 = VAR_10-VAR_11;
                if(VAR_17<0x7fe00000) {
                    VAR_9 = FUNC_3(VAR_8+VAR_8);
                    if ((VAR_10*VAR_11)>VAR_7) VAR_13 = VAR_9/VAR_12;
                    else VAR_12 = VAR_9/VAR_13;
                }
                if(VAR_17>0x48000000) VAR_9 = (VAR_2*VAR_12)/FUNC_7(VAR_8);
                else {
                    VAR_14 = FUNC_4(VAR_8); VAR_15 = FUNC_5(VAR_8);
                    VAR_9 = VAR_2*(VAR_14*VAR_12+VAR_15*VAR_13)/FUNC_7(VAR_8);
                }
                return VAR_9;
        }
        if(VAR_17<=0x3c900000) {
            return(-VAR_4/VAR_8);
        }
        VAR_9 = VAR_8*VAR_8;
        VAR_14 = VAR_0[0]+VAR_9*(VAR_0[1]+VAR_9*(VAR_0[2]+VAR_9*(VAR_0[3]+VAR_9*VAR_0[4])));
        VAR_15 = VAR_3+VAR_9*(VAR_1[0]+VAR_9*(VAR_1[1]+VAR_9*(VAR_1[2]+VAR_9*(VAR_1[3]+VAR_9*VAR_1[4]))));
        return(VAR_8*(VAR_14/VAR_15) + VAR_4*(FUNC_1(VAR_8)*FUNC_2(VAR_8)-VAR_3/VAR_8));
}
