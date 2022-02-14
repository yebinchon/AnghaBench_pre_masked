
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef scalar_t__ int64_t ;
typedef int int32_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static long double
FUNC_3(int64_t *VAR_0)
{
 int64_t VAR_1 = *VAR_0++;
 int32_t VAR_2 = FUNC_0(VAR_1);
 uint16_t VAR_3 = FUNC_2(VAR_1);
 uint16_t VAR_4 = FUNC_1(VAR_1), VAR_5;
 long double VAR_6 = (long double)VAR_0[0] * (long double)(VAR_2 - 1);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_2 += VAR_3, VAR_5++)
  VAR_6 += (long double)VAR_0[VAR_5 + 1] * (long double)VAR_2;

 return (VAR_6 + (long double)VAR_0[VAR_4 + 1] *
     (long double)(VAR_2 + 1));
}
