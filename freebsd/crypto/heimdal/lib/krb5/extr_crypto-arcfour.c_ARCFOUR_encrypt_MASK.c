
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _krb5_key_data {int dummy; } ;
typedef int krb5_error_code ;
typedef int krb5_context ;
typedef scalar_t__ krb5_boolean ;


 int FUNC_0 (int ,struct _krb5_key_data*,void*,size_t,unsigned int,void*) ;
 int FUNC_1 (int ,struct _krb5_key_data*,void*,size_t,unsigned int,void*) ;
 int FUNC_2 (int ,unsigned int*) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_context VAR_0,
  struct _krb5_key_data *VAR_1,
  void *VAR_2,
  size_t VAR_3,
  krb5_boolean VAR_4,
  int VAR_5,
  void *VAR_6)
{
    krb5_error_code VAR_7;
    unsigned VAR_8 = VAR_5;

    if((VAR_7 = FUNC_2 (VAR_0, &VAR_8)) != 0)
 return VAR_7;

    if (VAR_4)
 return FUNC_1 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_8, VAR_6);
    else
 return FUNC_0 (VAR_0, VAR_1, VAR_2, VAR_3, VAR_8, VAR_6);
}
