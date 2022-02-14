
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* argString; } ;
struct TYPE_5__ {TYPE_1__ optArg; int optCookie; } ;
typedef TYPE_2__ tOptDesc ;


 char const VAR_0 ;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static uintptr_t
FUNC_1(tOptDesc * VAR_1, char const ** VAR_2, bool * VAR_3)
{
    uintptr_t VAR_4 = (uintptr_t)VAR_1->optCookie;
    char const * VAR_5 = FUNC_0(VAR_1->optArg.argString);
    if ((VAR_5 == ((void*)0)) || (*VAR_5 == VAR_0))
        goto member_start_fail;

    *VAR_3 = 0;

    switch (*VAR_5) {
    case '=':
        VAR_4 = 0UL;
        VAR_5 = FUNC_0(VAR_5 + 1);
        switch (*VAR_5) {
        case '=': case ',':
            goto member_start_fail;
        case '^':
            goto inversion;
        default:
            break;
        }
        break;

    case '^':
    inversion:
        *VAR_3 = 1;
        VAR_5 = FUNC_0(VAR_5 + 1);
        if (*VAR_5 != ',')
            break;


    case ',':
        goto member_start_fail;

    default:
        break;
    }

    *VAR_2 = VAR_5;
    return VAR_4;

member_start_fail:
    *VAR_2 = ((void*)0);
    return 0UL;
}
