
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; } ;
typedef TYPE_1__ TCase ;


 scalar_t__ FUNC_0 (int,int) ;

TCase *
FUNC_1(const char *VAR_0)
{
    TCase *VAR_1 = (TCase *) FUNC_0(1, sizeof(TCase));
    if (VAR_1 != ((void*)0)) {
        VAR_1->name = VAR_0;
    }
    return VAR_1;
}
