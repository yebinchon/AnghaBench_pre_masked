
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ endtime; scalar_t__ starttime; } ;
struct TYPE_8__ {TYPE_1__ times; int server; int client; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef int in_cred ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,char const*,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_2__*,TYPE_2__**) ;
 int FUNC_5 (int ,scalar_t__,char*) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

__attribute__((used)) static time_t
FUNC_7(krb5_context VAR_1, krb5_ccache VAR_2,
  krb5_principal VAR_3, const char *VAR_4)
{
    krb5_creds VAR_5, *VAR_6;
    krb5_error_code VAR_7;
    time_t VAR_8;

    FUNC_6(&VAR_5, 0, sizeof(VAR_5));

    VAR_7 = FUNC_1(VAR_1, VAR_2, &VAR_5.client);
    if(VAR_7) {
 FUNC_5(VAR_1, VAR_7, "krb5_cc_get_principal");
 return 0;
    }
    VAR_7 = FUNC_0(VAR_1, VAR_5.client, VAR_4, &VAR_5.server);
    if(VAR_7) {
 FUNC_3(VAR_1, VAR_5.client);
 FUNC_5(VAR_1, VAR_7, "get_server");
 return 0;
    }

    VAR_7 = FUNC_4(VAR_1, VAR_0,
          VAR_2, &VAR_5, &VAR_6);
    FUNC_3(VAR_1, VAR_5.client);
    FUNC_3(VAR_1, VAR_5.server);
    if(VAR_7) {
 FUNC_5(VAR_1, VAR_7, "krb5_get_credentials");
 return 0;
    }
    VAR_8 = VAR_6->times.endtime - VAR_6->times.starttime;
    if (VAR_8 < 0)
 VAR_8 = 0;
    FUNC_2(VAR_1, VAR_6);
    return VAR_8;
}
