
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int off_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
struct TYPE_5__ {int log_context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_log_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int *,int ) ;
 int VAR_2 ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int,int ) ;
 scalar_t__ FUNC_7 (int *,int) ;
 scalar_t__ FUNC_8 (int *,int ) ;

kadm5_ret_t
FUNC_9 (kadm5_server_context *VAR_3,
    krb5_principal VAR_4)
{
    krb5_storage *VAR_5;
    kadm5_ret_t VAR_6;
    off_t VAR_7;
    off_t VAR_8;
    kadm5_log_context *VAR_9 = &VAR_3->log_context;

    VAR_5 = FUNC_4();
    if (VAR_5 == ((void*)0))
 return VAR_0;
    VAR_6 = FUNC_3 (VAR_3, VAR_5, VAR_2);
    if (VAR_6)
 goto out;
    VAR_6 = FUNC_7 (VAR_5, 0);
    if (VAR_6)
 goto out;
    VAR_7 = FUNC_6 (VAR_5, 0, VAR_1);
    VAR_6 = FUNC_8 (VAR_5, VAR_4);
    if (VAR_6)
 goto out;
    VAR_8 = FUNC_6 (VAR_5, 0, VAR_1) - VAR_7;
    FUNC_6(VAR_5, -(VAR_8 + 4), VAR_1);
    VAR_6 = FUNC_7 (VAR_5, VAR_8);
    if (VAR_6)
 goto out;
    FUNC_6(VAR_5, VAR_8, VAR_1);
    VAR_6 = FUNC_7 (VAR_5, VAR_8);
    if (VAR_6)
 goto out;
    VAR_6 = FUNC_2 (VAR_9, VAR_5);
    if (VAR_6)
 goto out;
    VAR_6 = FUNC_1 (VAR_9, VAR_5);
    if (VAR_6)
 goto out;
    VAR_6 = FUNC_0 (VAR_3);
out:
    FUNC_5 (VAR_5);
    return VAR_6;
}
