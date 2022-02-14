
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ntlm_buf {int length; int data; } ;
typedef int krb5_storage ;
typedef scalar_t__ krb5_error_code ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (char const*,int ,struct ntlm_buf*) ;
 int FUNC_2 (struct ntlm_buf*) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_6(krb5_storage *VAR_0, int VAR_1, const char *VAR_2)
{
    krb5_error_code VAR_3;
    struct ntlm_buf VAR_4;

    if (VAR_1) {
 VAR_3 = FUNC_1(VAR_2, 0, &VAR_4);
 if (VAR_3)
     return VAR_3;
    } else {
 VAR_4.data = FUNC_4(VAR_2);
 VAR_4.length = FUNC_5(VAR_2);
    }

    FUNC_0(FUNC_3(VAR_0, VAR_4.data, VAR_4.length), VAR_4.length);
    if (VAR_1)
 FUNC_2(&VAR_4);
    VAR_3 = 0;
out:
    return VAR_3;
}
