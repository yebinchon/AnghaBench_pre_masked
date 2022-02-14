
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int server; int client; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int in ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ,char const*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

__attribute__((used)) static krb5_error_code
FUNC_5(krb5_context VAR_0,
  krb5_ccache VAR_1,
  krb5_principal VAR_2,
  const char *VAR_3)
{
    krb5_error_code VAR_4;
    krb5_creds VAR_5, *VAR_6;

    FUNC_4(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.client = VAR_2;
    VAR_4 = FUNC_3(VAR_0, VAR_3, &VAR_5.server);
    if(VAR_4)
 return VAR_4;
    VAR_4 = FUNC_2(VAR_0, 0, VAR_1, &VAR_5, &VAR_6);
    if(VAR_4 == 0)
 FUNC_0(VAR_0, VAR_6);
    FUNC_1(VAR_0, VAR_5.server);
    return VAR_4;
}
