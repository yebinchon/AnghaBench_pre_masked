
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_keyblock ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_7__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (int,char*,scalar_t__) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int *,int ,int *) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ,int ,size_t*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int,scalar_t__,char*) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int ,int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (char*) ;

int
FUNC_14(int VAR_1, char **VAR_2)
{
    krb5_context VAR_3;
    krb5_error_code VAR_4;
    krb5_keyblock VAR_5;
    krb5_crypto VAR_6;
    size_t VAR_7;
    krb5_data VAR_8, VAR_9, VAR_10;
    krb5_enctype VAR_11 = VAR_0;

    VAR_4 = FUNC_12(&VAR_3);
    if (VAR_4)
 FUNC_0(1, "krb5_init_context %d", VAR_4);

    VAR_4 = FUNC_11(VAR_3, VAR_11, &VAR_5);
    if (VAR_4)
 FUNC_7(VAR_3, 1, VAR_4, "krb5_generate_random_keyblock");

    VAR_4 = FUNC_4(VAR_3, VAR_11, &VAR_7);
    if (VAR_4)
 FUNC_7(VAR_3, 1, VAR_4, "krb5_crypto_prf_length");

    VAR_4 = FUNC_2(VAR_3, &VAR_5, 0, &VAR_6);
    if (VAR_4)
 FUNC_7(VAR_3, 1, VAR_4, "krb5_crypto_init");

    VAR_8.data = FUNC_13("foo");
    VAR_8.length = 3;

    VAR_4 = FUNC_3(VAR_3, VAR_6, &VAR_8, &VAR_9);
    if (VAR_4)
 FUNC_7(VAR_3, 1, VAR_4, "krb5_crypto_prf");

    VAR_4 = FUNC_3(VAR_3, VAR_6, &VAR_8, &VAR_10);
    if (VAR_4)
 FUNC_7(VAR_3, 1, VAR_4, "krb5_crypto_prf");

    if (FUNC_5(&VAR_9, &VAR_10) != 0)
 FUNC_8(VAR_3, 1, "krb5_data_cmp");

    FUNC_6(&VAR_9);
    FUNC_6(&VAR_10);

    FUNC_1(VAR_3, VAR_6);

    FUNC_10(VAR_3, &VAR_5);

    FUNC_9(VAR_3);

    return 0;
}
