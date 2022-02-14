
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * respool; int * req_bkt; int * resp_bkt; } ;
typedef TYPE_1__ serf_request_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_1)
{
    serf_request_t *VAR_2 = VAR_1;







    if (VAR_2->resp_bkt) {
        FUNC_0(VAR_2->resp_bkt);
        VAR_2->resp_bkt = ((void*)0);
    }
    if (VAR_2->req_bkt) {
        FUNC_0(VAR_2->req_bkt);
        VAR_2->req_bkt = ((void*)0);
    }







    VAR_2->respool = ((void*)0);

    return VAR_0;
}
