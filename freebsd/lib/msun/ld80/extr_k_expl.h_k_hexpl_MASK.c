
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float,int) ;
 int FUNC_1 (long double,long double*,long double*,int*) ;

__attribute__((used)) static inline void
FUNC_2(long double VAR_0, long double *VAR_1, long double *VAR_2)
{
 float VAR_3;
 int VAR_4;

 FUNC_1(VAR_0, VAR_1, VAR_2, &VAR_4);
 FUNC_0(VAR_3, 0x3f800000 + ((VAR_4 - 1) << 23));
 *VAR_1 *= VAR_3;
 *VAR_2 *= VAR_3;
}
