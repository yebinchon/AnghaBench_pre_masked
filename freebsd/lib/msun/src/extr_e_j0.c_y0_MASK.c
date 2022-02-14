
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double FUNC_4 (double) ;
 double FUNC_5 (double) ;
 int FUNC_6 (double,double*,double*) ;
 double FUNC_7 (double) ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 double VAR_13 ;
 double VAR_14 ;
 double VAR_15 ;
 double VAR_16 ;

double
FUNC_8(double VAR_17)
{
 double VAR_18, VAR_19,VAR_20,VAR_21,VAR_22,VAR_23,VAR_24;
 int32_t VAR_25,VAR_26,VAR_27;

 FUNC_0(VAR_25,VAR_27,VAR_17);
        VAR_26 = 0x7fffffff&VAR_25;





 if(VAR_26>=0x7ff00000) return VAR_14/(VAR_17+VAR_17*VAR_17);

 if((VAR_26|VAR_27)==0) return -VAR_1/VAR_15;

 if(VAR_25<0) return VAR_15/VAR_15;
        if(VAR_26 >= 0x40000000) {
                FUNC_6(VAR_17, &VAR_19, &VAR_20);
                VAR_21 = VAR_19-VAR_20;
                VAR_22 = VAR_19+VAR_20;




                if(VAR_26<0x7fe00000) {
                    VAR_18 = -FUNC_3(VAR_17+VAR_17);
                    if ((VAR_19*VAR_20)<VAR_16) VAR_22 = VAR_18/VAR_21;
                    else VAR_21 = VAR_18/VAR_22;
                }
                if(VAR_26>0x48000000) VAR_18 = (VAR_0*VAR_21)/FUNC_7(VAR_17);
                else {
                    VAR_23 = FUNC_4(VAR_17); VAR_24 = FUNC_5(VAR_17);
                    VAR_18 = VAR_0*(VAR_23*VAR_21+VAR_24*VAR_22)/FUNC_7(VAR_17);
                }
                return VAR_18;
 }
 if(VAR_26<=0x3e400000) {
     return(VAR_3 + VAR_2*FUNC_2(VAR_17));
 }
 VAR_18 = VAR_17*VAR_17;
 VAR_23 = VAR_3+VAR_18*(VAR_4+VAR_18*(VAR_5+VAR_18*(VAR_6+VAR_18*(VAR_7+VAR_18*(VAR_8+VAR_18*VAR_9)))));
 VAR_24 = VAR_1+VAR_18*(VAR_10+VAR_18*(VAR_11+VAR_18*(VAR_12+VAR_18*VAR_13)));
 return(VAR_23/VAR_24 + VAR_2*(FUNC_1(VAR_17)*FUNC_2(VAR_17)));
}
