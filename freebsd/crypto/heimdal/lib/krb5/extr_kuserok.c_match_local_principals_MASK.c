
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char const* krb5_realm ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_boolean ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const**) ;
 scalar_t__ FUNC_1 (int ,char const***) ;
 int * FUNC_2 (int ,int ,int) ;
 int * FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int *,char const*) ;

__attribute__((used)) static krb5_boolean
FUNC_5(krb5_context VAR_2,
         krb5_principal VAR_3,
         const char *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_realm *VAR_6, *VAR_7;
    krb5_boolean VAR_8 = VAR_0;


    if(FUNC_2(VAR_2, VAR_3, 1) != ((void*)0))
 return VAR_0;

    VAR_5 = FUNC_1 (VAR_2, &VAR_6);
    if (VAR_5)
 return VAR_0;

    for (VAR_7 = VAR_6; *VAR_7 != ((void*)0); ++VAR_7) {
 if(FUNC_4(FUNC_3(VAR_2, VAR_3),
    *VAR_7) != 0)
     continue;
 if(FUNC_4(FUNC_2(VAR_2, VAR_3, 0),
    VAR_4) == 0) {
     VAR_8 = VAR_1;
     break;
 }
    }
    FUNC_0 (VAR_2, VAR_6);
    return VAR_8;
}
