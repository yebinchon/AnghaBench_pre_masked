
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ serf_request_t ;



__attribute__((used)) static void FUNC_0(serf_request_t **VAR_0, serf_request_t **VAR_1,
                          serf_request_t *VAR_2)
{
    if (*VAR_0 == ((void*)0)) {
        *VAR_0 = VAR_2;
        *VAR_1 = VAR_2;
    }
    else {
        (*VAR_1)->next = VAR_2;
        *VAR_1 = VAR_2;
    }
}
