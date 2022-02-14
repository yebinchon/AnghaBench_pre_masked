
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_buffer {int offset; int allocated; int length; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_storage *VAR_0, struct sec_buffer *VAR_1)
{
    krb5_error_code VAR_2;
    FUNC_0(FUNC_1(VAR_0, &VAR_1->length), 0);
    FUNC_0(FUNC_1(VAR_0, &VAR_1->allocated), 0);
    FUNC_0(FUNC_2(VAR_0, &VAR_1->offset), 0);
out:
    return VAR_2;
}
