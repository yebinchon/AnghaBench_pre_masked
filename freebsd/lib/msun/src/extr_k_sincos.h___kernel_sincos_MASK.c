
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
 double VAR_7 ;
 double VAR_8 ;
 double VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;

__attribute__((used)) static inline void
FUNC_0(double VAR_12, double VAR_13, int VAR_14, double *VAR_15, double *VAR_16)
{
 double VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;

 VAR_21 = VAR_12 * VAR_12;
 VAR_20 = VAR_21 * VAR_21;
 VAR_18 = VAR_7 + VAR_21 * (VAR_8 + VAR_21 * VAR_9) + VAR_21 * VAR_20 * (VAR_10 + VAR_21 * VAR_11);
 VAR_19 = VAR_21 * VAR_12;

 if (VAR_14 == 0)
  *VAR_15 = VAR_12 + VAR_19 * (VAR_6 + VAR_21 * VAR_18);
 else
  *VAR_15 = VAR_12 - ((VAR_21 * (VAR_13 / 2 - VAR_19 * VAR_18) - VAR_13) - VAR_19 * VAR_6);

 VAR_18 = VAR_21 * (VAR_0 + VAR_21 * (VAR_1 + VAR_21 * VAR_2)) + VAR_20 * VAR_20 * (VAR_3 + VAR_21 * (VAR_4 + VAR_21 * VAR_5));
 VAR_17 = VAR_21 / 2;
 VAR_20 = 1 - VAR_17;
 *VAR_16 = VAR_20 + (((1 - VAR_20) - VAR_17) + (VAR_21 * VAR_18 - VAR_12 * VAR_13));
}
