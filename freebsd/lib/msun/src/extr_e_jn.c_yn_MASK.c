
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 double FUNC_2 (double) ;
 int FUNC_3 (double) ;
 double VAR_0 ;
 double VAR_1 ;
 int FUNC_4 (double,double*,double*) ;
 double FUNC_5 (double) ;
 double VAR_2 ;
 double VAR_3 ;

double
FUNC_6(int VAR_4, double VAR_5)
{
 int32_t VAR_6,VAR_7,VAR_8,VAR_9;
 int32_t VAR_10;
 double VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;

 FUNC_0(VAR_7,VAR_9,VAR_5);
 VAR_8 = 0x7fffffff&VAR_7;

 if((VAR_8|((u_int32_t)(VAR_9|-VAR_9))>>31)>0x7ff00000) return VAR_5+VAR_5;

 if((VAR_8|VAR_9)==0) return -VAR_1/VAR_2;

 if(VAR_7<0) return VAR_2/VAR_2;
 VAR_10 = 1;
 if(VAR_4<0){
  VAR_4 = -VAR_4;
  VAR_10 = 1 - ((VAR_4&1)<<1);
 }
 if(VAR_4==0) return(FUNC_2(VAR_5));
 if(VAR_4==1) return(VAR_10*FUNC_3(VAR_5));
 if(VAR_8==0x7ff00000) return VAR_3;
 if(VAR_8>=0x52D00000) {
  FUNC_4(VAR_5, &VAR_14, &VAR_13);
  switch(VAR_4&3) {
      case 0: VAR_15 = VAR_14-VAR_13; break;
      case 1: VAR_15 = -VAR_14-VAR_13; break;
      case 2: VAR_15 = -VAR_14+VAR_13; break;
      case 3: VAR_15 = VAR_14+VAR_13; break;
  }
  VAR_12 = VAR_0*VAR_15/FUNC_5(VAR_5);
 } else {
     u_int32_t VAR_16;
     VAR_11 = FUNC_2(VAR_5);
     VAR_12 = FUNC_3(VAR_5);

     FUNC_1(VAR_16,VAR_12);
     for(VAR_6=1;VAR_6<VAR_4&&VAR_16!=0xfff00000;VAR_6++){
  VAR_15 = VAR_12;
  VAR_12 = ((double)(VAR_6+VAR_6)/VAR_5)*VAR_12 - VAR_11;
  FUNC_1(VAR_16,VAR_12);
  VAR_11 = VAR_15;
     }
 }
 if(VAR_10>0) return VAR_12; else return -VAR_12;
}
