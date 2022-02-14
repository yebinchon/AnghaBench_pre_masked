
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pool; int server_authn_info; } ;
typedef TYPE_1__ serf_context_t ;
struct TYPE_5__ {int host_url; TYPE_1__* ctx; } ;
typedef TYPE_2__ serf_connection_t ;
typedef int serf__authn_info_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int *) ;
 int * FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int ) ;

serf__authn_info_t *FUNC_4(serf_connection_t *VAR_1)
{
    serf_context_t *VAR_2 = VAR_1->ctx;
    serf__authn_info_t *VAR_3;

    VAR_3 = FUNC_0(VAR_2->server_authn_info, VAR_1->host_url,
                              VAR_0);

    if (!VAR_3) {
        VAR_3 = FUNC_2(VAR_2->pool, sizeof(serf__authn_info_t));
        FUNC_1(VAR_2->server_authn_info,
                     FUNC_3(VAR_2->pool, VAR_1->host_url),
                     VAR_0, VAR_3);
    }

    return VAR_3;
}
