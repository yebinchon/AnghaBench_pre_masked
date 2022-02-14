
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 double FUNC_1 (double) ;
 double FUNC_2 (double) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;
 double VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (double,double*,double*) ;
 double FUNC_6 (double) ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_7(int VAR_4, double VAR_5)
{
 int32_t VAR_6,VAR_7,VAR_8,VAR_9, VAR_10;
 double VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16;
 double VAR_17, VAR_18;




 FUNC_0(VAR_7,VAR_9,VAR_5);
 VAR_8 = 0x7fffffff&VAR_7;

 if((VAR_8|((u_int32_t)(VAR_9|-VAR_9))>>31)>0x7ff00000) return VAR_5+VAR_5;
 if(VAR_4<0){
  VAR_4 = -VAR_4;
  VAR_5 = -VAR_5;
  VAR_7 ^= 0x80000000;
 }
 if(VAR_4==0) return(FUNC_1(VAR_5));
 if(VAR_4==1) return(FUNC_2(VAR_5));
 VAR_10 = (VAR_4&1)&(VAR_7>>31);
 VAR_5 = FUNC_4(VAR_5);
 if((VAR_8|VAR_9)==0||VAR_8>=0x7ff00000)
     VAR_12 = VAR_3;
 else if((double)VAR_4<=VAR_5) {

     if(VAR_8>=0x52D00000) {
  FUNC_5(VAR_5, &VAR_14, &VAR_13);
  switch(VAR_4&3) {
      case 0: VAR_15 = VAR_13+VAR_14; break;
      case 1: VAR_15 = -VAR_13+VAR_14; break;
      case 2: VAR_15 = -VAR_13-VAR_14; break;
      case 3: VAR_15 = VAR_13-VAR_14; break;
  }
  VAR_12 = VAR_0*VAR_15/FUNC_6(VAR_5);
     } else {
         VAR_11 = FUNC_1(VAR_5);
         VAR_12 = FUNC_2(VAR_5);
         for(VAR_6=1;VAR_6<VAR_4;VAR_6++){
      VAR_15 = VAR_12;
      VAR_12 = VAR_12*((double)(VAR_6+VAR_6)/VAR_5) - VAR_11;
      VAR_11 = VAR_15;
         }
     }
 } else {
     if(VAR_8<0x3e100000) {



  if(VAR_4>33)
      VAR_12 = VAR_3;
  else {
      VAR_15 = VAR_5*0.5; VAR_12 = VAR_15;
      for (VAR_11=VAR_1,VAR_6=2;VAR_6<=VAR_4;VAR_6++) {
   VAR_11 *= (double)VAR_6;
   VAR_12 *= VAR_15;
      }
      VAR_12 = VAR_12/VAR_11;
  }
     } else {
  double VAR_19,VAR_20;
  double VAR_21,VAR_22,VAR_23,VAR_24; int32_t VAR_25,VAR_26;
  VAR_18 = (VAR_4+VAR_4)/(double)VAR_5; VAR_23 = 2.0/(double)VAR_5;
  VAR_21 = VAR_18; VAR_17 = VAR_18+VAR_23; VAR_22 = VAR_18*VAR_17 - 1.0; VAR_25=1;
  while(VAR_22<1.0e9) {
   VAR_25 += 1; VAR_17 += VAR_23;
   VAR_24 = VAR_17*VAR_22 - VAR_21;
   VAR_21 = VAR_22;
   VAR_22 = VAR_24;
  }
  VAR_26 = VAR_4+VAR_4;
  for(VAR_19=VAR_3, VAR_6 = 2*(VAR_4+VAR_25); VAR_6>=VAR_26; VAR_6 -= 2) VAR_19 = VAR_1/(VAR_6/VAR_5-VAR_19);
  VAR_11 = VAR_19;
  VAR_12 = VAR_1;
  VAR_24 = VAR_4;
  VAR_20 = VAR_2/VAR_5;
  VAR_24 = VAR_24*FUNC_3(FUNC_4(VAR_20*VAR_24));
  if(VAR_24<7.09782712893383973096e+02) {
          for(VAR_6=VAR_4-1,VAR_16=(double)(VAR_6+VAR_6);VAR_6>0;VAR_6--){
          VAR_15 = VAR_12;
   VAR_12 *= VAR_16;
   VAR_12 = VAR_12/VAR_5 - VAR_11;
          VAR_11 = VAR_15;
   VAR_16 -= VAR_2;
           }
  } else {
          for(VAR_6=VAR_4-1,VAR_16=(double)(VAR_6+VAR_6);VAR_6>0;VAR_6--){
          VAR_15 = VAR_12;
   VAR_12 *= VAR_16;
   VAR_12 = VAR_12/VAR_5 - VAR_11;
          VAR_11 = VAR_15;
   VAR_16 -= VAR_2;

   if(VAR_12>1e100) {
       VAR_11 /= VAR_12;
       VAR_19 /= VAR_12;
       VAR_12 = VAR_1;
   }
           }
  }
  VAR_17 = FUNC_1(VAR_5);
  VAR_18 = FUNC_2(VAR_5);
  if (FUNC_4(VAR_17) >= FUNC_4(VAR_18))
      VAR_12 = (VAR_19*VAR_17/VAR_12);
  else
      VAR_12 = (VAR_19*VAR_18/VAR_11);
     }
 }
 if(VAR_10==1) return -VAR_12; else return VAR_12;
}
