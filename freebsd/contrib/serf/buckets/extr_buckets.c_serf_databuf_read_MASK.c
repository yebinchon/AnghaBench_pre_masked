
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ remaining; char* current; scalar_t__ status; } ;
typedef TYPE_1__ serf_databuf_t ;
typedef scalar_t__ apr_status_t ;
typedef scalar_t__ apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*,scalar_t__*) ;

apr_status_t FUNC_1(
    serf_databuf_t *VAR_2,
    apr_size_t VAR_3,
    const char **VAR_4,
    apr_size_t *VAR_5)
{
    apr_status_t VAR_6 = FUNC_0(VAR_2, VAR_5);
    if (VAR_6)
        return VAR_6;


    if (VAR_3 == VAR_1 || VAR_3 > VAR_2->remaining)
        VAR_3 = VAR_2->remaining;


    *VAR_4 = VAR_2->current;
    *VAR_5 = VAR_3;


    VAR_2->current += VAR_3;
    VAR_2->remaining -= VAR_3;






    return VAR_2->remaining ? VAR_0 : VAR_2->status;
}
