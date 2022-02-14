
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int log_fd; } ;
struct TYPE_4__ {TYPE_2__ log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
typedef TYPE_2__ kadm5_log_context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int ) ;

kadm5_ret_t
FUNC_2 (kadm5_server_context *VAR_1)
{
    kadm5_log_context *VAR_2 = &VAR_1->log_context;
    int VAR_3 = VAR_2->log_fd;

    FUNC_1 (VAR_3, VAR_0);
    FUNC_0(VAR_3);
    VAR_2->log_fd = -1;
    return 0;
}
