
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req_bkt; scalar_t__ writing_started; } ;
typedef TYPE_1__ serf_request_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 int VAR_1 ;

apr_status_t FUNC_0(serf_request_t *VAR_2)
{
    if (VAR_2->writing_started && !VAR_2->req_bkt)
        return VAR_1;

    return VAR_0;
}
