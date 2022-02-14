
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int krb5_storage ;
typedef int krb5_principal ;
struct TYPE_9__ {scalar_t__ keytype; int keyvalue; } ;
typedef TYPE_1__ krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_10__ {int context; } ;
typedef TYPE_2__ kadm5_server_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ,TYPE_1__**,int*) ;
 int FUNC_5 (int ,TYPE_1__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *,scalar_t__*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__,char*) ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 (int *,int ) ;

__attribute__((used)) static void
FUNC_13(kadm5_server_context *VAR_2,
    krb5_storage *VAR_3,
    krb5_storage *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_principal VAR_6;
    uint32_t VAR_7;
    krb5_keyblock *VAR_8;
    int VAR_9;

    FUNC_0(FUNC_7(VAR_3, &VAR_7));
    FUNC_1(VAR_7 == VAR_1);
    FUNC_0(FUNC_11(VAR_2->context, VAR_3, &VAR_6));

    VAR_5 = FUNC_2(VAR_2, VAR_0, VAR_6);
    if(VAR_5)
 goto fail;

    VAR_5 = FUNC_4(VAR_2, VAR_6,
      &VAR_8, &VAR_9);

 fail:
    FUNC_10(VAR_2->context, VAR_5, "rand key principal");

    FUNC_0(FUNC_9(VAR_4, VAR_1));
    FUNC_0(FUNC_9(VAR_4, VAR_5));
    if (VAR_5 == 0) {
 int VAR_10;
 FUNC_0(FUNC_8(VAR_4, VAR_9));

 for(VAR_10 = 0; VAR_10 < VAR_9; VAR_10++){
     FUNC_0(FUNC_9(VAR_4, VAR_8[VAR_10].keytype));
     FUNC_0(FUNC_12(VAR_4, VAR_8[VAR_10].keyvalue));
     FUNC_5(VAR_2->context, &VAR_8[VAR_10]);
 }
 FUNC_3(VAR_8);
    }
    FUNC_6(VAR_2->context, VAR_6);
}
