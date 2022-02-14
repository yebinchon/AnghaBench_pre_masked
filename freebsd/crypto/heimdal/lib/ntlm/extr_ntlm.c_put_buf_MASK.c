
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int length; int data; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;

__attribute__((used)) static krb5_error_code
FUNC_2(krb5_storage *VAR_0, const struct ntlm_buf *VAR_1)
{
    krb5_error_code VAR_2;
    FUNC_0(FUNC_1(VAR_0, VAR_1->data, VAR_1->length), VAR_1->length);
    VAR_2 = 0;
out:
    return VAR_2;
}
