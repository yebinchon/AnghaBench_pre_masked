
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int this_cred ;
typedef scalar_t__ krb5_timestamp ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_12__ {int keytype; } ;
struct TYPE_11__ {scalar_t__ endtime; } ;
struct TYPE_14__ {TYPE_2__ session; TYPE_1__ times; int * server; int client; } ;
typedef TYPE_4__ krb5_creds ;
typedef int krb5_context ;
typedef int krb5_ccache ;
typedef TYPE_5__* gsskrb5_ctx ;
typedef int gss_name_t ;
struct TYPE_13__ {int endtime; } ;
struct TYPE_16__ {TYPE_3__ times; } ;
struct TYPE_15__ {int lifetime; TYPE_8__* kcred; int * target; int source; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int,int ,int const,int **) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,scalar_t__*) ;
 int FUNC_2 (int ,TYPE_8__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int ,TYPE_4__*,TYPE_8__**) ;
 int FUNC_5 (int ,scalar_t__*) ;
 int FUNC_6 (TYPE_4__*,int ,int) ;

__attribute__((used)) static OM_uint32
FUNC_7(
        OM_uint32 * VAR_5,
 krb5_context VAR_6,
 krb5_ccache VAR_7,
 gsskrb5_ctx VAR_8,
 const gss_name_t VAR_9,
 int VAR_10,
 OM_uint32 VAR_11,
 OM_uint32 * VAR_12)
{
    OM_uint32 VAR_13;
    krb5_error_code VAR_14;
    krb5_creds VAR_15;
    OM_uint32 VAR_16;

    if (VAR_8->target) {
 FUNC_3(VAR_6, VAR_8->target);
 VAR_8->target = ((void*)0);
    }
    if (VAR_8->kcred) {
 FUNC_2(VAR_6, VAR_8->kcred);
 VAR_8->kcred = ((void*)0);
    }

    VAR_13 = FUNC_0(VAR_5, VAR_6, VAR_10,
         VAR_8->source, VAR_9, &VAR_8->target);
    if (VAR_13)
 return VAR_13;

    FUNC_6(&VAR_15, 0, sizeof(VAR_15));
    VAR_15.client = VAR_8->source;
    VAR_15.server = VAR_8->target;

    if (VAR_11 && VAR_11 != VAR_0) {
 krb5_timestamp VAR_17;

 FUNC_5 (VAR_6, &VAR_17);
 VAR_15.times.endtime = VAR_17 + VAR_11;
    } else {
 VAR_15.times.endtime = 0;
    }

    VAR_15.session.keytype = VAR_4;

    VAR_14 = FUNC_4(VAR_6,
    0,
    VAR_7,
    &VAR_15,
    &VAR_8->kcred);
    if (VAR_14) {
 *VAR_5 = VAR_14;
 return VAR_3;
    }

    VAR_8->lifetime = VAR_8->kcred->times.endtime;

    VAR_13 = FUNC_1(VAR_5, VAR_6,
     VAR_8->lifetime, &VAR_16);
    if (VAR_13) return VAR_13;

    if (VAR_16 == 0) {
 *VAR_5 = 0;
 return VAR_2;
    }

    if (VAR_12) *VAR_12 = VAR_16;

    return VAR_1;
}
