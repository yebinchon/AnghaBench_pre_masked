
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_4__ {int log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_log_context ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int *,int ) ;
 int VAR_0 ;
 int * FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ) ;

kadm5_ret_t
FUNC_6 (kadm5_server_context *VAR_1)
{
    krb5_storage *VAR_2;
    kadm5_ret_t VAR_3;
    kadm5_log_context *VAR_4 = &VAR_1->log_context;

    VAR_2 = FUNC_3();
    VAR_3 = FUNC_2 (VAR_1, VAR_2, VAR_0);
    if (VAR_3) {
 FUNC_4 (VAR_2);
 return VAR_3;
    }
    FUNC_5 (VAR_2, 0);
    FUNC_5 (VAR_2, 0);
    VAR_3 = FUNC_1 (VAR_4, VAR_2);
    if (VAR_3) {
 FUNC_4 (VAR_2);
 return VAR_3;
    }
    VAR_3 = FUNC_0 (VAR_4, VAR_2);
    FUNC_4 (VAR_2);

    return VAR_3;
}
