
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;

__attribute__((used)) static inline double
FUNC_0(double VAR_7)
{
 double VAR_8,VAR_9,VAR_10,VAR_11,VAR_12,VAR_13,VAR_14;

  VAR_9 = VAR_7/(2.0+VAR_7);
 VAR_10 = VAR_9*VAR_9;
 VAR_12 = VAR_10*VAR_10;
 VAR_13= VAR_12*(VAR_1+VAR_12*(VAR_3+VAR_12*VAR_5));
 VAR_14= VAR_10*(VAR_0+VAR_12*(VAR_2+VAR_12*(VAR_4+VAR_12*VAR_6)));
 VAR_11 = VAR_14+VAR_13;
 VAR_8=0.5*VAR_7*VAR_7;
 return VAR_9*(VAR_8+VAR_11);
}
