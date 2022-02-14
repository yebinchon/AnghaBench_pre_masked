
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int acl_flags; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;



kadm5_ret_t
FUNC_0(void *VAR_0, uint32_t *VAR_1)
{
    kadm5_server_context *VAR_2 = VAR_0;
    *VAR_1 = VAR_2->acl_flags;
    return 0;
}
