
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int starttime_str ;
typedef int renewtime_str ;
typedef int krb5_kdc_configuration ;
typedef int krb5_context ;
typedef int endtime_str ;
typedef int authtime_str ;
typedef int KerberosTime ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int,char*,char const*,char*,char*,char*,char*) ;
 int FUNC_1 (int ,int ,char*,int,int ) ;
 int FUNC_2 (char*,char*,int) ;

void
FUNC_3(krb5_context VAR_1,
     krb5_kdc_configuration *VAR_2,
     const char *VAR_3,
     KerberosTime VAR_4, KerberosTime *VAR_5,
     KerberosTime VAR_6, KerberosTime *VAR_7)
{
    char VAR_8[100], VAR_9[100],
 VAR_10[100], VAR_11[100];

    FUNC_1(VAR_1, VAR_4,
       VAR_8, sizeof(VAR_8), VAR_0);
    if (VAR_5)
 FUNC_1(VAR_1, *VAR_5,
    VAR_9, sizeof(VAR_9), VAR_0);
    else
 FUNC_2(VAR_9, "unset", sizeof(VAR_9));
    FUNC_1(VAR_1, VAR_6,
       VAR_10, sizeof(VAR_10), VAR_0);
    if (VAR_7)
 FUNC_1(VAR_1, *VAR_7,
    VAR_11, sizeof(VAR_11), VAR_0);
    else
 FUNC_2(VAR_11, "unset", sizeof(VAR_11));

    FUNC_0(VAR_1, VAR_2, 5,
     "%s authtime: %s starttime: %s endtime: %s renew till: %s",
     VAR_3, VAR_8, VAR_9, VAR_10, VAR_11);
}
