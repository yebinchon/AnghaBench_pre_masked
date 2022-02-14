
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ntlm_buf {int data; int length; } ;
typedef int krb5_error_code ;
struct TYPE_3__ {int data; int length; } ;
typedef TYPE_1__ krb5_data ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int *,char*,TYPE_1__*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static krb5_error_code
FUNC_4(krb5_context VAR_1, krb5_ccache VAR_2,
       const char *VAR_3, struct ntlm_buf *VAR_4)
{
    krb5_error_code VAR_5;
    krb5_data VAR_6;
    char *VAR_7;

    FUNC_0(&VAR_7, "ntlm-key-%s", VAR_3);
    if (VAR_7 == ((void*)0)) {
 FUNC_3(VAR_1);
 return VAR_0;
    }

    VAR_6.length = VAR_4->length;
    VAR_6.data = VAR_4->data;

    VAR_5 = FUNC_2(VAR_1, VAR_2, ((void*)0), VAR_7, &VAR_6);
    FUNC_1(VAR_7);
    return VAR_5;
}
