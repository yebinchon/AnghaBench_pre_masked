
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;
 float VAR_3 ;
 float VAR_4 ;
 float VAR_5 ;
 float VAR_6 ;
 float VAR_7 ;
 float VAR_8 ;
 float VAR_9 ;
 float VAR_10 ;
 float VAR_11 ;
 int FUNC_5 (float,float*,float*) ;
 float FUNC_6 (float) ;
 float VAR_12 ;

float
FUNC_7(float VAR_13)
{
 float VAR_14, VAR_15,VAR_16,VAR_17,VAR_18,VAR_19,VAR_20,VAR_21,VAR_22;
 int32_t VAR_23,VAR_24;

 FUNC_0(VAR_23,VAR_13);
 VAR_24 = VAR_23&0x7fffffff;
 if(VAR_24>=0x7f800000) return VAR_2/VAR_13;
 VAR_22 = FUNC_2(VAR_13);
 if(VAR_24 >= 0x40000000) {
  FUNC_5(VAR_22, &VAR_15, &VAR_16);
  VAR_17 = -VAR_15-VAR_16;
  VAR_18 = VAR_15-VAR_16;
  if(VAR_24<0x7f000000) {
      VAR_14 = FUNC_1(VAR_22+VAR_22);
      if ((VAR_15*VAR_16)>VAR_12) VAR_18 = VAR_14/VAR_17;
      else VAR_17 = VAR_14/VAR_18;
  }




  if(VAR_24>0x58000000) VAR_14 = (VAR_1*VAR_18)/FUNC_6(VAR_22);
  else {
      VAR_20 = FUNC_3(VAR_22); VAR_21 = FUNC_4(VAR_22);
      VAR_14 = VAR_1*(VAR_20*VAR_18-VAR_21*VAR_17)/FUNC_6(VAR_22);
  }
  if(VAR_23<0) return -VAR_14;
  else return VAR_14;
 }
 if(VAR_24<0x39000000) {
     if(VAR_0+VAR_13>VAR_2) return (float)0.5*VAR_13;
 }
 VAR_14 = VAR_13*VAR_13;
 VAR_19 = VAR_14*(VAR_3+VAR_14*(VAR_4+VAR_14*(VAR_5+VAR_14*VAR_6)));
 VAR_15 = VAR_2+VAR_14*(VAR_7+VAR_14*(VAR_8+VAR_14*(VAR_9+VAR_14*(VAR_10+VAR_14*VAR_11))));
 VAR_19 *= VAR_13;
 return(VAR_13*(float)0.5+VAR_19/VAR_15);
}
