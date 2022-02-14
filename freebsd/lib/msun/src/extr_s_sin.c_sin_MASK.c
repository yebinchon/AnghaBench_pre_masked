
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,double) ;
 int FUNC_1 (double,double*) ;
 double FUNC_2 (double,double) ;
 double FUNC_3 (double,double,int) ;

double
FUNC_4(double VAR_0)
{
 double VAR_1[2],VAR_2=0.0;
 int32_t VAR_3, VAR_4;


 FUNC_0(VAR_4,VAR_0);


 VAR_4 &= 0x7fffffff;
 if(VAR_4 <= 0x3fe921fb) {
     if(VAR_4<0x3e500000)
        {if((int)VAR_0==0) return VAR_0;}
     return FUNC_3(VAR_0,VAR_2,0);
 }


 else if (VAR_4>=0x7ff00000) return VAR_0-VAR_0;


 else {
     VAR_3 = FUNC_1(VAR_0,VAR_1);
     switch(VAR_3&3) {
  case 0: return FUNC_3(VAR_1[0],VAR_1[1],1);
  case 1: return FUNC_2(VAR_1[0],VAR_1[1]);
  case 2: return -FUNC_3(VAR_1[0],VAR_1[1],1);
  default:
   return -FUNC_2(VAR_1[0],VAR_1[1]);
     }
 }
}
