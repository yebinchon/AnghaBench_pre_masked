
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_verify_init_creds_opt ;
typedef int krb5_principal ;
typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (int ,int *,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int *) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 (int ,int *,char const*,int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ,int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_10 (krb5_context VAR_1,
        krb5_principal VAR_2,
        krb5_ccache VAR_3,
        krb5_keytab VAR_4,
        krb5_boolean VAR_5,
        const char *VAR_6,
        krb5_creds VAR_7)
{
    krb5_error_code VAR_8;
    krb5_principal VAR_9;
    krb5_verify_init_creds_opt VAR_10;
    krb5_ccache VAR_11;

    VAR_8 = FUNC_6 (VAR_1, ((void*)0), VAR_6, VAR_0,
       &VAR_9);
    if(VAR_8)
 return VAR_8;

    FUNC_8(&VAR_10);
    FUNC_9(&VAR_10, VAR_5);

    VAR_8 = FUNC_7(VAR_1,
     &VAR_7,
     VAR_9,
     VAR_4,
     ((void*)0),
     &VAR_10);
    FUNC_5(VAR_1, VAR_9);
    if(VAR_8)
 return VAR_8;
    if(VAR_3 == ((void*)0))
 VAR_8 = FUNC_1 (VAR_1, &VAR_11);
    else
 VAR_11 = VAR_3;
    if(VAR_8 == 0){
 VAR_8 = FUNC_2(VAR_1, VAR_11, VAR_2);
 if(VAR_8 == 0){
     VAR_8 = FUNC_3(VAR_1, VAR_11, &VAR_7);
 }
 if(VAR_3 == ((void*)0))
     FUNC_0(VAR_1, VAR_11);
    }
    FUNC_4(VAR_1, &VAR_7);
    return VAR_8;
}
