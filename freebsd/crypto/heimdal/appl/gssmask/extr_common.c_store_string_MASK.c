
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int krb5_storage ;
typedef size_t krb5_error_code ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *,char const*,size_t) ;
 size_t FUNC_1 (int *,size_t) ;
 int FUNC_2 (char const*) ;

krb5_error_code
FUNC_3(krb5_storage *VAR_1, const char *VAR_2)
{
    size_t VAR_3 = FUNC_2(VAR_2) + 1;
    krb5_error_code VAR_4;

    VAR_4 = FUNC_1(VAR_1, VAR_3);
    if (VAR_4)
 return VAR_4;
    VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
    if (VAR_4 != VAR_3)
 return VAR_0;
    return 0;
}
