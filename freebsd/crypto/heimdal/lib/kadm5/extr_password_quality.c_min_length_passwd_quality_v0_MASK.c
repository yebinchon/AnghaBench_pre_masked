
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int message ;
typedef int krb5_principal ;
typedef int krb5_data ;
typedef int krb5_context ;


 int FUNC_0 (int ,int ,int *,int *,char*,int) ;

__attribute__((used)) static const char *
FUNC_1 (krb5_context VAR_0,
         krb5_principal VAR_1,
         krb5_data *VAR_2)
{
    static char VAR_3[1024];
    int VAR_4;

    VAR_3[0] = '\0';

    VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, ((void*)0),
        VAR_3, sizeof(VAR_3));
    if (VAR_4)
 return VAR_3;
    return ((void*)0);
}
