
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int kadm5_ret_t ;
struct TYPE_2__ {int context; scalar_t__ my_context; int * ac; scalar_t__ service_name; scalar_t__ client_name; int sock; scalar_t__ admin_server; scalar_t__ realm; } ;
typedef TYPE_1__ kadm5_client_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;

kadm5_ret_t
FUNC_4(void *VAR_0)
{
    kadm5_client_context *VAR_1 = VAR_0;

    FUNC_1(VAR_1->realm);
    FUNC_1(VAR_1->admin_server);
    FUNC_0(VAR_1->sock);
    if (VAR_1->client_name)
 FUNC_1(VAR_1->client_name);
    if (VAR_1->service_name)
 FUNC_1(VAR_1->service_name);
    if (VAR_1->ac != ((void*)0))
 FUNC_2(VAR_1->context, VAR_1->ac);
    if(VAR_1->my_context)
 FUNC_3(VAR_1->context);
    return 0;
}
