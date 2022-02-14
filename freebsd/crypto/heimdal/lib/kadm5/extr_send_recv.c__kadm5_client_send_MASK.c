
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_9__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef scalar_t__ kadm5_ret_t ;
struct TYPE_10__ {int sock; int context; int ac; } ;
typedef TYPE_2__ kadm5_client_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,size_t) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,TYPE_1__*,TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int ) ;
 size_t FUNC_8 (int *,int ,int ) ;
 scalar_t__ FUNC_9 (int *,TYPE_1__) ;

kadm5_ret_t
FUNC_10(kadm5_client_context *VAR_3, krb5_storage *VAR_4)
{
    krb5_data VAR_5, VAR_6;
    krb5_error_code VAR_7;
    size_t VAR_8;
    krb5_storage *VAR_9;

    FUNC_0(VAR_3->sock != -1);

    VAR_8 = FUNC_8(VAR_4, 0, VAR_1);
    VAR_7 = FUNC_2(&VAR_5, VAR_8);
    if (VAR_7) {
 FUNC_1(VAR_3->context);
 return VAR_7;
    }
    FUNC_8(VAR_4, 0, VAR_2);
    FUNC_7(VAR_4, VAR_5.data, VAR_5.length);

    VAR_7 = FUNC_4(VAR_3->context, VAR_3->ac, &VAR_5, &VAR_6, ((void*)0));
    FUNC_3(&VAR_5);
    if(VAR_7)
 return VAR_7;

    VAR_9 = FUNC_6(VAR_3->sock);
    if(VAR_9 == ((void*)0)) {
 FUNC_1(VAR_3->context);
 FUNC_3(&VAR_6);
 return VAR_0;
    }

    VAR_7 = FUNC_9(VAR_9, VAR_6);
    if (VAR_7)
 FUNC_1(VAR_3->context);
    FUNC_5(VAR_9);
    FUNC_3(&VAR_6);
    return VAR_7;
}
