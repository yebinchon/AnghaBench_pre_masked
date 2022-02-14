
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_keytab ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *,char**) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_context VAR_2, krb5_keytab *VAR_3)
{
    krb5_error_code VAR_4;

    FUNC_0(&VAR_1);

    if (VAR_0 != ((void*)0)) {
 char *VAR_5 = ((void*)0);

 VAR_4 = FUNC_3(VAR_2, VAR_0, &VAR_5);
 if (VAR_4 == 0) {
     VAR_4 = FUNC_4(VAR_2, VAR_5, VAR_3);
     FUNC_5(VAR_5);
 }
    } else
 VAR_4 = FUNC_2(VAR_2, VAR_3);

    FUNC_1(&VAR_1);

    return (VAR_4);
}
