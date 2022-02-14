
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 int FUNC_5 (double,double*,double*) ;
 double FUNC_6 (double) ;
 double VAR_12 ;

double
FUNC_7(double VAR_13)
{
 double VAR_14, VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;
 int32_t VAR_23,VAR_24;

 FUNC_0(VAR_23,VAR_13);
 VAR_24 = VAR_23&0x7fffffff;
 if(VAR_24>=0x7ff00000) return VAR_2/VAR_13;
 VAR_22 = FUNC_2(VAR_13);
 if(VAR_24 >= 0x40000000) {
  FUNC_5(VAR_22, &VAR_15, &VAR_16);
  VAR_17 = -VAR_15-VAR_16;
  VAR_18 = VAR_15-VAR_16;
  if(VAR_24<0x7fe00000) {
      VAR_14 = FUNC_1(VAR_22+VAR_22);
      if ((VAR_15*VAR_16)>VAR_12) VAR_18 = VAR_14/VAR_17;
      else VAR_17 = VAR_14/VAR_18;
  }




  if(VAR_24>0x48000000) VAR_14 = (VAR_1*VAR_18)/FUNC_6(VAR_22);
  else {
      VAR_20 = FUNC_3(VAR_22); VAR_21 = FUNC_4(VAR_22);
      VAR_14 = VAR_1*(VAR_20*VAR_18-VAR_21*VAR_17)/FUNC_6(VAR_22);
  }
  if(VAR_23<0) return -VAR_14;
  else return VAR_14;
 }
 if(VAR_24<0x3e400000) {
     if(VAR_0+VAR_13>VAR_2) return 0.5*VAR_13;
 }
 VAR_14 = VAR_13*VAR_13;
 VAR_19 = VAR_14*(VAR_3+VAR_14*(VAR_4+VAR_14*(VAR_5+VAR_14*VAR_6)));
 VAR_15 = VAR_2+VAR_14*(VAR_7+VAR_14*(VAR_8+VAR_14*(VAR_9+VAR_14*(VAR_10+VAR_14*VAR_11))));
 VAR_19 *= VAR_13;
 return(VAR_13*0.5+VAR_19/VAR_15);
}
