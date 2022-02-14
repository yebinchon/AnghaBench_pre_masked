
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_context ;
typedef int heim_sipc ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int,char**,int*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int ,int *) ;
 int FUNC_4 (char*,int ,int *,int *) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_2 ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int ,int,int,char*) ;
 int FUNC_8 (int ,int,char*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int) ;
 scalar_t__ VAR_5 ;

int
FUNC_15(int VAR_6, char **VAR_7)
{
    krb5_context VAR_8;
    int VAR_9, VAR_10 = 0;

    FUNC_13(VAR_7[0]);

    if (FUNC_1(VAR_0, VAR_4, VAR_6, VAR_7, &VAR_10))
 FUNC_14(1);

    if (VAR_2)
 FUNC_14(0);

    if (VAR_5) {
 FUNC_12(((void*)0));
 FUNC_0(0);
    }

    VAR_9 = FUNC_9(&VAR_8);
    if (VAR_9)
 FUNC_8(VAR_8, 1, "krb5_init_context");

    VAR_9 = FUNC_10(VAR_8, &VAR_1);
    if (VAR_9)
 FUNC_7(VAR_8, 1, VAR_9, "krb5_kdc_default_config");

    FUNC_6(VAR_8, "digest-service", VAR_1);

    VAR_9 = FUNC_11(VAR_8, VAR_1);
    if (VAR_9)
 FUNC_7(VAR_8, 1, VAR_9, "krb5_kdc_set_dbinfo");
    {
 heim_sipc VAR_11;
 FUNC_4("org.h5l.ntlm-service", VAR_3, ((void*)0), &VAR_11);
    }

    FUNC_2();
    return 0;
}
