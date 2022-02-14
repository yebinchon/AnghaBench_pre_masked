
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int,int ,char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(void)
{
    krb5_context VAR_0;
    krb5_error_code VAR_1;
    krb5_ccache VAR_2, VAR_3;
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < 10; VAR_4++) {

 VAR_1 = FUNC_5(&VAR_0);
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_init_context");

 VAR_1 = FUNC_2(VAR_0, "MEMORY:foo");
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_cc_set_default_name");

 VAR_1 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_cc_default");

 VAR_1 = FUNC_1(VAR_0, &VAR_3);
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_cc_default");

 VAR_1 = FUNC_0(VAR_0, VAR_2);
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_cc_close");

 VAR_1 = FUNC_0(VAR_0, VAR_3);
 if (VAR_1)
     FUNC_3(VAR_0, 1, VAR_1, "krb5_cc_close");

 FUNC_4(VAR_0);
    }
}
