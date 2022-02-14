
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ dirty_pollset; TYPE_1__* conns; } ;
typedef TYPE_2__ serf_context_t ;
struct TYPE_10__ {scalar_t__ dirty_conn; } ;
typedef TYPE_3__ serf_connection_t ;
typedef int apr_status_t ;
struct TYPE_8__ {int nelts; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (TYPE_2__*,int) ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static apr_status_t FUNC_2(serf_context_t *VAR_1)
{
    int VAR_2;


    if (!VAR_1->dirty_pollset) {
        return VAR_0;
    }

    for (VAR_2 = VAR_1->conns->nelts; VAR_2--; ) {
        serf_connection_t *VAR_3 = FUNC_0(VAR_1, VAR_2);
        apr_status_t VAR_4;


        if (!VAR_3->dirty_conn) {
            continue;
        }


        VAR_3->dirty_conn = 0;

        if ((VAR_4 = FUNC_1(VAR_3)) != VAR_0)
            return VAR_4;
    }


    VAR_1->dirty_pollset = 0;

    return VAR_0;
}
