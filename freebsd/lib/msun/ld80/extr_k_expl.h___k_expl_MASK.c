
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long double lo; long double hi; } ;


 long double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 unsigned int VAR_5 ;
 long double VAR_6 ;
 long double VAR_7 ;
 long double VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (long double) ;
 long double FUNC_1 (long double) ;
 TYPE_1__* VAR_10 ;

__attribute__((used)) static inline void
FUNC_2(long double VAR_11, long double *VAR_12, long double *VAR_13, int *VAR_14)
{
 long double VAR_15, VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;


 VAR_15 = FUNC_1(VAR_11 * VAR_6);
 VAR_17 = VAR_11 - VAR_15 * VAR_7 - VAR_15 * VAR_8;
 VAR_22 = FUNC_0(VAR_15);
 VAR_23 = (unsigned)VAR_22 % VAR_5;

 *VAR_14 = VAR_22 >> VAR_9;
 VAR_18 = VAR_11 - VAR_15 * VAR_7;
 VAR_19 = VAR_15 * -VAR_8;


 VAR_21 = VAR_17 * VAR_17;



 VAR_16 = VAR_19 + VAR_21 * VAR_0 + VAR_21 * VAR_17 * (VAR_1 + VAR_17 * VAR_2 + VAR_21 * (VAR_3 + VAR_17 * VAR_4));

 VAR_20 = (long double)VAR_10[VAR_23].lo + VAR_10[VAR_23].hi;
 *VAR_12 = VAR_10[VAR_23].hi;
 *VAR_13 = VAR_10[VAR_23].lo + VAR_20 * (VAR_16 + VAR_18);
}
