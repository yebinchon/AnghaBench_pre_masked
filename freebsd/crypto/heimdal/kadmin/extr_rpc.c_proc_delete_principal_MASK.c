
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_5__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,scalar_t__*) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int ,scalar_t__,char*) ;
 int FUNC_8 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_9(kadm5_server_context *VAR_2,
        krb5_storage *VAR_3,
        krb5_storage *VAR_4)
{
    uint32_t VAR_5;
    krb5_principal VAR_6;
    krb5_error_code VAR_7;

    FUNC_0(FUNC_5(VAR_3, &VAR_5));
    FUNC_1(VAR_5 == VAR_1);
    FUNC_0(FUNC_8(VAR_2->context, VAR_3, &VAR_6));

    VAR_7 = FUNC_2(VAR_2, VAR_0, VAR_6);
    if (VAR_7)
 goto fail;

    VAR_7 = FUNC_3(VAR_2, VAR_6);

 fail:
    FUNC_7(VAR_2->context, VAR_7, "delete principal");
    FUNC_0(FUNC_6(VAR_4, VAR_1));
    FUNC_0(FUNC_6(VAR_4, VAR_7));

    FUNC_4(VAR_2->context, VAR_6);
}
