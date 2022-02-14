
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef scalar_t__ e_FmPcdPlcrRateMode ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static void FUNC_0(e_FmPcdPlcrRateMode VAR_1,
                           uint32_t VAR_2,
                           uint64_t VAR_3,
                           uint32_t VAR_4,
                           uint64_t *VAR_5,
                           uint64_t *VAR_6)
{
    uint64_t VAR_7, VAR_8;

    if (VAR_1 == VAR_0)
    {


        VAR_7 = (uint64_t)VAR_2;
        VAR_7 *= 1000;
        VAR_7 *= VAR_3;

        VAR_8 = 1000000000;
        VAR_8 *= 10;
        VAR_8 *= 8;
    }
    else
    {


        VAR_7 = (uint64_t)VAR_2;
        VAR_7 *= VAR_3;

        VAR_8 = 1000000000;
        VAR_8 *= 10;
    }
    *VAR_5 = (VAR_7<<VAR_4) / VAR_8;





    *VAR_6 = (((VAR_7<<VAR_4)<<16) - ((*VAR_5<<16)*VAR_8)) / VAR_8;
}
