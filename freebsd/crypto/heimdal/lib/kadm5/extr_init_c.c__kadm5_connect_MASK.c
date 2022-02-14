
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int kadm5_ret_t ;
struct TYPE_3__ {int sock; } ;
typedef TYPE_1__ kadm5_client_context ;


 int FUNC_0 (TYPE_1__*) ;

kadm5_ret_t
FUNC_1(void *VAR_0)
{
    kadm5_client_context *VAR_1 = VAR_0;
    if(VAR_1->sock == -1)
 return FUNC_0(VAR_1);
    return 0;
}
