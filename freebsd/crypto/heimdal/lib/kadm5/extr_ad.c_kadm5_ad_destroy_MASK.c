
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kadm5_ret_t ;
struct TYPE_3__ {int context; scalar_t__ my_context; int caller; scalar_t__ client_name; scalar_t__ realm; scalar_t__ base_dn; scalar_t__ ccache; } ;
typedef TYPE_1__ kadm5_ad_context ;
typedef int LDAP ;


 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static kadm5_ret_t
FUNC_6(void *VAR_0)
{
    kadm5_ad_context *VAR_1 = VAR_0;

    if (VAR_1->ccache)
 FUNC_2(VAR_1->context, VAR_1->ccache);
    FUNC_1(VAR_1->realm);
    FUNC_1(VAR_1->client_name);
    FUNC_4(VAR_1->context, VAR_1->caller);
    if(VAR_1->my_context)
 FUNC_3(VAR_1->context);
    return 0;
}
