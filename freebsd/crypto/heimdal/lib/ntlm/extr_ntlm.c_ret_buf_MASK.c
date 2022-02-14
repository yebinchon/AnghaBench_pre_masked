
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_buffer {int offset; int length; } ;
struct ntlm_buf {int length; int data; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_storage *VAR_1, struct sec_buffer *VAR_2, struct ntlm_buf *VAR_3)
{
    krb5_error_code VAR_4;

    VAR_3->data = FUNC_3(VAR_2->length);
    VAR_3->length = VAR_2->length;
    FUNC_0(FUNC_2(VAR_1, VAR_2->offset, VAR_0), VAR_2->offset);
    FUNC_0(FUNC_1(VAR_1, VAR_3->data, VAR_3->length), VAR_3->length);
    VAR_4 = 0;
out:
    return VAR_4;
}
