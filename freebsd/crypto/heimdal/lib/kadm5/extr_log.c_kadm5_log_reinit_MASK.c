
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int log_fd; scalar_t__ version; int log_file; } ;
struct TYPE_4__ {TYPE_2__ log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_ret_t ;
typedef TYPE_2__ kadm5_log_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int,int) ;

kadm5_ret_t
FUNC_3 (kadm5_server_context *VAR_6)
{
    int VAR_7;
    kadm5_log_context *VAR_8 = &VAR_6->log_context;

    if (VAR_8->log_fd != -1) {
 FUNC_1 (VAR_8->log_fd, VAR_1);
 FUNC_0 (VAR_8->log_fd);
 VAR_8->log_fd = -1;
    }
    VAR_7 = FUNC_2 (VAR_8->log_file, VAR_3 | VAR_2 | VAR_4, 0600);
    if (VAR_7 < 0)
 return VAR_5;
    if (FUNC_1 (VAR_7, VAR_0) < 0) {
 FUNC_0 (VAR_7);
 return VAR_5;
    }

    VAR_8->version = 0;
    VAR_8->log_fd = VAR_7;
    return 0;
}
