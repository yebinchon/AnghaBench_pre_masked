
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_4__ {int client; int server; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef scalar_t__ krb5_const_principal ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int ,int ,char const*,char*,int *) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,char**) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_7(krb5_context VAR_2, krb5_ccache VAR_3,
        krb5_const_principal VAR_4,
        const char *VAR_5, krb5_creds *VAR_6)
{
    krb5_principal VAR_7;
    krb5_error_code VAR_8;
    char *VAR_9 = ((void*)0);

    FUNC_6(VAR_6, 0, sizeof(*VAR_6));

    VAR_8 = FUNC_1(VAR_2, VAR_3, &VAR_7);
    if (VAR_8)
 return VAR_8;

    if (VAR_4) {
 VAR_8 = FUNC_5(VAR_2, VAR_4, &VAR_9);
 if (VAR_8)
     return VAR_8;
    }

    VAR_8 = FUNC_4(VAR_2, &VAR_6->server,
         VAR_1,
         VAR_0, VAR_5, VAR_9, ((void*)0));
    FUNC_0(VAR_9);
    if (VAR_8) {
 FUNC_3(VAR_2, VAR_7);
 return VAR_8;
    }
    VAR_8 = FUNC_2(VAR_2, VAR_7, &VAR_6->client);
    FUNC_3(VAR_2, VAR_7);
    return VAR_8;
}
