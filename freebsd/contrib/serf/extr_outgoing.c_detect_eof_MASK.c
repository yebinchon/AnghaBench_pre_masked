
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hit_eof; } ;
typedef TYPE_1__ serf_connection_t ;
typedef int serf_bucket_t ;
typedef int apr_status_t ;


 int VAR_0 ;

__attribute__((used)) static apr_status_t FUNC_0(void *VAR_1, serf_bucket_t *VAR_2)
{
    serf_connection_t *VAR_3 = VAR_1;
    VAR_3->hit_eof = 1;
    return VAR_0;
}
