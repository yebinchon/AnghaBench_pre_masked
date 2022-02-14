
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num; void const** data; } ;
typedef TYPE_1__ OPENSSL_STACK ;


 void* FUNC_0 (TYPE_1__*,int) ;

void *FUNC_1(OPENSSL_STACK *VAR_0, const void *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_0->num; VAR_2++)
        if (VAR_0->data[VAR_2] == VAR_1)
            return FUNC_0(VAR_0, VAR_2);
    return ((void*)0);
}
