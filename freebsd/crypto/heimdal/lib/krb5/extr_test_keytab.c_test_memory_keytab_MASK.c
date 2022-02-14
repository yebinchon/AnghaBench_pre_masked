
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int vno; int keyblock; int principal; } ;
typedef TYPE_1__ krb5_keytab_entry ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int entry3 ;
typedef int entry ;


 int VAR_0 ;
 int FUNC_0 (int ,int,scalar_t__,char*) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int ,int ,int ,int ,TYPE_1__*) ;
 int FUNC_9 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_10 (int ,char const*,int *) ;
 scalar_t__ FUNC_11 (int ,char*,int *) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_13(krb5_context VAR_1, const char *VAR_2, const char *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_keytab VAR_5, VAR_6, VAR_7;
    krb5_keytab_entry VAR_8, VAR_9, VAR_10;

    VAR_4 = FUNC_10(VAR_1, VAR_2, &VAR_5);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_resolve");

    FUNC_12(&VAR_8, 0, sizeof(VAR_8));
    VAR_4 = FUNC_11(VAR_1, "lha@SU.SE", &VAR_8.principal);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_parse_name");
    VAR_8.vno = 1;
    VAR_4 = FUNC_4(VAR_1,
     VAR_0,
     &VAR_8.keyblock);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_generate_random_keyblock");

    FUNC_5(VAR_1, VAR_5, &VAR_8);

    VAR_4 = FUNC_10(VAR_1, VAR_2, &VAR_6);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_resolve");

    VAR_4 = FUNC_8(VAR_1, VAR_5,
       VAR_8.principal,
       0,
       VAR_0,
       &VAR_9);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_get_entry");
    FUNC_7(VAR_1, &VAR_9);

    VAR_4 = FUNC_6(VAR_1, VAR_5);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_close");

    VAR_4 = FUNC_8(VAR_1, VAR_6,
       VAR_8.principal,
       0,
       VAR_0,
       &VAR_9);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_get_entry");
    FUNC_7(VAR_1, &VAR_9);

    VAR_4 = FUNC_6(VAR_1, VAR_6);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_close");


    VAR_4 = FUNC_10(VAR_1, VAR_3, &VAR_7);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_resolve");

    FUNC_12(&VAR_10, 0, sizeof(VAR_10));
    VAR_4 = FUNC_11(VAR_1, "lha3@SU.SE", &VAR_10);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_parse_name");
    VAR_10 = 1;
    VAR_4 = FUNC_4(VAR_1,
     VAR_0,
     &VAR_10);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_generate_random_keyblock");

    FUNC_5(VAR_1, VAR_7, &VAR_10);


    VAR_4 = FUNC_10(VAR_1, VAR_2, &VAR_5);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_resolve");

    VAR_4 = FUNC_8(VAR_1, VAR_5,
       VAR_8.principal,
       0,
       VAR_0,
       &VAR_9);
    if (VAR_4 == 0)
 FUNC_1(VAR_1, 1, "krb5_kt_get_entry when if should fail");

    FUNC_9(VAR_1, VAR_5, &VAR_8);

    VAR_4 = FUNC_6(VAR_1, VAR_5);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_close");

    FUNC_7(VAR_1, &VAR_8);

    FUNC_9(VAR_1, VAR_7, &VAR_10);

    VAR_4 = FUNC_6(VAR_1, VAR_7);
    if (VAR_4)
 FUNC_0(VAR_1, 1, VAR_4, "krb5_kt_close");

    FUNC_3(VAR_1, VAR_10);
    FUNC_2(VAR_1, &VAR_10);
}
