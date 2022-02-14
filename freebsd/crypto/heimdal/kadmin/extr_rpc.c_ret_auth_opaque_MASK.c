
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct opaque_auth {int data; int flavor; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_storage *VAR_0, struct opaque_auth *VAR_1)
{
    krb5_error_code VAR_2;
    VAR_2 = FUNC_0(VAR_0, &VAR_1->flavor);
    if (VAR_2) return VAR_2;
    VAR_2 = FUNC_1(VAR_0, &VAR_1->data);
    return VAR_2;
}
