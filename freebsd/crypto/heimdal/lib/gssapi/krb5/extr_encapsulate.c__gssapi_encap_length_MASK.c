
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {int length; } ;


 size_t FUNC_0 (size_t) ;

void
FUNC_1 (size_t VAR_0,
        size_t *VAR_1,
        size_t *VAR_2,
        const gss_OID VAR_3)
{
    size_t VAR_4;

    *VAR_1 = 1 + 1 + VAR_3->length + VAR_0;

    VAR_4 = FUNC_0(*VAR_1);

    *VAR_2 = 1 + VAR_4 + *VAR_1;
}
