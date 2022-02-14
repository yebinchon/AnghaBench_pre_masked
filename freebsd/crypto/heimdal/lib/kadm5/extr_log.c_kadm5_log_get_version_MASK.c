
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int log_fd; } ;
struct TYPE_5__ {TYPE_1__ log_context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef int kadm5_ret_t ;


 int FUNC_0 (int ,int *) ;

kadm5_ret_t
FUNC_1 (kadm5_server_context *VAR_0, uint32_t *VAR_1)
{
    return FUNC_0 (VAR_0->log_context.log_fd, VAR_1);
}
