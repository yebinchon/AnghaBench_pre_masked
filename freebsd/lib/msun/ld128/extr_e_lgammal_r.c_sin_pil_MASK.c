
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint16_t ;


 int FUNC_0 (int ,int,int,long double volatile) ;
 long double FUNC_1 (long double,long double) ;
 long double FUNC_2 (long double,long double,int ) ;
 int VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;

__attribute__((used)) static long double
FUNC_3(long double VAR_3)
{
 volatile long double VAR_4;
 long double VAR_5,VAR_6;
 uint64_t VAR_7, VAR_8;
 uint16_t VAR_9;

 VAR_5 = -VAR_3;

 VAR_4 = VAR_5+0x1.p112;
 VAR_6 = VAR_4-0x1.p112;
 if (VAR_6 == VAR_5)
     return VAR_2;

 VAR_4 = VAR_5+0x1.p110;
 FUNC_0(VAR_9,VAR_7,VAR_8,VAR_4);
 VAR_6 = VAR_4-0x1.p110;
 if (VAR_6 > VAR_5) {
     VAR_6 -= 0.25;
     VAR_8--;
 }
 VAR_8 &= 7;
 VAR_5 = VAR_5 - VAR_6 + VAR_8 * 0.25;

 switch (VAR_8) {
     case 0: VAR_5 = FUNC_2(VAR_1*VAR_5,VAR_2,0); break;
     case 1:
     case 2: VAR_5 = FUNC_1(VAR_1*(0.5-VAR_5),VAR_2); break;
     case 3:
     case 4: VAR_5 = FUNC_2(VAR_1*(VAR_0-VAR_5),VAR_2,0); break;
     case 5:
     case 6: VAR_5 = -FUNC_1(VAR_1*(VAR_5-1.5),VAR_2); break;
     default: VAR_5 = FUNC_2(VAR_1*(VAR_5-2.0),VAR_2,0); break;
     }
 return -VAR_5;
}
