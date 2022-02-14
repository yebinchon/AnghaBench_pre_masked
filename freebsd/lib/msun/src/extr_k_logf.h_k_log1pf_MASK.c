
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;
 float VAR_1 ;
 float VAR_2 ;
 float VAR_3 ;

__attribute__((used)) static inline float
FUNC_0(float VAR_4)
{
 float VAR_5,VAR_6,VAR_7,VAR_8,VAR_9,VAR_10,VAR_11;

  VAR_6 = VAR_4/((float)2.0+VAR_4);
 VAR_7 = VAR_6*VAR_6;
 VAR_9 = VAR_7*VAR_7;
 VAR_10= VAR_9*(VAR_1+VAR_9*VAR_3);
 VAR_11= VAR_7*(VAR_0+VAR_9*VAR_2);
 VAR_8 = VAR_11+VAR_10;
 VAR_5=(float)0.5*VAR_4*VAR_4;
 return VAR_6*(VAR_5+VAR_8);
}
