
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int context; } ;
typedef TYPE_1__ kadm5_server_context ;
typedef int kadm5_principal_ent_rec ;
typedef int ent ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int ,int *,scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__,char*) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,int *,int *) ;
 int FUNC_11 (int ,int *,int *) ;

__attribute__((used)) static void
FUNC_12(kadm5_server_context *VAR_2,
     krb5_storage *VAR_3,
     krb5_storage *VAR_4)
{
    uint32_t VAR_5, VAR_6;
    krb5_principal VAR_7;
    kadm5_principal_ent_rec VAR_8;
    krb5_error_code VAR_9;

    FUNC_9(&VAR_8, 0, sizeof(VAR_8));

    FUNC_0(FUNC_6(VAR_3, &VAR_5));
    FUNC_1(VAR_5 == VAR_1);
    FUNC_0(FUNC_10(VAR_2->context, VAR_3, &VAR_7));
    FUNC_0(FUNC_6(VAR_3, &VAR_6));

    VAR_9 = FUNC_2(VAR_2, VAR_0, VAR_7);
    if(VAR_9)
 goto fail;

    VAR_9 = FUNC_4(VAR_2, VAR_7, &VAR_8, VAR_6);

 fail:
    FUNC_8(VAR_2->context, VAR_9, "get principal principal");

    FUNC_0(FUNC_7(VAR_4, VAR_1));
    FUNC_0(FUNC_7(VAR_4, VAR_9));
    if (VAR_9 == 0) {
 FUNC_0(FUNC_11(VAR_2->context, VAR_4, &VAR_8));
    }
    FUNC_5(VAR_2->context, VAR_7);
    FUNC_3(VAR_2, &VAR_8);
}
