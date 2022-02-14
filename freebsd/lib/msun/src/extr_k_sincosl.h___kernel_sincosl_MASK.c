
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 long double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 long double VAR_5 ;
 long double VAR_6 ;
 long double VAR_7 ;
 long double VAR_8 ;
 long double VAR_9 ;
 long double VAR_10 ;
 long double VAR_11 ;
 long double VAR_12 ;
 long double VAR_13 ;
 long double VAR_14 ;

__attribute__((used)) static inline void
FUNC_0(long double VAR_15, long double VAR_16, int VAR_17, long double *VAR_18,
    long double *VAR_19)
{
 long double VAR_20, VAR_21, VAR_22, VAR_23, VAR_24;

 VAR_24 = VAR_15 * VAR_15;
 VAR_22 = VAR_24 * VAR_15;




 VAR_21 = VAR_8 + VAR_24 * (VAR_9 + VAR_24 * (VAR_10 + VAR_24 * (VAR_11 + VAR_24 * (VAR_12 + VAR_24 * (VAR_13 + VAR_24 * VAR_14)))));

 if (VAR_17 == 0)
  *VAR_18 = VAR_15 + VAR_22 * (VAR_7 + VAR_24 * VAR_21);
 else
  *VAR_18 = VAR_15 - ((VAR_24 * (VAR_16 / 2 - VAR_22 * VAR_21) - VAR_16) - VAR_22 * VAR_7);

 VAR_20 = VAR_24 / 2;
 VAR_23 = 1 - VAR_20;
 VAR_21 = VAR_24 * (VAR_0 + VAR_24 * (VAR_1 + VAR_24 * (VAR_2 + VAR_24 * (VAR_3 + VAR_24 * (VAR_4 + VAR_24 * (VAR_5 +
     VAR_24 * VAR_6))))));
 *VAR_19 = VAR_23 + (((1 - VAR_23) - VAR_20) + (VAR_24 * VAR_21 - VAR_15 * VAR_16));
}
