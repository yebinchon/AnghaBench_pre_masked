
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int priority; int ssltunnel; int * auth_baton; int * next; scalar_t__ writing_started; int * resp_bkt; int * req_bkt; int * respool; int * handler; void* setup_baton; int setup; TYPE_2__* conn; } ;
typedef TYPE_1__ serf_request_t ;
typedef int serf_request_setup_t ;
struct TYPE_7__ {int allocator; } ;
typedef TYPE_2__ serf_connection_t ;


 TYPE_1__* FUNC_0 (int ,int) ;

__attribute__((used)) static serf_request_t *
FUNC_1(serf_connection_t *VAR_0,
               serf_request_setup_t VAR_1,
               void *VAR_2,
               int VAR_3,
               int VAR_4)
{
    serf_request_t *VAR_5;

    VAR_5 = FUNC_0(VAR_0->allocator, sizeof(*VAR_5));
    VAR_5->conn = VAR_0;
    VAR_5->setup = VAR_1;
    VAR_5->setup_baton = VAR_2;
    VAR_5->handler = ((void*)0);
    VAR_5->respool = ((void*)0);
    VAR_5->req_bkt = ((void*)0);
    VAR_5->resp_bkt = ((void*)0);
    VAR_5->priority = VAR_3;
    VAR_5->writing_started = 0;
    VAR_5->ssltunnel = VAR_4;
    VAR_5->next = ((void*)0);
    VAR_5->auth_baton = ((void*)0);

    return VAR_5;
}
