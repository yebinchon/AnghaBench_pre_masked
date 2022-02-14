
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int log_fd; int version; int log_file; } ;
struct TYPE_4__ {int context; TYPE_2__ log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef TYPE_2__ kadm5_log_context ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int *) ;
 int FUNC_3 (int ,scalar_t__,char*,int ) ;
 int FUNC_4 (int ,int,int) ;

kadm5_ret_t
FUNC_5 (kadm5_server_context *VAR_4)
{
    int VAR_5;
    kadm5_ret_t VAR_6;
    kadm5_log_context *VAR_7 = &VAR_4->log_context;

    if (VAR_7->log_fd != -1)
 return 0;
    VAR_5 = FUNC_4 (VAR_7->log_file, VAR_2 | VAR_1, 0600);
    if (VAR_5 < 0) {
 VAR_6 = VAR_3;
 FUNC_3(VAR_4->context, VAR_6, "kadm5_log_init: open %s",
         VAR_7->log_file);
 return VAR_6;
    }
    if (FUNC_1 (VAR_5, VAR_0) < 0) {
 VAR_6 = VAR_3;
 FUNC_3(VAR_4->context, VAR_6, "kadm5_log_init: flock %s",
          VAR_7->log_file);
 FUNC_0 (VAR_5);
 return VAR_3;
    }

    VAR_6 = FUNC_2 (VAR_5, &VAR_7->version);
    if (VAR_6)
 return VAR_6;

    VAR_7->log_fd = VAR_5;
    return 0;
}
