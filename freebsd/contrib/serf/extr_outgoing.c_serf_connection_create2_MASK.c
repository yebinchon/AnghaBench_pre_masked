
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int proxy_address; } ;
typedef TYPE_1__ serf_context_t ;
struct TYPE_11__ {int scheme; void* port; } ;
struct TYPE_13__ {TYPE_10__ host_info; int host_url; int pool; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int serf_connection_setup_t ;
typedef int serf_connection_closed_t ;
struct TYPE_14__ {void* port; int hostname; int scheme; } ;
typedef TYPE_3__ apr_uri_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_sockaddr_t ;
typedef int apr_pool_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int **,int ,int ,void*,int ,int *) ;
 int FUNC_1 (int ,int ,TYPE_10__*) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_3__*,int) ;
 TYPE_2__* FUNC_4 (TYPE_1__*,int *,int ,void*,int ,void*,int *) ;

apr_status_t FUNC_5(
    serf_connection_t **VAR_4,
    serf_context_t *VAR_5,
    apr_uri_t VAR_6,
    serf_connection_setup_t VAR_7,
    void *VAR_8,
    serf_connection_closed_t VAR_9,
    void *VAR_10,
    apr_pool_t *VAR_11)
{
    apr_status_t VAR_12 = VAR_0;
    serf_connection_t *VAR_13;
    apr_sockaddr_t *VAR_14 = ((void*)0);


    if (!VAR_6.port) {
        VAR_6.port = FUNC_2(VAR_6.scheme);
    }



    if (!VAR_5->proxy_address) {
        VAR_12 = FUNC_0(&VAR_14,
                                       VAR_6.hostname,
                                       VAR_1, VAR_6.port, 0, VAR_11);
        if (VAR_12)
            return VAR_12;
    }

    VAR_13 = FUNC_4(VAR_5, VAR_14, VAR_7, VAR_8,
                               VAR_9, VAR_10, VAR_11);


    VAR_13->host_url = FUNC_3(VAR_13->pool,
                                  &VAR_6,
                                  VAR_2 |
                                  VAR_3);


    (void)FUNC_1(VAR_13->pool, VAR_13->host_url, &(VAR_13->host_info));
    if (!VAR_13->host_info.port) {
        VAR_13->host_info.port = FUNC_2(VAR_13->host_info.scheme);
    }

    *VAR_4 = VAR_13;

    return VAR_12;
}
