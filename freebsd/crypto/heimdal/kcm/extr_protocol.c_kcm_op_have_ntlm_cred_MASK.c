
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kcm_ntlm_cred {int dummy; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int kcm_operation ;
typedef int kcm_client ;


 scalar_t__ VAR_0 ;
 struct kcm_ntlm_cred* FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int *,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
       kcm_client *VAR_2,
       kcm_operation VAR_3,
       krb5_storage *VAR_4,
       krb5_storage *VAR_5)
{
    struct kcm_ntlm_cred *VAR_6;
    char *VAR_7 = ((void*)0), *VAR_8 = ((void*)0);
    krb5_error_code VAR_9;

    VAR_9 = FUNC_2(VAR_4, &VAR_7);
    if (VAR_9)
 goto error;

    VAR_9 = FUNC_2(VAR_4, &VAR_8);
    if (VAR_9)
 goto error;

    if (VAR_8[0] == '\0') {
 FUNC_1(VAR_8);
 VAR_8 = ((void*)0);
    }

    VAR_6 = FUNC_0(VAR_7, VAR_8, VAR_2);
    if (VAR_6 == ((void*)0))
 VAR_9 = VAR_0;

 error:
    FUNC_1(VAR_7);
    if (VAR_8)
 FUNC_1(VAR_8);

    return VAR_9;
}
