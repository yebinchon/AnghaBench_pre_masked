
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_error_code ;
typedef int krb5_context ;
typedef int krb5_address ;
typedef int b_str ;
typedef int a_str ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,int *) ;
 int FUNC_1 (int *,char*,int,size_t*) ;
 int FUNC_2 (int ,int ,char*,char const*,char*,char*) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_1,
       krb5_address *VAR_2,
       krb5_address *VAR_3,
       const char *VAR_4)
{
    char VAR_5[64], VAR_6[64];
    size_t VAR_7;

    if(FUNC_0 (VAR_1, VAR_2, VAR_3))
 return 0;

    FUNC_1 (VAR_2, VAR_5, sizeof(VAR_5), &VAR_7);
    FUNC_1 (VAR_3, VAR_6, sizeof(VAR_6), &VAR_7);
    FUNC_2(VAR_1, VAR_0,
      "%s: %s != %s", VAR_4, VAR_6, VAR_5);
    return VAR_0;
}
