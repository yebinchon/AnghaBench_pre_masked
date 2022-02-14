
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {void* sa_handler; int sa_mask; scalar_t__ sa_flags; } ;
typedef int krb5_kdc_configuration ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int FUNC_0 (int ,int *) ;
 int * FUNC_1 (int ,int,char**) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int,char*,...) ;
 int VAR_7 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,struct sigaction*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,void*) ;
 void* VAR_8 ;
 int FUNC_13 () ;

int
FUNC_14(int VAR_9, char **VAR_10)
{
    krb5_error_code VAR_11;
    krb5_context VAR_12;
    krb5_kdc_configuration *VAR_13;

    FUNC_9(VAR_10[0]);

    VAR_11 = FUNC_5(&VAR_12);
    if (VAR_11 == VAR_0)
 FUNC_3 (1, "krb5_init_context failed to parse configuration file");
    else if (VAR_11)
 FUNC_3 (1, "krb5_init_context failed: %d", VAR_11);

    VAR_11 = FUNC_6(VAR_12, &VAR_7);
    if (VAR_11)
 FUNC_3 (1, "krb5_kt_register(HDB) failed: %d", VAR_11);

    VAR_13 = FUNC_1(VAR_12, VAR_9, VAR_10);
    FUNC_12(VAR_1, VAR_8);
    FUNC_12(VAR_3, VAR_8);
    FUNC_8(((void*)0));

    FUNC_13();

    FUNC_7(VAR_12, VAR_13);
    FUNC_4(VAR_12);
    return 0;
}
