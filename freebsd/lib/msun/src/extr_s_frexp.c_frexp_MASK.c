
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;


 int FUNC_0 (int,int,double) ;
 int FUNC_1 (int,double) ;
 int FUNC_2 (double,int) ;
 double VAR_0 ;

double
FUNC_3(double VAR_1, int *VAR_2)
{
 int32_t VAR_3, VAR_4, VAR_5;
 FUNC_0(VAR_3,VAR_5,VAR_1);
 VAR_4 = 0x7fffffff&VAR_3;
 *VAR_2 = 0;
 if(VAR_4>=0x7ff00000||((VAR_4|VAR_5)==0)) return VAR_1;
 if (VAR_4<0x00100000) {
     VAR_1 *= VAR_0;
     FUNC_1(VAR_3,VAR_1);
     VAR_4 = VAR_3&0x7fffffff;
     *VAR_2 = -54;
 }
 *VAR_2 += (VAR_4>>20)-1022;
 VAR_3 = (VAR_3&0x800fffff)|0x3fe00000;
 FUNC_2(VAR_1,VAR_3);
 return VAR_1;
}
