
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_15__ {int length; scalar_t__ data; } ;
typedef TYPE_3__ krb5_data ;
typedef int krb5_context ;
typedef TYPE_4__* gsskrb5_ctx ;
typedef TYPE_5__* gsskrb5_cred ;
typedef int gss_name_t ;
typedef int gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_17__ {int * enctypes; int * ccache; } ;
struct TYPE_16__ {int more_flags; int * ccache; TYPE_2__* kcred; int auth_context; int lifetime; int source; } ;
struct TYPE_13__ {int endtime; } ;
struct TYPE_14__ {int session; TYPE_1__ times; } ;
typedef scalar_t__ OM_uint32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__*,TYPE_4__*,int ) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__*,int ,int *,TYPE_4__*,int ,int,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int **) ;
 scalar_t__ FUNC_7 (int ,int *,int *,char*,TYPE_3__*) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*) ;
 int FUNC_11 (int ,int *) ;

__attribute__((used)) static OM_uint32
FUNC_12
(OM_uint32 * VAR_5,
 gsskrb5_cred VAR_6,
 gsskrb5_ctx VAR_7,
 krb5_context VAR_8,
 gss_name_t VAR_9,
 const gss_OID VAR_10,
 OM_uint32 VAR_11,
 OM_uint32 VAR_12,
 const gss_buffer_t VAR_13,
 gss_OID * VAR_14,
 gss_buffer_t VAR_15,
 OM_uint32 * VAR_16,
 OM_uint32 * VAR_17
    )
{
    OM_uint32 VAR_18 = VAR_4;
    krb5_error_code VAR_19;
    krb5_data VAR_20;
    krb5_data VAR_21;
    OM_uint32 VAR_22;
    int VAR_23 = 1;

    FUNC_10(&VAR_20);
    FUNC_10(&VAR_21);

    *VAR_5 = 0;

    if (VAR_14)
 *VAR_14 = VAR_1;

    if (VAR_6 == ((void*)0)) {
 VAR_19 = FUNC_6 (VAR_8, &VAR_7->ccache);
 if (VAR_19) {
     *VAR_5 = VAR_19;
     VAR_18 = VAR_4;
     goto failure;
 }
 VAR_7->more_flags |= VAR_0;
    } else
 VAR_7->ccache = VAR_6->ccache;

    VAR_19 = FUNC_8 (VAR_8, VAR_7->ccache, &VAR_7->source);
    if (VAR_19) {
 *VAR_5 = VAR_19;
 VAR_18 = VAR_4;
 goto failure;
    }







    {
 krb5_enctype *VAR_24 = ((void*)0);

 if (VAR_6 && VAR_6->enctypes)
     VAR_24 = VAR_6->enctypes;
 FUNC_11(VAR_8, VAR_24);
    }


    VAR_19 = FUNC_7(VAR_8, VAR_7->ccache, ((void*)0),
         "realm-config", &VAR_20);
    if (VAR_19 == 0) {

 if (VAR_20.length < 1 || ((((unsigned char *)VAR_20.data)[0]) & 2))
     VAR_23 = 0;
 FUNC_9(&VAR_20);
    }







    VAR_18 = FUNC_2(VAR_5, VAR_8, VAR_7->ccache,
       VAR_7, VAR_9, 0, VAR_12,
       VAR_17);
    if (VAR_18 && VAR_23)
 VAR_18 = FUNC_2(VAR_5, VAR_8, VAR_7->ccache,
    VAR_7, VAR_9, 1, VAR_12,
    VAR_17);
    if (VAR_18)
 goto failure;

    VAR_7->lifetime = VAR_7->kcred->times.endtime;

    VAR_18 = FUNC_0(VAR_5, VAR_7, VAR_8);
    if (VAR_18)
 goto failure;

    VAR_18 = FUNC_1(VAR_5,
     VAR_8,
     VAR_7->lifetime,
     &VAR_22);
    if (VAR_18)
 goto failure;

    if (VAR_22 == 0) {
 *VAR_5 = 0;
 VAR_18 = VAR_3;
 goto failure;
    }

    FUNC_4(VAR_8,
    VAR_7->auth_context,
    &VAR_7->kcred->session);

    VAR_19 = FUNC_3(VAR_8,
          VAR_7->auth_context,
          &VAR_7->kcred->session);
    if(VAR_19) {
 *VAR_5 = VAR_19;
 VAR_18 = VAR_4;
 goto failure;
    }

    return VAR_2;

failure:
    if (VAR_7->ccache && (VAR_7->more_flags & VAR_0))
 FUNC_5(VAR_8, VAR_7->ccache);
    VAR_7->ccache = ((void*)0);

    return VAR_18;

}
