
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_7__ ;
typedef struct TYPE_34__ TYPE_6__ ;
typedef struct TYPE_33__ TYPE_5__ ;
typedef struct TYPE_32__ TYPE_4__ ;
typedef struct TYPE_31__ TYPE_3__ ;
typedef struct TYPE_30__ TYPE_2__ ;
typedef struct TYPE_29__ TYPE_21__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_11__ ;


typedef int uint32_t ;
typedef int u_char ;
typedef int krb5_flags ;
typedef int krb5_error_code ;
typedef int krb5_enctype ;
struct TYPE_32__ {int length; int* data; } ;
typedef TYPE_4__ krb5_data ;
typedef int krb5_context ;
typedef int int32_t ;
typedef TYPE_5__* gsskrb5_ctx ;
typedef TYPE_6__* gsskrb5_cred ;
typedef int gss_channel_bindings_t ;
typedef TYPE_7__* gss_buffer_t ;
typedef int gss_OID ;
struct TYPE_35__ {int* value; int length; } ;
struct TYPE_34__ {int cred_flags; } ;
struct TYPE_33__ {int flags; int more_flags; int * ccache; int state; TYPE_11__* kcred; TYPE_21__* auth_context; int * target; int deleg_auth_context; } ;
struct TYPE_31__ {int keytype; } ;
struct TYPE_28__ {scalar_t__ ok_as_delegate; } ;
struct TYPE_30__ {TYPE_1__ b; } ;
struct TYPE_29__ {TYPE_3__* keyblock; } ;
struct TYPE_27__ {TYPE_2__ flags; } ;
typedef int OM_uint32 ;
typedef int Checksum ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int*,int const,int,TYPE_4__*,int *) ;
 int FUNC_1 (int*,TYPE_4__*,TYPE_7__*,int*,int ) ;
 int FUNC_2 (int ,TYPE_21__*,int ,TYPE_11__*,int *,TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ,int *,TYPE_11__*,int *,TYPE_4__*,int,int*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int*,TYPE_5__*,int ) ;
 int FUNC_6 (int ,int ,TYPE_11__*,int ,TYPE_4__,TYPE_4__*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *,int *,char*,TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ,int*,int *) ;
 int FUNC_12 (int ,int,int) ;

__attribute__((used)) static OM_uint32
FUNC_13
(OM_uint32 * VAR_21,
 gsskrb5_cred VAR_22,
 gsskrb5_ctx VAR_23,
 krb5_context VAR_24,
 OM_uint32 VAR_25,
 const gss_channel_bindings_t VAR_26,
 const gss_buffer_t VAR_27,
 gss_OID * VAR_28,
 gss_buffer_t VAR_29,
 OM_uint32 * VAR_30,
 OM_uint32 * VAR_31
    )
{
    OM_uint32 VAR_32 = VAR_17;
    krb5_error_code VAR_33;
    krb5_flags VAR_34;
    krb5_data VAR_35;
    uint32_t VAR_36;
    krb5_data VAR_37;
    Checksum VAR_38;
    krb5_enctype VAR_39;
    krb5_data VAR_40, VAR_41;
    int32_t VAR_42 = 0, VAR_43 = 0;
    uint32_t VAR_44;

    FUNC_10(&VAR_35);
    FUNC_10(&VAR_40);

    *VAR_21 = 0;





    if (!VAR_23->kcred->flags.b.ok_as_delegate) {
 krb5_data VAR_45;

 VAR_32 = FUNC_8(VAR_24, VAR_23->ccache, ((void*)0),
     "realm-config", &VAR_45);
 if (VAR_32 == 0) {

     if (VAR_45.length < 1 || ((((unsigned char *)VAR_45.data)[0]) & 1) == 0)
  VAR_25 &= ~(VAR_6|VAR_7);
     FUNC_9(&VAR_45);
 }
    }

    VAR_44 = 0;


    if ((VAR_25 & VAR_7)
 && VAR_23->kcred->flags.b.ok_as_delegate)
 VAR_44 |= VAR_6 | VAR_7;

    if (VAR_25 & VAR_6)
 VAR_44 |= VAR_6;


    VAR_36 = 0;
    VAR_34 = 0;
    if (VAR_44 & VAR_6) {
 FUNC_3 (VAR_24,
         VAR_23->deleg_auth_context,
         VAR_23->ccache, VAR_23->kcred, VAR_23->target,
         &VAR_40, VAR_44, &VAR_36);
    }

    if (VAR_25 & VAR_11) {
 VAR_36 |= VAR_11;
 VAR_34 |= VAR_0;
    }

    if (VAR_25 & VAR_12)
 VAR_36 |= VAR_12;
    if (VAR_25 & VAR_13)
 VAR_36 |= VAR_13;




    if (VAR_25 & VAR_5) {

 VAR_36 |= VAR_5 | VAR_11;
 VAR_34 |= VAR_0;
    }
    if (VAR_25 & VAR_9)
 VAR_36 |= VAR_9;
    if (VAR_25 & VAR_8)
 VAR_36 |= VAR_8;

    if (VAR_25 & VAR_4) {
 VAR_36 |= VAR_4;
    }
    if (VAR_25 & VAR_10) {
 VAR_36 |= VAR_10;
    }
    if (VAR_22 == ((void*)0) || !(VAR_22->cred_flags & VAR_2)) {
 VAR_36 |= VAR_4;
 VAR_36 |= VAR_10;
    }
    VAR_36 |= VAR_14;

    if (VAR_30)
 *VAR_30 = VAR_36;
    VAR_23->flags = VAR_36;
    VAR_23->more_flags |= VAR_20;

    VAR_32 = FUNC_0 (VAR_21,
      VAR_26,
      VAR_36,
      &VAR_40,
      &VAR_38);
    FUNC_9 (&VAR_40);
    if (VAR_32)
 goto failure;

    VAR_39 = VAR_23->auth_context->keyblock->keytype;

    VAR_32 = FUNC_8(VAR_24, VAR_23->ccache, VAR_23->target,
        "time-offset", &VAR_41);
    if (VAR_32 == 0) {
 if (VAR_41.length == 4) {
     const u_char *VAR_46 = VAR_41.data;
     VAR_42 = (VAR_46[0] <<24) | (VAR_46[1] << 16) | (VAR_46[2] << 8) | (VAR_46[3] << 0);
 }
 FUNC_9(&VAR_41);
    }

    if (VAR_42) {
 FUNC_11 (VAR_24, &VAR_43, ((void*)0));
 FUNC_12 (VAR_24, VAR_42, -1);
    }

    VAR_33 = FUNC_2(VAR_24,
         VAR_23->auth_context,
         VAR_39,
         VAR_23->kcred,
         &VAR_38,
         &VAR_37,
         VAR_19);

    if (VAR_33) {
 if (VAR_42)
     FUNC_12 (VAR_24, VAR_43, -1);
 *VAR_21 = VAR_33;
 VAR_32 = VAR_17;
 goto failure;
    }

    VAR_33 = FUNC_6 (VAR_24,
         VAR_39,
         VAR_23->kcred,
         VAR_34,
         VAR_37,
         &VAR_35);
    if (VAR_42)
 FUNC_12 (VAR_24, VAR_43, -1);
    if (VAR_33) {
 *VAR_21 = VAR_33;
 VAR_32 = VAR_17;
 goto failure;
    }

    if (VAR_36 & VAR_5) {
 VAR_29->value = VAR_35.data;
 VAR_29->length = VAR_35.length;
    } else {
        VAR_32 = FUNC_1 (VAR_21, &VAR_35, VAR_29,
        (u_char *)(intptr_t)"\x01\x00",
        VAR_15);
 FUNC_9 (&VAR_35);
 if (VAR_32)
     goto failure;
    }

    FUNC_4(&VAR_38);

    if (VAR_36 & VAR_11) {
 VAR_23->state = VAR_18;
 return VAR_16;
    }

    return FUNC_5(VAR_21, VAR_23, VAR_24);
failure:
    if (VAR_23->ccache && (VAR_23->more_flags & VAR_1))
 FUNC_7(VAR_24, VAR_23->ccache);
    VAR_23->ccache = ((void*)0);

    return VAR_32;
}
