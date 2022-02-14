
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 float FUNC_2 (float) ;
 float FUNC_3 (float) ;
 float FUNC_4 (float) ;
 int VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;

float
FUNC_5(int VAR_3, float VAR_4)
{
 int32_t VAR_5,VAR_6,VAR_7, VAR_8;
 float VAR_9, VAR_10, VAR_11, VAR_12;
 float VAR_13, VAR_14;




 FUNC_0(VAR_6,VAR_4);
 VAR_7 = 0x7fffffff&VAR_6;

 if(VAR_7>0x7f800000) return VAR_4+VAR_4;
 if(VAR_3<0){
  VAR_3 = -VAR_3;
  VAR_4 = -VAR_4;
  VAR_6 ^= 0x80000000;
 }
 if(VAR_3==0) return(FUNC_1(VAR_4));
 if(VAR_3==1) return(FUNC_2(VAR_4));
 VAR_8 = (VAR_3&1)&(VAR_6>>31);
 VAR_4 = FUNC_4(VAR_4);
 if(VAR_7==0||VAR_7>=0x7f800000)
     VAR_10 = VAR_2;
 else if((float)VAR_3<=VAR_4) {

     VAR_9 = FUNC_1(VAR_4);
     VAR_10 = FUNC_2(VAR_4);
     for(VAR_5=1;VAR_5<VAR_3;VAR_5++){
  VAR_11 = VAR_10;
  VAR_10 = VAR_10*((float)(VAR_5+VAR_5)/VAR_4) - VAR_9;
  VAR_9 = VAR_11;
     }
 } else {
     if(VAR_7<0x30800000) {



  if(VAR_3>33)
      VAR_10 = VAR_2;
  else {
      VAR_11 = VAR_4*(float)0.5; VAR_10 = VAR_11;
      for (VAR_9=VAR_0,VAR_5=2;VAR_5<=VAR_3;VAR_5++) {
   VAR_9 *= (float)VAR_5;
   VAR_10 *= VAR_11;
      }
      VAR_10 = VAR_10/VAR_9;
  }
     } else {
  float VAR_15,VAR_16;
  float VAR_17,VAR_18,VAR_19,VAR_20; int32_t VAR_21,VAR_22;
  VAR_14 = (VAR_3+VAR_3)/(float)VAR_4; VAR_19 = (float)2.0/(float)VAR_4;
  VAR_17 = VAR_14; VAR_13 = VAR_14+VAR_19; VAR_18 = VAR_14*VAR_13 - (float)1.0; VAR_21=1;
  while(VAR_18<(float)1.0e9) {
   VAR_21 += 1; VAR_13 += VAR_19;
   VAR_20 = VAR_13*VAR_18 - VAR_17;
   VAR_17 = VAR_18;
   VAR_18 = VAR_20;
  }
  VAR_22 = VAR_3+VAR_3;
  for(VAR_15=VAR_2, VAR_5 = 2*(VAR_3+VAR_21); VAR_5>=VAR_22; VAR_5 -= 2) VAR_15 = VAR_0/(VAR_5/VAR_4-VAR_15);
  VAR_9 = VAR_15;
  VAR_10 = VAR_0;
  VAR_20 = VAR_3;
  VAR_16 = VAR_1/VAR_4;
  VAR_20 = VAR_20*FUNC_3(FUNC_4(VAR_16*VAR_20));
  if(VAR_20<(float)8.8721679688e+01) {
          for(VAR_5=VAR_3-1,VAR_12=(float)(VAR_5+VAR_5);VAR_5>0;VAR_5--){
          VAR_11 = VAR_10;
   VAR_10 *= VAR_12;
   VAR_10 = VAR_10/VAR_4 - VAR_9;
          VAR_9 = VAR_11;
   VAR_12 -= VAR_1;
           }
  } else {
          for(VAR_5=VAR_3-1,VAR_12=(float)(VAR_5+VAR_5);VAR_5>0;VAR_5--){
          VAR_11 = VAR_10;
   VAR_10 *= VAR_12;
   VAR_10 = VAR_10/VAR_4 - VAR_9;
          VAR_9 = VAR_11;
   VAR_12 -= VAR_1;

   if(VAR_10>(float)1e10) {
       VAR_9 /= VAR_10;
       VAR_15 /= VAR_10;
       VAR_10 = VAR_0;
   }
           }
  }
  VAR_13 = FUNC_1(VAR_4);
  VAR_14 = FUNC_2(VAR_4);
  if (FUNC_4(VAR_13) >= FUNC_4(VAR_14))
      VAR_10 = (VAR_15*VAR_13/VAR_10);
  else
      VAR_10 = (VAR_15*VAR_14/VAR_9);
     }
 }
 if(VAR_8==1) return -VAR_10; else return VAR_10;
}
