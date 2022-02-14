
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ version; } ;
typedef TYPE_1__ serf_status_line ;
struct TYPE_9__ {TYPE_3__* data; } ;
typedef TYPE_2__ serf_bucket_t ;
struct TYPE_10__ {scalar_t__ state; TYPE_1__ sl; } ;
typedef TYPE_3__ response_context_t ;
typedef int apr_status_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;

apr_status_t FUNC_1(
    serf_bucket_t *VAR_3,
    serf_status_line *VAR_4)
{
    response_context_t *VAR_5 = VAR_3->data;
    apr_status_t VAR_6;

    if (VAR_5->state != VAR_2) {

        *VAR_4 = VAR_5->sl;
        return VAR_0;
    }







    VAR_6 = FUNC_0(VAR_3, VAR_5);
    if (VAR_5->state == VAR_1) {
        *VAR_4 = VAR_5->sl;
    }
    else {

        VAR_4->version = 0;
    }

    return VAR_6;
}
