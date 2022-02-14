
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_error_code ;
typedef int krb5_context ;
struct TYPE_4__ {int * server; int * client; } ;
typedef TYPE_1__ kcm_ccache_data ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;

krb5_error_code
FUNC_2(krb5_context VAR_0,
         kcm_ccache_data *VAR_1)
{
    if (VAR_1->client != ((void*)0)) {
 FUNC_1(VAR_0, VAR_1->client);
 VAR_1->client = ((void*)0);
    }

    if (VAR_1->server != ((void*)0)) {
 FUNC_1(VAR_0, VAR_1->server);
 VAR_1->server = ((void*)0);
    }

    FUNC_0(VAR_0, VAR_1);

    return 0;
}
