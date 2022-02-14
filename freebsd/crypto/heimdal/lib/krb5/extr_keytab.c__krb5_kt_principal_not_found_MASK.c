
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int princ ;
typedef int kvno_str ;
typedef int krb5_keytab ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
typedef int krb5_context ;
typedef int krb5_const_principal ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,char**) ;
 int FUNC_3 (int ,int ,char**) ;
 int FUNC_4 (int ,int ,int ,char*,char*,char*,char*) ;
 int FUNC_5 (int ,int ,char*,int) ;
 int FUNC_6 (char*,int,char*,int) ;

krb5_error_code
FUNC_7(krb5_context VAR_0,
        krb5_error_code VAR_1,
        krb5_keytab VAR_2,
        krb5_const_principal VAR_3,
        krb5_enctype VAR_4,
        int VAR_5)
{
    char VAR_6[256], VAR_7[25], *VAR_8;
    char *VAR_9 = ((void*)0);

    FUNC_5 (VAR_0, VAR_3, VAR_6, sizeof(VAR_6));
    FUNC_3 (VAR_0, VAR_2, &VAR_8);
    FUNC_2(VAR_0, VAR_4, &VAR_9);

    if (VAR_5)
 FUNC_6(VAR_7, sizeof(VAR_7), "(kvno %d)", VAR_5);
    else
 VAR_7[0] = '\0';

    FUNC_4 (VAR_0, VAR_1,
       FUNC_0("Failed to find %s%s in keytab %s (%s)",
          "principal, kvno, keytab file, enctype"),
       VAR_6,
       VAR_7,
       VAR_8 ? VAR_8 : "unknown keytab",
       VAR_9 ? VAR_9 : "unknown enctype");
    FUNC_1(VAR_8);
    FUNC_1(VAR_9);
    return VAR_1;
}
