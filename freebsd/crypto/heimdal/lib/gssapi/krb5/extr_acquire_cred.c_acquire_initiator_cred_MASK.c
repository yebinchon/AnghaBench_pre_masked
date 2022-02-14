
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int * krb5_principal ;
typedef int * krb5_keytab ;
typedef int krb5_get_init_creds_opt ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_11__ {int endtime; } ;
struct TYPE_12__ {int * client; TYPE_1__ times; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef int * krb5_ccache ;
typedef TYPE_3__* gsskrb5_cred ;
typedef int gss_name_t ;
typedef int gss_cred_usage_t ;
typedef scalar_t__ gss_const_OID ;
typedef TYPE_4__* gss_buffer_t ;
typedef int cred ;
struct TYPE_14__ {int value; } ;
struct TYPE_13__ {int * ccache; int lifetime; int * principal; int cred_flags; } ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int ,int **) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (int ,int *,int **) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ,int **) ;
 int FUNC_6 (int ,int *) ;
 scalar_t__ FUNC_7 (int ,int *,int **) ;
 scalar_t__ FUNC_8 (int ,int *,int *) ;
 scalar_t__ FUNC_9 (int ,int ,int *,int **) ;
 scalar_t__ FUNC_10 (int ,int *,TYPE_2__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_11 (int ,int *,int **) ;
 int FUNC_12 (int ,TYPE_2__*) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ,int **) ;
 scalar_t__ FUNC_15 (int ,TYPE_2__*,int *,int *,int ,int *,int *) ;
 scalar_t__ FUNC_16 (int ,int **) ;
 int FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int ,TYPE_2__*,int *,int ,int *,int *,int ,int *,int *) ;
 int FUNC_19 (int ,int *) ;
 scalar_t__ FUNC_20 (int ,int *,int *) ;
 int FUNC_21 (TYPE_2__*,int ,int) ;

__attribute__((used)) static OM_uint32 FUNC_22
    (OM_uint32 * VAR_8,
     krb5_context VAR_9,
     gss_const_OID VAR_10,
     const void *VAR_11,
     const gss_name_t VAR_12,
     OM_uint32 VAR_13,
     gss_const_OID VAR_14,
     gss_cred_usage_t VAR_15,
     gsskrb5_cred VAR_16
    )
{
    OM_uint32 VAR_17;
    krb5_creds VAR_18;
    krb5_principal VAR_19;
    krb5_get_init_creds_opt *VAR_20;
    krb5_ccache VAR_21;
    krb5_keytab VAR_22;
    krb5_error_code VAR_23;

    VAR_22 = ((void*)0);
    VAR_21 = ((void*)0);
    VAR_19 = ((void*)0);
    VAR_17 = VAR_5;
    FUNC_21(&VAR_18, 0, sizeof(VAR_18));







    if (VAR_10 != VAR_3 &&
 !FUNC_2(VAR_10, VAR_2)) {
 VAR_23 = VAR_6;
 goto end;
    }

    if (VAR_16->principal) {
 VAR_23 = FUNC_3 (VAR_9,
        VAR_16->principal,
        &VAR_21);
 if (VAR_23 == 0) {
     VAR_17 = VAR_4;
     goto found;
 }
    }

    if (VAR_21 == ((void*)0)) {
 VAR_23 = FUNC_5(VAR_9, &VAR_21);
 if (VAR_23)
     goto end;
    }
    VAR_23 = FUNC_7(VAR_9, VAR_21, &VAR_19);
    if (VAR_23 != 0) {

 FUNC_4(VAR_9, VAR_21);
 VAR_19 = ((void*)0);
 VAR_23 = 0;
    } else if (VAR_16->principal == ((void*)0)) {
 VAR_23 = FUNC_11(VAR_9, VAR_19, &VAR_16->principal);
 if (VAR_23)
     goto end;
    } else if (VAR_16->principal != ((void*)0) &&
        FUNC_20(VAR_9, VAR_16->principal,
          VAR_19) == VAR_0) {
 FUNC_13(VAR_9, VAR_19);
 VAR_19 = ((void*)0);
 FUNC_4(VAR_9, VAR_21);
 VAR_21 = ((void*)0);
    }
    if (VAR_19 == ((void*)0)) {



 if (VAR_16->principal == ((void*)0)) {
     VAR_23 = FUNC_14(VAR_9, &VAR_16->principal);
     if (VAR_23)
  goto end;
 }
 VAR_23 = FUNC_16(VAR_9, &VAR_20);
 if (VAR_23)
     goto end;
 if (VAR_10 != VAR_3 &&
     FUNC_2(VAR_10, VAR_2)) {
     gss_buffer_t VAR_24 = (gss_buffer_t)VAR_11;



     VAR_23 = FUNC_18(VAR_9, &VAR_18,
      VAR_16->principal,
      VAR_24->value,
      ((void*)0), ((void*)0), 0, ((void*)0), VAR_20);
 } else {
     VAR_23 = FUNC_1(VAR_9, &VAR_22);
     if (VAR_23) {
  FUNC_17(VAR_9, VAR_20);
  goto end;
     }
     VAR_23 = FUNC_15(VAR_9, &VAR_18,
           VAR_16->principal, VAR_22,
           0, ((void*)0), VAR_20);
 }
 FUNC_17(VAR_9, VAR_20);
 if (VAR_23)
     goto end;
 VAR_23 = FUNC_9(VAR_9, VAR_7,
      ((void*)0), &VAR_21);
 if (VAR_23)
     goto end;
 VAR_23 = FUNC_8(VAR_9, VAR_21, VAR_18.client);
 if (VAR_23) {
     FUNC_6(VAR_9, VAR_21);
     goto end;
 }
 VAR_23 = FUNC_10(VAR_9, VAR_21, &VAR_18);
 if (VAR_23) {
     FUNC_6(VAR_9, VAR_21);
     goto end;
 }
 VAR_16->lifetime = VAR_18.times.endtime;
 VAR_16->cred_flags |= VAR_1;
    } else {

 VAR_17 = FUNC_0(VAR_8,
     VAR_9,
     VAR_21,
     VAR_16->principal,
     &VAR_16->lifetime);
 if (VAR_17 != VAR_4) {
     FUNC_4(VAR_9, VAR_21);
     goto end;
 }
 VAR_23 = 0;
    }
 found:
    VAR_16->ccache = VAR_21;
    VAR_17 = VAR_4;

end:
    if (VAR_18.client != ((void*)0))
 FUNC_12(VAR_9, &VAR_18);
    if (VAR_19 != ((void*)0))
 FUNC_13(VAR_9, VAR_19);
    if (VAR_22 != ((void*)0))
 FUNC_19(VAR_9, VAR_22);
    if (VAR_17 != VAR_4 && VAR_23 != 0)
 *VAR_8 = VAR_23;
    return (VAR_17);
}
