
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (long double,long double) ;

__attribute__((used)) static inline long double
FUNC_1(long double VAR_0, long double VAR_1, long double VAR_2, long double VAR_3,
    long double VAR_4, long double VAR_5)
{
 long double VAR_6, VAR_7;
 float VAR_8, VAR_9;

 FUNC_0(VAR_0, VAR_2);
 VAR_1 = VAR_1 + VAR_2;
 FUNC_0(VAR_3, VAR_5);
 VAR_4 = VAR_4 + VAR_5;

 VAR_6 = 1 / (VAR_3 + VAR_4);

 VAR_7 = (VAR_0 + VAR_1) * VAR_6;
 VAR_8 = VAR_7;
 VAR_7 = VAR_8;

 VAR_9 = VAR_3 + VAR_4;
 VAR_4 = VAR_3 - VAR_9 + VAR_4;
 VAR_3 = VAR_9;

 VAR_7 = VAR_7 + (VAR_0 - VAR_3 * VAR_7 + VAR_1 - VAR_4 * VAR_7) * VAR_6;

 return VAR_7;
}
