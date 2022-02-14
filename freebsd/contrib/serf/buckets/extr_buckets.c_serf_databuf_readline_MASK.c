
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* current; scalar_t__ status; scalar_t__ remaining; } ;
typedef TYPE_1__ serf_databuf_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_size_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*,int*) ;
 int FUNC_1 (char**,scalar_t__*,int,int*) ;

apr_status_t FUNC_2(
    serf_databuf_t *VAR_1,
    int VAR_2,
    int *VAR_3,
    const char **VAR_4,
    apr_size_t *VAR_5)
{
    apr_status_t VAR_6 = FUNC_0(VAR_1, VAR_5);
    if (VAR_6)
        return VAR_6;


    *VAR_4 = VAR_1->current;


    FUNC_1(&VAR_1->current, &VAR_1->remaining, VAR_2,
                       VAR_3);


    *VAR_5 = VAR_1->current - *VAR_4;


    return VAR_1->remaining ? VAR_0 : VAR_1->status;
}
