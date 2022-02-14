
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * krb5_principal ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_const_principal ;
typedef int krb5_boolean ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char**) ;
 char** FUNC_1 (int ,int *,char*,char const*,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int **) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_5(OM_uint32 *VAR_1,
      krb5_context VAR_2, krb5_const_principal VAR_3,
      const char *VAR_4, krb5_boolean *VAR_5,
      krb5_boolean VAR_6)
{
    krb5_error_code VAR_7 = 0;
    char **VAR_8, **VAR_9;
    krb5_principal VAR_10;


    VAR_8 = FUNC_1(VAR_2, ((void*)0), "gssapi",
    VAR_4, ((void*)0));
    if(VAR_8 == ((void*)0))
 return 0;

    VAR_10 = ((void*)0);
    for(VAR_9 = VAR_8; *VAR_9; VAR_9++) {
 VAR_7 = FUNC_3(VAR_2, *VAR_9, &VAR_10);
 if (VAR_7)
     break;

 if (FUNC_4(VAR_2, VAR_3, VAR_10)) {
     *VAR_5 = VAR_6;
     break;
 }

 FUNC_2(VAR_2, VAR_10);
 VAR_10 = ((void*)0);
    }
    if (VAR_10)
 FUNC_2(VAR_2, VAR_10);
    FUNC_0(VAR_8);

    if (VAR_7) {
 if (VAR_1)
     *VAR_1 = VAR_7;
 return VAR_0;
    }

    return 0;
}
