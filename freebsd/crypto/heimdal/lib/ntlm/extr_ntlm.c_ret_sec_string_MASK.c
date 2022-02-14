
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sec_buffer {int length; int offset; } ;
typedef int krb5_storage ;
typedef int krb5_error_code ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int,int ,char**) ;

__attribute__((used)) static krb5_error_code
FUNC_3(krb5_storage *VAR_1, int VAR_2, struct sec_buffer *VAR_3, char **VAR_4)
{
    krb5_error_code VAR_5 = 0;
    FUNC_0(FUNC_1(VAR_1, VAR_3->offset, VAR_0), VAR_3->offset);
    FUNC_0(FUNC_2(VAR_1, VAR_2, VAR_3->length, VAR_4), 0);
 out:
    return VAR_5;
}
