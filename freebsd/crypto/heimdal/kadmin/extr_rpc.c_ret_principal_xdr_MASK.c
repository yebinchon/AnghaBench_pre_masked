
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef int * krb5_principal ;
typedef int krb5_context ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,int **) ;
 int FUNC_3 (int *,char**) ;

__attribute__((used)) static int
FUNC_4(krb5_context VAR_0,
    krb5_storage *VAR_1,
    krb5_principal *VAR_2)
{
    char *VAR_3;
    *VAR_2 = ((void*)0);
    FUNC_0(FUNC_3(VAR_1, &VAR_3));
    if (VAR_3) {
 FUNC_0(FUNC_2(VAR_0, VAR_3, VAR_2));
 FUNC_1(VAR_3);
    }
    return 0;
}
