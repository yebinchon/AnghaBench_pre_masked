
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {long double lo; long double hi; } ;


 double VAR_0 ;
 long double VAR_1 ;
 long double VAR_2 ;
 long double VAR_3 ;
 long double VAR_4 ;
 double VAR_5 ;
 double VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 unsigned int VAR_9 ;
 double VAR_10 ;
 double VAR_11 ;
 double VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (double) ;
 double FUNC_1 (double) ;
 TYPE_1__* VAR_14 ;

__attribute__((used)) static inline void
FUNC_2(long double VAR_15, long double *VAR_16, long double *VAR_17, int *VAR_18)
{
 long double VAR_19, VAR_20, VAR_21, VAR_22;
 double VAR_23, VAR_24, VAR_25;
 int VAR_26, VAR_27;


 VAR_24 = FUNC_1((double)VAR_15 * VAR_10);
 VAR_26 = FUNC_0(VAR_24);
 VAR_27 = (unsigned)VAR_26 % VAR_9;

 *VAR_18 = VAR_26 >> VAR_13;
 VAR_21 = VAR_15 - VAR_24 * VAR_11;
 VAR_25 = VAR_24 * -VAR_12;
 VAR_20 = VAR_21 + VAR_25;


 VAR_23 = VAR_20;
 VAR_19 = VAR_25 + VAR_20 * VAR_20 * (VAR_1 + VAR_20 * (VAR_2 + VAR_20 * (VAR_3 + VAR_20 * (VAR_4 + VAR_20 * (VAR_5 +
     VAR_23 * (VAR_6 + VAR_23 * (VAR_7 + VAR_23 * (VAR_8 + VAR_23 * VAR_0))))))));
 VAR_22 = VAR_14[VAR_27].lo + VAR_14[VAR_27].hi;
 *VAR_16 = VAR_14[VAR_27].hi;
 *VAR_17 = VAR_14[VAR_27].lo + VAR_22 * (VAR_19 + VAR_21);
}
