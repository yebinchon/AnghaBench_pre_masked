
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_response_handler_t ;
struct TYPE_3__ {void const** handler_baton; int handler; } ;
typedef TYPE_1__ serf_request_t ;



void FUNC_0(
    serf_request_t *VAR_0,
    const serf_response_handler_t VAR_1,
    const void **VAR_2)
{
    VAR_0->handler = VAR_1;
    VAR_0->handler_baton = VAR_2;
}
