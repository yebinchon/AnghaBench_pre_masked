
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int u_int32_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int,int ) ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 int FUNC_3 (double,int) ;

double
FUNC_4(double VAR_7)
{
 int32_t VAR_8;
 union {
     double value;
     uint64_t bits;
 } VAR_9;
 double VAR_10,VAR_11,VAR_12=0.0,VAR_13;
 u_int32_t VAR_14;
 u_int32_t VAR_15,VAR_16;

 FUNC_0(VAR_8,VAR_16,VAR_7);
 VAR_14=VAR_8&0x80000000;
 VAR_8 ^=VAR_14;
 if(VAR_8>=0x7ff00000) return(VAR_7+VAR_7);
 if(VAR_8<0x00100000) {
     if((VAR_8|VAR_16)==0)
  return(VAR_7);
     FUNC_3(VAR_12,0x43500000);
     VAR_12*=VAR_7;
     FUNC_1(VAR_15,VAR_12);
     FUNC_2(VAR_12,VAR_14|((VAR_15&0x7fffffff)/3+VAR_1),0);
 } else
     FUNC_2(VAR_12,VAR_14|(VAR_8/3+VAR_0),0);
 VAR_10=(VAR_12*VAR_12)*(VAR_12/VAR_7);
 VAR_12=VAR_12*((VAR_2+VAR_10*(VAR_3+VAR_10*VAR_4))+((VAR_10*VAR_10)*VAR_10)*(VAR_5+VAR_10*VAR_6));
 VAR_9.value=VAR_12;
 VAR_9.bits=(VAR_9.bits+0x80000000)&0xffffffffc0000000ULL;
 VAR_12=VAR_9.value;


 VAR_11=VAR_12*VAR_12;
 VAR_10=VAR_7/VAR_11;
 VAR_13=VAR_12+VAR_12;
 VAR_10=(VAR_10-VAR_12)/(VAR_13+VAR_10);
 VAR_12=VAR_12+VAR_12*VAR_10;

 return(VAR_12);
}
