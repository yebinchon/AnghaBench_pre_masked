
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_creds ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int ,int const*,int **) ;
 int FUNC_2 (int ,int ,int ) ;
 int ** FUNC_3 (int **,int) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1, krb5_creds const *VAR_2, krb5_creds ***VAR_3)
{
    int VAR_4;
    krb5_error_code VAR_5;
    krb5_creds **VAR_6 = *VAR_3;

    for(VAR_4 = 0; VAR_6 && VAR_6[VAR_4]; VAR_4++);
    VAR_6 = FUNC_3(VAR_6, (VAR_4+2)*sizeof(*VAR_6));
    if(VAR_6 == ((void*)0)) {
 FUNC_2(VAR_1, VAR_0,
          FUNC_0("malloc: out of memory", ""));
 return VAR_0;
    }
    *VAR_3 = VAR_6;
    VAR_5 = FUNC_1(VAR_1, VAR_2, &VAR_6[VAR_4]);
    VAR_6[VAR_4+1] = ((void*)0);
    return VAR_5;
}
