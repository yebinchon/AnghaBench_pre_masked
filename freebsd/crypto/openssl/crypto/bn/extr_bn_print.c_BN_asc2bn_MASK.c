
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ top; int neg; } ;
typedef TYPE_1__ BIGNUM ;


 int FUNC_0 (TYPE_1__**,char const*) ;
 int FUNC_1 (TYPE_1__**,char const*) ;

int FUNC_2(BIGNUM **VAR_0, const char *VAR_1)
{
    const char *VAR_2 = VAR_1;

    if (*VAR_2 == '-')
        VAR_2++;

    if (VAR_2[0] == '0' && (VAR_2[1] == 'X' || VAR_2[1] == 'x')) {
        if (!FUNC_1(VAR_0, VAR_2 + 2))
            return 0;
    } else {
        if (!FUNC_0(VAR_0, VAR_2))
            return 0;
    }

    if (*VAR_1 == '-' && (*VAR_0)->top != 0)
        (*VAR_0)->neg = 1;
    return 1;
}
