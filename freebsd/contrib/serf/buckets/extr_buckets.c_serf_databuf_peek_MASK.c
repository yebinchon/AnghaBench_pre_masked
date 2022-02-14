
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* current; int status; int remaining; } ;
typedef TYPE_1__ serf_databuf_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *) ;

apr_status_t FUNC_2(
    serf_databuf_t *VAR_2,
    const char **VAR_3,
    apr_size_t *VAR_4)
{
    apr_status_t VAR_5 = FUNC_1(VAR_2, VAR_4);
    if (VAR_5)
        return VAR_5;


    *VAR_3 = VAR_2->current;
    *VAR_4 = VAR_2->remaining;





    if (FUNC_0(VAR_2->status))
        return VAR_0;
    return VAR_1;
}
