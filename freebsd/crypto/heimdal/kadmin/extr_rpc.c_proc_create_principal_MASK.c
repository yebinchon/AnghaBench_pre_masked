
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
struct TYPE_12__ {int principal; } ;
typedef TYPE_2__ kadm5_principal_ent_rec ;
typedef int ent ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,TYPE_2__*,scalar_t__,char*) ;
 int FUNC_5 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (TYPE_2__*,int ,int) ;
 int FUNC_10 (int ,int *,TYPE_2__*) ;
 int FUNC_11 (int *,char**) ;

__attribute__((used)) static void
FUNC_12(kadm5_server_context *VAR_2,
        krb5_storage *VAR_3,
        krb5_storage *VAR_4)
{
    uint32_t VAR_5, VAR_6;
    kadm5_principal_ent_rec VAR_7;
    krb5_error_code VAR_8;
    char *VAR_9;

    FUNC_9(&VAR_7, 0, sizeof(VAR_7));

    FUNC_0(FUNC_6(VAR_3, &VAR_5));
    FUNC_1(VAR_5 == VAR_1);
    FUNC_0(FUNC_10(VAR_2->context, VAR_3, &VAR_7));
    FUNC_0(FUNC_6(VAR_3, &VAR_6));
    FUNC_0(FUNC_11(VAR_3, &VAR_9));

    FUNC_1(VAR_7.principal);


    VAR_8 = FUNC_2(VAR_2, VAR_0, VAR_7.principal);
    if (VAR_8)
 goto fail;

    VAR_8 = FUNC_4(VAR_2, &VAR_7, VAR_6, VAR_9);

 fail:
    FUNC_8(VAR_2->context, VAR_8, "create principal");
    FUNC_0(FUNC_7(VAR_4, VAR_1));
    FUNC_0(FUNC_7(VAR_4, VAR_8));

    FUNC_3(VAR_9);
    FUNC_5(VAR_2, &VAR_7);
}
