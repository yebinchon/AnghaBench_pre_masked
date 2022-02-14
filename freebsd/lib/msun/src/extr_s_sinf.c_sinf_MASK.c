
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,float) ;
 int FUNC_1 (float,double*) ;
 float FUNC_2 (double) ;
 float FUNC_3 (double) ;
 double VAR_0 ;
 float VAR_1 ;
 double VAR_2 ;
 float VAR_3 ;

float
FUNC_4(float VAR_4)
{
 double VAR_5;
 int32_t VAR_6, VAR_7, VAR_8;

 FUNC_0(VAR_7,VAR_4);
 VAR_8 = VAR_7 & 0x7fffffff;

 if(VAR_8 <= 0x3f490fda) {
     if(VAR_8<0x39800000)
  if(((int)VAR_4)==0) return VAR_4;
     return FUNC_3(VAR_4);
 }
 if(VAR_8<=0x407b53d1) {
     if(VAR_8<=0x4016cbe3) {
  if(VAR_7>0)
      return FUNC_2(VAR_4 - VAR_0);
  else
      return -FUNC_2(VAR_4 + VAR_0);
     } else
  return FUNC_3((VAR_7 > 0 ? VAR_1 : -VAR_1) - VAR_4);
 }
 if(VAR_8<=0x40e231d5) {
     if(VAR_8<=0x40afeddf) {
  if(VAR_7>0)
      return -FUNC_2(VAR_4 - VAR_2);
  else
      return FUNC_2(VAR_4 + VAR_2);
     } else
  return FUNC_3(VAR_4 + (VAR_7 > 0 ? -VAR_3 : VAR_3));
 }


 else if (VAR_8>=0x7f800000) return VAR_4-VAR_4;


 else {
     VAR_6 = FUNC_1(VAR_4,&VAR_5);
     switch(VAR_6&3) {
  case 0: return FUNC_3(VAR_5);
  case 1: return FUNC_2(VAR_5);
  case 2: return FUNC_3(-VAR_5);
  default:
   return -FUNC_2(VAR_5);
     }
 }
}
