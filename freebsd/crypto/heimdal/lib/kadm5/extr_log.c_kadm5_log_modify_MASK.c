
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
struct TYPE_9__ {scalar_t__ length; int data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_10__ {int context; int log_context; } ;
typedef TYPE_2__ kadm5_server_context ;
typedef scalar_t__ kadm5_ret_t ;
typedef int kadm5_log_context ;
typedef int hdb_entry ;


 scalar_t__ FUNC_0 (int ,int *,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *,int ) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (int *,scalar_t__) ;

kadm5_ret_t
FUNC_11 (kadm5_server_context *VAR_1,
    hdb_entry *VAR_2,
    uint32_t VAR_3)
{
    krb5_storage *VAR_4;
    kadm5_ret_t VAR_5;
    krb5_data VAR_6;
    uint32_t VAR_7;
    kadm5_log_context *VAR_8 = &VAR_1->log_context;

    FUNC_6(&VAR_6);

    VAR_4 = FUNC_7();
    VAR_5 = FUNC_0 (VAR_1->context, VAR_2, &VAR_6);
    if (VAR_5)
 goto failed;

    VAR_5 = FUNC_4 (VAR_1, VAR_4, VAR_0);
    if (VAR_5)
 goto failed;

    VAR_7 = VAR_6.length + 4;
    VAR_5 = FUNC_10 (VAR_4, VAR_7);
    if (VAR_5)
 goto failed;
    VAR_5 = FUNC_10 (VAR_4, VAR_3);
    if (VAR_5)
 goto failed;
    FUNC_9 (VAR_4, VAR_6.data, VAR_6.length);

    VAR_5 = FUNC_10 (VAR_4, VAR_7);
    if (VAR_5)
 goto failed;
    VAR_5 = FUNC_3 (VAR_8, VAR_4);
    if (VAR_5)
 goto failed;
    VAR_5 = FUNC_2 (VAR_8, VAR_4);
    if (VAR_5)
 goto failed;
    FUNC_5(&VAR_6);
    FUNC_8 (VAR_4);
    return FUNC_1 (VAR_1);
failed:
    FUNC_5(&VAR_6);
    FUNC_8(VAR_4);
    return VAR_5;
}
