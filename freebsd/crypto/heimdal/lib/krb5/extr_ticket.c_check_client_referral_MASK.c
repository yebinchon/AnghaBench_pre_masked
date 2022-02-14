
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_8__ ;
typedef struct TYPE_26__ TYPE_7__ ;
typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


typedef int krb5_keyblock ;
struct TYPE_21__ {TYPE_1__* padata; } ;
struct TYPE_23__ {TYPE_2__ kdc_rep; } ;
typedef TYPE_4__ krb5_kdc_rep ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_24__ {size_t length; int data; } ;
typedef TYPE_5__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_6__* krb5_const_principal ;
struct TYPE_19__ {int mapped_name; int requested_name; } ;
struct TYPE_27__ {TYPE_18__ names; int canon_checksum; } ;
struct TYPE_22__ {int length; int data; } ;
struct TYPE_26__ {TYPE_3__ padata_value; } ;
struct TYPE_25__ {int realm; } ;
struct TYPE_20__ {int len; int val; } ;
typedef TYPE_7__ PA_DATA ;
typedef TYPE_8__ PA_ClientCanonicalized ;


 int FUNC_0 (int ,int ,size_t,TYPE_18__*,size_t*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,char*) ;
 int VAR_5 ;
 int FUNC_2 (int ,TYPE_6__*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_8__*,size_t*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,int const*,int ,int *) ;
 TYPE_7__* FUNC_9 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_10 (int ,TYPE_6__*,TYPE_6__*) ;
 int FUNC_11 (int ,scalar_t__,int ,...) ;
 scalar_t__ FUNC_12 (int ,int ,int ,int ,size_t,int *) ;

__attribute__((used)) static krb5_error_code
FUNC_13(krb5_context VAR_6,
        krb5_kdc_rep *VAR_7,
        krb5_const_principal VAR_8,
        krb5_const_principal VAR_9,
        krb5_keyblock const * VAR_10)
{
    krb5_error_code VAR_11;
    PA_ClientCanonicalized VAR_12;
    krb5_crypto VAR_13;
    krb5_data VAR_14;
    PA_DATA *VAR_15;
    size_t VAR_16;
    int VAR_17 = 0;

    if (VAR_7->kdc_rep.padata == ((void*)0))
 goto noreferral;

    VAR_15 = FUNC_9(VAR_7->kdc_rep.padata->val,
     VAR_7->kdc_rep.padata->len,
     VAR_3, &VAR_17);
    if (VAR_15 == ((void*)0))
 goto noreferral;

    VAR_11 = FUNC_3(VAR_15->padata_value.data,
     VAR_15->padata_value.length,
     &VAR_12, &VAR_16);
    if (VAR_11) {
 FUNC_11(VAR_6, VAR_11,
          FUNC_1("Failed to decode ClientCanonicalized "
      "from realm %s", ""), VAR_8->realm);
 return VAR_11;
    }

    FUNC_0(VAR_5, VAR_14.data, VAR_14.length,
         &VAR_12.names, &VAR_16, VAR_11);
    if (VAR_11) {
 FUNC_5(&VAR_12);
 return VAR_11;
    }
    if (VAR_14.length != VAR_16)
 FUNC_6(VAR_6, "internal asn.1 error");

    VAR_11 = FUNC_8(VAR_6, VAR_10, 0, &VAR_13);
    if (VAR_11) {
 FUNC_4(VAR_14.data);
 FUNC_5(&VAR_12);
 return VAR_11;
    }

    VAR_11 = FUNC_12(VAR_6, VAR_13, VAR_2,
          VAR_14.data, VAR_14.length,
          &VAR_12.canon_checksum);
    FUNC_7(VAR_6, VAR_13);
    FUNC_4(VAR_14.data);
    if (VAR_11) {
 FUNC_11(VAR_6, VAR_11,
          FUNC_1("Failed to verify client canonicalized "
      "data from realm %s", ""),
          VAR_8->realm);
 FUNC_5(&VAR_12);
 return VAR_11;
    }

    if (!FUNC_2(VAR_6,
            VAR_8,
            &VAR_12.names.requested_name))
    {
 FUNC_5(&VAR_12);
 FUNC_11(VAR_6, VAR_4,
          FUNC_1("Requested name doesn't match"
      " in client referral", ""));
 return VAR_4;
    }
    if (!FUNC_2(VAR_6,
            VAR_9,
            &VAR_12.names.mapped_name))
    {
 FUNC_5(&VAR_12);
 FUNC_11(VAR_6, VAR_4,
          FUNC_1("Mapped name doesn't match"
      " in client referral", ""));
 return VAR_4;
    }

    return 0;

noreferral:
    if (FUNC_10(VAR_6, VAR_8, VAR_9) == VAR_0) {
 FUNC_11(VAR_6, VAR_1,
          FUNC_1("Not same client principal returned "
      "as requested", ""));
 return VAR_1;
    }
    return 0;
}
