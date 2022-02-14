
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ time_t ;
typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ endtime; } ;
struct TYPE_8__ {TYPE_1__ times; int server; int client; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_const_realm ;
typedef int krb5_ccache ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int,scalar_t__,char*) ;
 int FUNC_3 (int ,TYPE_2__*) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (int ,int *,int ,int ,int ,int *) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8 (krb5_context VAR_2,
        krb5_ccache VAR_3,
        krb5_principal VAR_4,
        time_t *VAR_5)
{
    krb5_error_code VAR_6;
    krb5_creds VAR_7;
    krb5_creds VAR_8;
    krb5_const_realm VAR_9;
    int VAR_10;

    FUNC_0(&VAR_7);

    VAR_9 = FUNC_6(VAR_2, VAR_4);

    VAR_6 = FUNC_5 (VAR_2, &VAR_7.server,
          VAR_9, VAR_1, VAR_9, ((void*)0));
    if (VAR_6)
 FUNC_2 (VAR_2, 1, VAR_6, "krb5_make_principal");
    VAR_7.client = VAR_4;

    VAR_6 = FUNC_1 (VAR_2, VAR_3, 0, &VAR_7, &VAR_8);
    FUNC_4 (VAR_2, VAR_7.server);
    if (VAR_6) {
 if (VAR_6 == VAR_0)
     return 1;
 FUNC_2 (VAR_2, 1, VAR_6, "krb5_cc_retrieve_cred");
    }

    VAR_10 = FUNC_7(((void*)0)) > VAR_8.times.endtime;

    if (VAR_5)
 *VAR_5 = VAR_8.times.endtime;

    FUNC_3 (VAR_2, &VAR_8);

    return VAR_10;
}
