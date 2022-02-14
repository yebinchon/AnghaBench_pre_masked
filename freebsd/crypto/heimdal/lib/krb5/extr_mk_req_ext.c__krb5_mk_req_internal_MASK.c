
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int krb5_key_usage ;
typedef int krb5_flags ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_20__ {int length; int data; } ;
typedef TYPE_1__ krb5_data ;
typedef int * krb5_crypto ;
struct TYPE_21__ {int session; } ;
typedef TYPE_2__ krb5_creds ;
typedef int krb5_context ;
typedef TYPE_3__* krb5_auth_context ;
struct TYPE_23__ {scalar_t__ keytype; } ;
struct TYPE_22__ {TYPE_4__* keyblock; int * local_subkey; } ;
typedef int Checksum ;


 int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_0 (int ,TYPE_3__*,scalar_t__,TYPE_2__*,int *,TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (int ,TYPE_3__*,int *) ;
 scalar_t__ FUNC_4 (int ,TYPE_3__**) ;
 scalar_t__ FUNC_5 (int ,scalar_t__,TYPE_2__*,int const,TYPE_1__,TYPE_1__*) ;
 scalar_t__ FUNC_6 (int ,int *,TYPE_4__**) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int ,int ,int ,int *) ;
 int FUNC_8 (int ,int *) ;
 scalar_t__ FUNC_9 (int ,TYPE_4__*,int ,int **) ;
 int FUNC_10 (int ,TYPE_4__*) ;

krb5_error_code
FUNC_11(krb5_context VAR_8,
        krb5_auth_context *VAR_9,
        const krb5_flags VAR_10,
        krb5_data *VAR_11,
        krb5_creds *VAR_12,
        krb5_data *VAR_13,
        krb5_key_usage VAR_14,
        krb5_key_usage VAR_15)
{
    krb5_error_code VAR_16;
    krb5_data VAR_17;
    Checksum VAR_18;
    Checksum *VAR_19;
    krb5_auth_context VAR_20;

    if(VAR_9) {
 if(*VAR_9 == ((void*)0))
     VAR_16 = FUNC_4(VAR_8, VAR_9);
 else
     VAR_16 = 0;
 VAR_20 = *VAR_9;
    } else
 VAR_16 = FUNC_4(VAR_8, &VAR_20);
    if(VAR_16)
 return VAR_16;

    if(VAR_20->local_subkey == ((void*)0) && (VAR_10 & VAR_0)) {
 VAR_16 = FUNC_3(VAR_8,
      VAR_20,
      &VAR_12->session);
 if(VAR_16)
     goto out;
    }

    FUNC_10(VAR_8, VAR_20->keyblock);
    VAR_16 = FUNC_6(VAR_8, &VAR_12->session, &VAR_20->keyblock);
    if (VAR_16)
 goto out;






    if (VAR_11) {
 if(VAR_20->keyblock->keytype == VAR_5) {

     VAR_16 = FUNC_7(VAR_8,
           ((void*)0),
           0,
           VAR_1,
           VAR_11->data,
           VAR_11->length,
           &VAR_18);
 } else if(VAR_20->keyblock->keytype == VAR_3 ||
    VAR_20->keyblock->keytype == VAR_4 ||
    VAR_20->keyblock->keytype == VAR_6 ||
    VAR_20->keyblock->keytype == VAR_7) {

     VAR_16 = FUNC_7(VAR_8,
           ((void*)0),
           0,
           VAR_2,
           VAR_11->data,
           VAR_11->length,
           &VAR_18);
 } else {
     krb5_crypto VAR_21;

     VAR_16 = FUNC_9(VAR_8, VAR_20->keyblock, 0, &VAR_21);
     if (VAR_16)
  goto out;
     VAR_16 = FUNC_7(VAR_8,
           VAR_21,
           VAR_14,
           0,
           VAR_11->data,
           VAR_11->length,
           &VAR_18);
     FUNC_8(VAR_8, VAR_21);
 }
 VAR_19 = &VAR_18;
    } else {
 VAR_19 = ((void*)0);
    }

    if (VAR_16)
 goto out;

    VAR_16 = FUNC_0(VAR_8,
        VAR_20,
        VAR_20->keyblock->keytype,
        VAR_12,
        VAR_19,
        &VAR_17,
        VAR_15);
    if (VAR_19)
 FUNC_1 (VAR_19);
    if (VAR_16)
 goto out;

    VAR_16 = FUNC_5 (VAR_8, VAR_20->keyblock->keytype,
        VAR_12, VAR_10, VAR_17, VAR_13);
out:
    if(VAR_9 == ((void*)0))
 FUNC_2(VAR_8, VAR_20);
    return VAR_16;
}
