
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int krb5_principal ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_7__ {scalar_t__ endtime; } ;
struct TYPE_8__ {TYPE_1__ times; int server; int client; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_const_realm ;
typedef int krb5_ccache ;
typedef int in_cred ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,int ,TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (int ,int *,int *,int ,int *,int *) ;
 int * FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_2__*,int ,int) ;

OM_uint32
FUNC_7(OM_uint32 *VAR_4,
     krb5_context VAR_5,
     krb5_ccache VAR_6,
     krb5_principal VAR_7,
     OM_uint32 *VAR_8)
{
    krb5_creds VAR_9, VAR_10;
    krb5_const_realm VAR_11;
    krb5_error_code VAR_12;

    FUNC_6(&VAR_9, 0, sizeof(VAR_9));
    VAR_9.client = VAR_7;

    VAR_11 = FUNC_5(VAR_5, VAR_7);
    if (VAR_11 == ((void*)0)) {
 FUNC_0 ();
 *VAR_4 = VAR_2;
 return VAR_1;
    }

    VAR_12 = FUNC_4(VAR_5, &VAR_9.server,
          VAR_11, VAR_3, VAR_11, ((void*)0));
    if (VAR_12) {
 *VAR_4 = VAR_12;
 return VAR_1;
    }

    VAR_12 = FUNC_1(VAR_5, VAR_6, 0, &VAR_9, &VAR_10);
    FUNC_3(VAR_5, VAR_9.server);
    if (VAR_12) {
 *VAR_4 = 0;
 *VAR_8 = 0;
 return VAR_0;
    }

    *VAR_8 = VAR_10.times.endtime;
    FUNC_2(VAR_5, &VAR_10);

    return VAR_0;
}
