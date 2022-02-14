
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int serf_response_handler_t ;
typedef int serf_response_acceptor_t ;
struct TYPE_3__ {int async_responses; void* async_handler_baton; int async_handler; void* async_acceptor_baton; int async_acceptor; } ;
typedef TYPE_1__ serf_connection_t ;



void FUNC_0(
    serf_connection_t *VAR_0,
    serf_response_acceptor_t VAR_1,
    void *VAR_2,
    serf_response_handler_t VAR_3,
    void *VAR_4)
{
    VAR_0->async_responses = 1;
    VAR_0->async_acceptor = VAR_1;
    VAR_0->async_acceptor_baton = VAR_2;
    VAR_0->async_handler = VAR_3;
    VAR_0->async_handler_baton = VAR_4;
}
