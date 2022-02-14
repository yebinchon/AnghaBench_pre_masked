
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int version; } ;
struct TYPE_4__ {TYPE_2__ log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
typedef TYPE_2__ kadm5_log_context ;



kadm5_ret_t
FUNC_0 (kadm5_server_context *VAR_0, uint32_t VAR_1)
{
    kadm5_log_context *VAR_2 = &VAR_0->log_context;

    VAR_2->version = VAR_1;
    return 0;
}
