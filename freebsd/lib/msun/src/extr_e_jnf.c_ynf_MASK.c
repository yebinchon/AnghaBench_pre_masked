
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 float FUNC_1 (float) ;
 int FUNC_2 (float) ;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;

float
FUNC_3(int VAR_3, float VAR_4)
{
 int32_t VAR_5,VAR_6,VAR_7,VAR_8;
 int32_t VAR_9;
 float VAR_10, VAR_11, VAR_12;

 FUNC_0(VAR_6,VAR_4);
 VAR_7 = 0x7fffffff&VAR_6;
 if(VAR_7>0x7f800000) return VAR_4+VAR_4;
 if(VAR_7==0) return -VAR_0/VAR_1;
 if(VAR_6<0) return VAR_1/VAR_1;
 VAR_9 = 1;
 if(VAR_3<0){
  VAR_3 = -VAR_3;
  VAR_9 = 1 - ((VAR_3&1)<<1);
 }
 if(VAR_3==0) return(FUNC_1(VAR_4));
 if(VAR_3==1) return(VAR_9*FUNC_2(VAR_4));
 if(VAR_7==0x7f800000) return VAR_2;

 VAR_10 = FUNC_1(VAR_4);
 VAR_11 = FUNC_2(VAR_4);

 FUNC_0(VAR_8,VAR_11);
 for(VAR_5=1;VAR_5<VAR_3&&VAR_8!=0xff800000;VAR_5++){
     VAR_12 = VAR_11;
     VAR_11 = ((float)(VAR_5+VAR_5)/VAR_4)*VAR_11 - VAR_10;
     FUNC_0(VAR_8,VAR_11);
     VAR_10 = VAR_12;
 }
 if(VAR_9>0) return VAR_11; else return -VAR_11;
}
