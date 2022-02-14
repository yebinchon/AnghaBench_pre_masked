
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_39__ TYPE_9__ ;
typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;
typedef struct TYPE_30__ TYPE_10__ ;


typedef int ref ;
typedef int krb5_keyblock ;
struct TYPE_32__ {TYPE_1__* padata; } ;
struct TYPE_36__ {TYPE_2__ kdc_rep; } ;
typedef TYPE_6__ krb5_kdc_rep ;
typedef scalar_t__ krb5_error_code ;
struct TYPE_37__ {int length; int data; } ;
typedef TYPE_7__ krb5_data ;
typedef int krb5_crypto ;
typedef int krb5_context ;
typedef TYPE_8__* krb5_const_principal ;
typedef int ed ;
struct TYPE_39__ {char const** referred_realm; scalar_t__ requested_principal_name; } ;
struct TYPE_34__ {char** val; } ;
struct TYPE_35__ {TYPE_4__ name_string; } ;
struct TYPE_38__ {char const* realm; TYPE_5__ name; } ;
struct TYPE_33__ {size_t length; int data; } ;
struct TYPE_31__ {int len; int val; } ;
struct TYPE_30__ {TYPE_3__ padata_value; } ;
typedef TYPE_9__ PA_ServerReferralData ;
typedef TYPE_10__ PA_DATA ;
typedef TYPE_9__ EncryptedData ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,TYPE_8__*,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,size_t,TYPE_9__*,size_t*) ;
 scalar_t__ FUNC_3 (int ,int ,TYPE_9__*,size_t*) ;
 int FUNC_4 (TYPE_9__*) ;
 int FUNC_5 (TYPE_9__*) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int *,int ,int *) ;
 int FUNC_8 (TYPE_7__*) ;
 scalar_t__ FUNC_9 (int ,int ,int ,TYPE_9__*,TYPE_7__*) ;
 TYPE_10__* FUNC_10 (int ,int ,int ,int*) ;
 scalar_t__ FUNC_11 (int ,TYPE_8__*,TYPE_8__*) ;
 scalar_t__ FUNC_12 (int ,TYPE_8__*) ;
 scalar_t__ FUNC_13 (int ,TYPE_8__*,TYPE_8__*) ;
 int FUNC_14 (int ,scalar_t__,int ,...) ;
 int FUNC_15 (TYPE_9__*,int ,int) ;
 scalar_t__ FUNC_16 (char const*,char const*) ;

__attribute__((used)) static krb5_error_code
FUNC_17(krb5_context VAR_5,
        krb5_kdc_rep *VAR_6,
        unsigned VAR_7,
        krb5_const_principal VAR_8,
        krb5_const_principal VAR_9,
        krb5_keyblock * VAR_10)
{
    krb5_error_code VAR_11;
    PA_ServerReferralData VAR_12;
    krb5_crypto VAR_13;
    EncryptedData VAR_14;
    size_t VAR_15;
    krb5_data VAR_16;
    PA_DATA *VAR_17;
    int VAR_18 = 0, VAR_19;

    if (VAR_6->kdc_rep.padata == ((void*)0))
 goto noreferral;

    VAR_17 = FUNC_10(VAR_6->kdc_rep.padata->val,
     VAR_6->kdc_rep.padata->len,
     VAR_3, &VAR_18);
    if (VAR_17 == ((void*)0))
 goto noreferral;

    FUNC_15(&VAR_14, 0, sizeof(VAR_14));
    FUNC_15(&VAR_12, 0, sizeof(VAR_12));

    VAR_11 = FUNC_2(VAR_17->padata_value.data,
          VAR_17->padata_value.length,
          &VAR_14, &VAR_15);
    if (VAR_11)
 return VAR_11;
    if (VAR_15 != VAR_17->padata_value.length) {
 FUNC_4(&VAR_14);
 FUNC_14(VAR_5, VAR_1,
          FUNC_0("Referral EncryptedData wrong for realm %s",
      "realm"), VAR_8->realm);
 return VAR_1;
    }

    VAR_11 = FUNC_7(VAR_5, VAR_10, 0, &VAR_13);
    if (VAR_11) {
 FUNC_4(&VAR_14);
 return VAR_11;
    }

    VAR_11 = FUNC_9(VAR_5, VAR_13,
         VAR_2,
         &VAR_14, &VAR_16);
    FUNC_4(&VAR_14);
    FUNC_6(VAR_5, VAR_13);
    if (VAR_11)
 return VAR_11;

    VAR_11 = FUNC_3(VAR_16.data, VAR_16.length, &VAR_12, &VAR_15);
    if (VAR_11) {
 FUNC_8(&VAR_16);
 return VAR_11;
    }
    FUNC_8(&VAR_16);

    if (FUNC_16(VAR_8->realm, VAR_9->realm) != 0) {
 FUNC_5(&VAR_12);
 FUNC_14(VAR_5, VAR_1,
          FUNC_0("server ref realm mismatch, "
      "requested realm %s got back %s", ""),
          VAR_8->realm, VAR_9->realm);
 return VAR_1;
    }

    if (FUNC_12(VAR_5, VAR_9)) {
 const char *VAR_20 = VAR_9->name.name_string.val[1];

 if (VAR_12.referred_realm == ((void*)0)
     || FUNC_16(*VAR_12.referred_realm, VAR_20) != 0)
 {
     FUNC_5(&VAR_12);
     FUNC_14(VAR_5, VAR_1,
       FUNC_0("tgt returned with wrong ref", ""));
     return VAR_1;
 }
    } else if (FUNC_11(VAR_5, VAR_9, VAR_8) == 0) {
 FUNC_5(&VAR_12);
 FUNC_14(VAR_5, VAR_1,
          FUNC_0("req princ no same as returned", ""));
 return VAR_1;
    }

    if (VAR_12.requested_principal_name) {
 VAR_19 = FUNC_1(VAR_5,
          VAR_8,
          VAR_12.requested_principal_name);
 if (!VAR_19) {
     FUNC_5(&VAR_12);
     FUNC_14(VAR_5, VAR_1,
       FUNC_0("referred principal not same "
          "as requested", ""));
     return VAR_1;
 }
    } else if (VAR_7 & VAR_0) {
 FUNC_5(&VAR_12);
 FUNC_14(VAR_5, VAR_1,
          FUNC_0("Requested principal missing on AS-REQ", ""));
 return VAR_1;
    }

    FUNC_5(&VAR_12);

    return VAR_11;
noreferral:



    if (FUNC_11(VAR_5, VAR_8, VAR_9) != VAR_4 &&
 (FUNC_13(VAR_5, VAR_8, VAR_9) != VAR_4 &&
  FUNC_12(VAR_5, VAR_9) != VAR_4))
    {
 FUNC_14(VAR_5, VAR_1,
          FUNC_0("Not same server principal returned "
      "as requested", ""));
 return VAR_1;
    }
    return 0;
}
