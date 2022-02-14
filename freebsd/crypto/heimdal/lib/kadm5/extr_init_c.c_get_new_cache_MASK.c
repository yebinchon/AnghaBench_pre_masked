
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int * krb5_prompter_fct ;
typedef int krb5_principal ;
typedef int krb5_keytab ;
typedef int krb5_get_init_creds_opt ;
typedef int krb5_error_code ;
struct TYPE_6__ {int client; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ,TYPE_1__*,int ,int ,int ,char const*,int *) ;
 int FUNC_5 (int ,int **) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,char*,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ,TYPE_1__*,int ,char const*,int *,int *,int ,char const*,int *) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 (int ,char const*,int *) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_15(krb5_context VAR_3,
       krb5_principal VAR_4,
       const char *VAR_5,
       krb5_prompter_fct VAR_6,
       const char *VAR_7,
       const char *VAR_8,
       krb5_ccache *VAR_9)
{
    krb5_error_code VAR_10;
    krb5_creds VAR_11;
    krb5_get_init_creds_opt *VAR_12;
    krb5_ccache VAR_13;

    VAR_10 = FUNC_5 (VAR_3, &VAR_12);
    if (VAR_10)
 return VAR_10;

    FUNC_7(VAR_3, "kadmin",
           FUNC_14(VAR_3,
               VAR_4),
           VAR_12);


    FUNC_8 (VAR_12, VAR_0);
    FUNC_9 (VAR_12, VAR_0);

    if(VAR_5 == ((void*)0) && VAR_6 == ((void*)0)) {
 krb5_keytab VAR_14;
 if(VAR_7 == ((void*)0))
     VAR_10 = FUNC_12(VAR_3, &VAR_14);
 else
     VAR_10 = FUNC_13(VAR_3, VAR_7, &VAR_14);
 if(VAR_10) {
     FUNC_6(VAR_3, VAR_12);
     return VAR_10;
 }
 VAR_10 = FUNC_4 (VAR_3,
       &VAR_11,
       VAR_4,
       VAR_14,
       0,
       VAR_8,
       VAR_12);
 FUNC_11(VAR_3, VAR_14);
    } else {
 VAR_10 = FUNC_10 (VAR_3,
         &VAR_11,
         VAR_4,
         VAR_5,
         VAR_6,
         ((void*)0),
         0,
         VAR_8,
         VAR_12);
    }
    FUNC_6(VAR_3, VAR_12);
    switch(VAR_10){
    case 0:
 break;
    case 128:
    case 130:
    case 129:
 return VAR_1;
    default:
 return VAR_10;
    }
    VAR_10 = FUNC_1(VAR_3, VAR_2, ((void*)0), &VAR_13);
    if(VAR_10)
 return VAR_10;
    VAR_10 = FUNC_0 (VAR_3, VAR_13, VAR_11.client);
    if (VAR_10)
 return VAR_10;
    VAR_10 = FUNC_2 (VAR_3, VAR_13, &VAR_11);
    if (VAR_10)
 return VAR_10;
    FUNC_3 (VAR_3, &VAR_11);
    *VAR_9 = VAR_13;
    return 0;
}
