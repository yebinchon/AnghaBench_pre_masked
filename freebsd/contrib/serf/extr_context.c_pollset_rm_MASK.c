
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pollset; } ;
typedef TYPE_1__ serf_pollset_t ;
typedef int apr_status_t ;
struct TYPE_6__ {void* client_data; } ;
typedef TYPE_2__ apr_pollfd_t ;


 int FUNC_0 (int ,TYPE_2__*) ;

__attribute__((used)) static apr_status_t FUNC_1(void *VAR_0,
                               apr_pollfd_t *VAR_1,
                               void *VAR_2)
{
    serf_pollset_t *VAR_3 = (serf_pollset_t*)VAR_0;
    VAR_1->client_data = VAR_2;
    return FUNC_0(VAR_3->pollset, VAR_1);
}
