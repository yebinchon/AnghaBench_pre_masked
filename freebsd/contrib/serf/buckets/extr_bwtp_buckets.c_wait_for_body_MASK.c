
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int serf_bucket_t ;
struct TYPE_4__ {scalar_t__ state; } ;
typedef TYPE_1__ incoming_context_t ;
typedef scalar_t__ apr_status_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static apr_status_t FUNC_1(serf_bucket_t *VAR_2, incoming_context_t *VAR_3)
{
    apr_status_t VAR_4;


    while (VAR_3->state != VAR_1) {
        VAR_4 = FUNC_0(VAR_2, VAR_3);




        if (VAR_4)
            return VAR_4;
    }


    return VAR_0;
}
