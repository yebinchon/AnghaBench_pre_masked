
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,float) ;
 int FUNC_1 (float,int) ;

float
FUNC_2(float VAR_2)
{
 double VAR_3,VAR_4;
 float VAR_5;
 int32_t VAR_6;
 u_int32_t VAR_7;
 u_int32_t VAR_8;

 FUNC_0(VAR_6,VAR_2);
 VAR_7=VAR_6&0x80000000;
 VAR_6 ^=VAR_7;
 if(VAR_6>=0x7f800000) return(VAR_2+VAR_2);


 if(VAR_6<0x00800000) {
     if(VAR_6==0)
  return(VAR_2);
     FUNC_1(VAR_5,0x4b800000);
     VAR_5*=VAR_2;
     FUNC_0(VAR_8,VAR_5);
     FUNC_1(VAR_5,VAR_7|((VAR_8&0x7fffffff)/3+VAR_1));
 } else
     FUNC_1(VAR_5,VAR_7|(VAR_6/3+VAR_0));






 VAR_4=VAR_5;
 VAR_3=VAR_4*VAR_4*VAR_4;
 VAR_4=VAR_4*((double)VAR_2+VAR_2+VAR_3)/(VAR_2+VAR_3+VAR_3);





 VAR_3=VAR_4*VAR_4*VAR_4;
 VAR_4=VAR_4*((double)VAR_2+VAR_2+VAR_3)/(VAR_2+VAR_3+VAR_3);


 return(VAR_4);
}
