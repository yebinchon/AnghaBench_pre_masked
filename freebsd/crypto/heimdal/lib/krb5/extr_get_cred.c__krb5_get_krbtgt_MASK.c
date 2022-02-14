
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp_cred ;
typedef int krb5_realm ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_6__ {int server; int client; } ;
typedef TYPE_1__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ,TYPE_1__*,TYPE_1__**) ;
 scalar_t__ FUNC_3 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

krb5_error_code
FUNC_5(krb5_context VAR_2,
   krb5_ccache VAR_3,
   krb5_realm VAR_4,
   krb5_creds **VAR_5)
{
    krb5_error_code VAR_6;
    krb5_creds VAR_7;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));

    VAR_6 = FUNC_0(VAR_2, VAR_3, &VAR_7.client);
    if (VAR_6)
 return VAR_6;

    VAR_6 = FUNC_3(VAR_2,
         &VAR_7.server,
         VAR_4,
         VAR_1,
         VAR_4,
         ((void*)0));
    if(VAR_6) {
 FUNC_1(VAR_2, VAR_7.client);
 return VAR_6;
    }
    VAR_6 = FUNC_2(VAR_2,
          VAR_0,
          VAR_3,
          &VAR_7,
          VAR_5);
    FUNC_1(VAR_2, VAR_7.client);
    FUNC_1(VAR_2, VAR_7.server);
    if(VAR_6)
 return VAR_6;
    return 0;
}
