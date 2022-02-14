
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * lc_cap; } ;
typedef TYPE_1__ login_cap_t ;


 int * FUNC_0 (int *,char const*,char) ;

int
FUNC_1(login_cap_t *VAR_0, const char *VAR_1, int VAR_2)
{
    if (VAR_0 == ((void*)0) || VAR_0->lc_cap == ((void*)0))
 return VAR_2;
    return (FUNC_0(VAR_0->lc_cap, VAR_1, ':') != ((void*)0));
}
