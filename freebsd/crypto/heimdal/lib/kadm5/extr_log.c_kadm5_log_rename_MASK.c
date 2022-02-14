
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int off_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_10__ {int context; int log_context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_log_context ;
typedef int hdb_entry ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ) ;
 int VAR_1 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int,int ) ;
 int FUNC_10 (int *,int ,int ) ;
 scalar_t__ FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *,int ) ;

kadm5_ret_t
FUNC_13 (kadm5_server_context *VAR_2,
    krb5_principal VAR_3,
    hdb_entry *VAR_4)
{
    krb5_storage *VAR_5;
    kadm5_ret_t VAR_6;
    off_t VAR_7;
    off_t VAR_8;
    krb5_data VAR_9;
    kadm5_log_context *VAR_10 = &VAR_2->log_context;

    FUNC_6(&VAR_9);

    VAR_5 = FUNC_7();
    VAR_6 = FUNC_0 (VAR_2->context, VAR_4, &VAR_9);
    if (VAR_6)
 goto failed;

    VAR_6 = FUNC_4 (VAR_2, VAR_5, VAR_1);
    if (VAR_6)
 goto failed;

    VAR_6 = FUNC_11 (VAR_5, 0);
    if (VAR_6)
 goto failed;
    VAR_7 = FUNC_9 (VAR_5, 0, VAR_0);
    VAR_6 = FUNC_12 (VAR_5, VAR_3);
    if (VAR_6)
 goto failed;

    FUNC_10(VAR_5, VAR_9.data, VAR_9.length);
    VAR_8 = FUNC_9 (VAR_5, 0, VAR_0) - VAR_7;

    FUNC_9(VAR_5, -(VAR_8 + 4), VAR_0);
    VAR_6 = FUNC_11 (VAR_5, VAR_8);
    if (VAR_6)
 goto failed;

    FUNC_9(VAR_5, VAR_8, VAR_0);
    VAR_6 = FUNC_11 (VAR_5, VAR_8);
    if (VAR_6)
 goto failed;

    VAR_6 = FUNC_3 (VAR_10, VAR_5);
    if (VAR_6)
 goto failed;

    VAR_6 = FUNC_2 (VAR_10, VAR_5);
    if (VAR_6)
 goto failed;
    FUNC_8 (VAR_5);
    FUNC_5 (&VAR_9);

    return FUNC_1 (VAR_2);

failed:
    FUNC_5(&VAR_9);
    FUNC_8(VAR_5);
    return VAR_6;
}
