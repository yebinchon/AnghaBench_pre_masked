
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct krb5_krbhst_info {int dummy; } ;
struct krb5_krbhst_data {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 int FUNC_0 (struct krb5_krbhst_data*,struct krb5_krbhst_info*) ;
 struct krb5_krbhst_info* FUNC_1 (int ,struct krb5_krbhst_data*,char const*,int,int) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_context VAR_1, struct krb5_krbhst_data *VAR_2,
     const char *VAR_3, int VAR_4, int VAR_5)
{
    struct krb5_krbhst_info *VAR_6;

    VAR_6 = FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);
    if(VAR_6 == ((void*)0))
 return VAR_0;

    FUNC_0(VAR_2, VAR_6);
    return 0;
}
