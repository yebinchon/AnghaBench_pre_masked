
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UNS8 ;
typedef int UNS16 ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ cp; } ;
typedef TYPE_1__ STRINGINFO ;


 scalar_t__ FUNC_0 (scalar_t__) ;

UNS16 FUNC_1(STRINGINFO VAR_0)
{

    UNS8 *VAR_1;
    UNS16 VAR_2 = (UNS16)VAR_0.count;
    UNS16 VAR_3 = 0;

    if (VAR_0.count == 0)
        return 0;


    for (VAR_1 = (UNS8 *)VAR_0.cp; VAR_0.count && *VAR_1; VAR_1++, VAR_0.count--)
    {
        VAR_2 = (UNS16)((VAR_2 << 4) + FUNC_0(*VAR_1));
        VAR_3 = (UNS16)(VAR_2 & 0xf000);
        if (VAR_3)
        {
            VAR_2 ^= (UNS16)(VAR_3 >> 8);
            VAR_2 ^= (UNS16)VAR_3;
        }
    }

    return (UNS16)VAR_2;
}
