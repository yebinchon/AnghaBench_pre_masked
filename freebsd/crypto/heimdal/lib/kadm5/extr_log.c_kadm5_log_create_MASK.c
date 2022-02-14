
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int krb5_storage ;
struct TYPE_8__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
struct TYPE_9__ {int context; int log_context; } ;
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
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int *,int ) ;

kadm5_ret_t
FUNC_10 (kadm5_server_context *VAR_1,
    hdb_entry *VAR_2)
{
    krb5_storage *VAR_3;
    kadm5_ret_t VAR_4;
    krb5_data VAR_5;
    kadm5_log_context *VAR_6 = &VAR_1->log_context;

    VAR_3 = FUNC_6();
    VAR_4 = FUNC_0 (VAR_1->context, VAR_2, &VAR_5);
    if (VAR_4) {
 FUNC_7(VAR_3);
 return VAR_4;
    }
    VAR_4 = FUNC_4 (VAR_1, VAR_3, VAR_0);
    if (VAR_4) {
 FUNC_5 (&VAR_5);
 FUNC_7(VAR_3);
 return VAR_4;
    }
    FUNC_9 (VAR_3, VAR_5.length);
    FUNC_8(VAR_3, VAR_5.data, VAR_5.length);
    FUNC_9 (VAR_3, VAR_5.length);
    FUNC_5 (&VAR_5);
    VAR_4 = FUNC_3 (VAR_6, VAR_3);
    if (VAR_4) {
 FUNC_7 (VAR_3);
 return VAR_4;
    }
    VAR_4 = FUNC_2 (VAR_6, VAR_3);
    FUNC_7 (VAR_3);
    if (VAR_4)
 return VAR_4;
    VAR_4 = FUNC_1 (VAR_1);
    return VAR_4;
}
