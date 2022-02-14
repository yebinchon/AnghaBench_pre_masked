
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wind_profile_flags ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (int const) ;
 unsigned int FUNC_1 (int const) ;

int
FUNC_2(const uint32_t *VAR_2, size_t VAR_3, wind_profile_flags VAR_4)
{
    size_t VAR_5;
    unsigned VAR_6 = 0;
    unsigned VAR_7 = 0;

    if ((VAR_4 & (VAR_0|VAR_1)) == 0)
 return 0;

    for (VAR_5 = 0; VAR_5 < VAR_3; ++VAR_5) {
 VAR_6 |= FUNC_1(VAR_2[VAR_5]);
 VAR_7 |= FUNC_0(VAR_2[VAR_5]);
    }
    if (VAR_6) {
 if (VAR_7)
     return 1;
 if (!FUNC_1(VAR_2[0]) || !FUNC_1(VAR_2[VAR_3 - 1]))
     return 1;
    }
    return 0;
}
