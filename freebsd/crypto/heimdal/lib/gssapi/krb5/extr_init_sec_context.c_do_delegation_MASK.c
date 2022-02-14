
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ krb5_error_code ;
typedef int krb5_data ;
struct TYPE_15__ {scalar_t__ endtime; } ;
struct TYPE_18__ {int forwarded; int forwardable; TYPE_8__* server; TYPE_8__* client; TYPE_1__ times; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef TYPE_5__* krb5_const_principal ;
typedef int krb5_ccache ;
typedef int krb5_auth_context ;
typedef int fwd_flags ;
typedef int creds ;
struct TYPE_20__ {int realm; } ;
struct TYPE_16__ {int len; int * val; } ;
struct TYPE_17__ {TYPE_2__ name_string; } ;
struct TYPE_19__ {TYPE_3__ name; } ;
typedef TYPE_4__ KDCOptions ;


 int FUNC_0 (TYPE_4__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ,int ,TYPE_8__**) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,int ,int ,TYPE_4__*,int *) ;
 scalar_t__ FUNC_5 (int ,TYPE_8__**,int ,int ,int ,int *) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void
FUNC_7 (krb5_context VAR_1,
        krb5_auth_context VAR_2,
        krb5_ccache VAR_3,
        krb5_creds *VAR_4,
        krb5_const_principal VAR_5,
        krb5_data *VAR_6,
        uint32_t VAR_7,
        uint32_t *VAR_8)
{
    krb5_creds VAR_9;
    KDCOptions VAR_10;
    krb5_error_code VAR_11;

    FUNC_6 (&VAR_9, 0, sizeof(VAR_9));
    FUNC_2 (VAR_6);

    VAR_11 = FUNC_1(VAR_1, VAR_3, &VAR_9.client);
    if (VAR_11)
 goto out;

    VAR_11 = FUNC_5(VAR_1,
          &VAR_9.server,
          VAR_9.client->realm,
          VAR_0,
          VAR_9.client->realm,
          ((void*)0));
    if (VAR_11)
 goto out;

    VAR_9.times.endtime = 0;

    FUNC_6(&VAR_10, 0, sizeof(VAR_10));
    VAR_10.forwarded = 1;
    VAR_10.forwardable = 1;

    if (
 VAR_5->name.name_string.len < 2)
 goto out;

    VAR_11 = FUNC_4(VAR_1,
        VAR_2,
        VAR_3,
        FUNC_0(VAR_10),
        VAR_5->name.name_string.val[1],
        &VAR_9,
        VAR_6);

 out:
    if (VAR_11)
 *VAR_8 &= ~VAR_7;
    else
 *VAR_8 |= VAR_7;

    if (VAR_9.client)
 FUNC_3(VAR_1, VAR_9.client);
    if (VAR_9.server)
 FUNC_3(VAR_1, VAR_9.server);
}
