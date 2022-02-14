
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* require_preauth; void* encode_as_rep_as_tgs_rep; void* tgt_use_strongest_session_key; void* preauth_use_strongest_session_key; void* svc_use_strongest_session_key; void* use_strongest_server_key; void* check_ticket_addresses; void* allow_null_ticket_addresses; void* allow_anonymous; void* enable_pkinit; void* pkinit_princ_in_cert; void* pkinit_require_binding; int digests_allowed; void* pkinit_dh_min_bits; void* pkinit_kdc_friendly_name; void* pkinit_kdc_ocsp_file; void* pkinit_kdc_revoke; void* pkinit_kdc_cert_pool; void* pkinit_kdc_anchors; void* pkinit_kdc_identity; scalar_t__ kdc_warn_pwexpire; void* trpolicy; void* max_datagram_reply_length; void* enable_kx509; int * kx509_template; int * kx509_ca; void* enable_digest; int * logf; scalar_t__ num_db; int * db; } ;
typedef TYPE_1__ krb5_kdc_configuration ;
typedef int krb5_error_code ;
typedef int krb5_context ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_0 (int,int) ;
 int FUNC_1 (int ,TYPE_1__*,int ,char*,...) ;
 void* FUNC_2 (int ,int *,void*,char*,char*,int *) ;
 void* FUNC_3 (int ,int *,int,char*,char*,int *) ;
 void* FUNC_4 (int ,int *,char*,char*,int *) ;
 char* FUNC_5 (int ,int *,char*,char*,char*,int *) ;
 void* FUNC_6 (int ,int *,char*,char*,int *) ;
 scalar_t__ FUNC_7 (int ,int *,scalar_t__,char*,char*,int *) ;
 int FUNC_8 (int ,int ,char*) ;
 int FUNC_9 (char const*,int ,int ) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

krb5_error_code
FUNC_11(krb5_context VAR_7, krb5_kdc_configuration **VAR_8)
{
    krb5_kdc_configuration *VAR_9;

    VAR_9 = FUNC_0(1, sizeof(*VAR_9));
    if (VAR_9 == ((void*)0)) {
 FUNC_8(VAR_7, VAR_0, "malloc: out of memory");
 return VAR_0;
    }

    VAR_9->require_preauth = VAR_5;
    VAR_9->kdc_warn_pwexpire = 0;
    VAR_9->encode_as_rep_as_tgs_rep = VAR_1;
    VAR_9->tgt_use_strongest_session_key = VAR_1;
    VAR_9->preauth_use_strongest_session_key = VAR_1;
    VAR_9->svc_use_strongest_session_key = VAR_1;
    VAR_9->use_strongest_server_key = VAR_5;
    VAR_9->check_ticket_addresses = VAR_5;
    VAR_9->allow_null_ticket_addresses = VAR_5;
    VAR_9->allow_anonymous = VAR_1;
    VAR_9->trpolicy = VAR_3;
    VAR_9->enable_pkinit = VAR_1;
    VAR_9->pkinit_princ_in_cert = VAR_5;
    VAR_9->pkinit_require_binding = VAR_5;
    VAR_9->db = ((void*)0);
    VAR_9->num_db = 0;
    VAR_9->logf = ((void*)0);

    VAR_9->require_preauth =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->require_preauth,
         "kdc", "require-preauth", ((void*)0));
    VAR_9->tgt_use_strongest_session_key =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->tgt_use_strongest_session_key,
         "kdc",
         "tgt-use-strongest-session-key", ((void*)0));
    VAR_9->preauth_use_strongest_session_key =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->preauth_use_strongest_session_key,
         "kdc",
         "preauth-use-strongest-session-key", ((void*)0));
    VAR_9->svc_use_strongest_session_key =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->svc_use_strongest_session_key,
         "kdc",
         "svc-use-strongest-session-key", ((void*)0));
    VAR_9->use_strongest_server_key =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->use_strongest_server_key,
         "kdc",
         "use-strongest-server-key", ((void*)0));

    VAR_9->check_ticket_addresses =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->check_ticket_addresses,
         "kdc",
         "check-ticket-addresses", ((void*)0));
    VAR_9->allow_null_ticket_addresses =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->allow_null_ticket_addresses,
         "kdc",
         "allow-null-ticket-addresses", ((void*)0));

    VAR_9->allow_anonymous =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->allow_anonymous,
         "kdc",
         "allow-anonymous", ((void*)0));

    VAR_9->max_datagram_reply_length =
 FUNC_3(VAR_7,
        ((void*)0),
        1400,
        "kdc",
        "max-kdc-datagram-reply-length",
        ((void*)0));

    {
 const char *VAR_10;

 VAR_10 =
     FUNC_5(VAR_7, ((void*)0), "DEFAULT", "kdc",
        "transited-policy", ((void*)0));
 if(FUNC_10(VAR_10, "always-check") == 0) {
     VAR_9->trpolicy = VAR_3;
 } else if(FUNC_10(VAR_10, "allow-per-principal") == 0) {
     VAR_9->trpolicy = VAR_2;
 } else if(FUNC_10(VAR_10, "always-honour-request") == 0) {
     VAR_9->trpolicy = VAR_4;
 } else if(FUNC_10(VAR_10, "DEFAULT") == 0) {

 } else {
     FUNC_1(VAR_7, VAR_9, 0,
      "unknown transited-policy: %s, "
      "reverting to default (always-check)",
      VAR_10);
 }
    }

    VAR_9->encode_as_rep_as_tgs_rep =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->encode_as_rep_as_tgs_rep,
         "kdc",
         "encode_as_rep_as_tgs_rep", ((void*)0));

    VAR_9->kdc_warn_pwexpire =
 FUNC_7 (VAR_7, ((void*)0),
          VAR_9->kdc_warn_pwexpire,
          "kdc", "kdc_warn_pwexpire", ((void*)0));


    VAR_9->enable_pkinit =
 FUNC_2(VAR_7,
         ((void*)0),
         VAR_9->enable_pkinit,
         "kdc",
         "enable-pkinit",
         ((void*)0));


    VAR_9->pkinit_kdc_identity =
 FUNC_4(VAR_7, ((void*)0),
          "kdc", "pkinit_identity", ((void*)0));
    VAR_9->pkinit_kdc_anchors =
 FUNC_4(VAR_7, ((void*)0),
          "kdc", "pkinit_anchors", ((void*)0));
    VAR_9->pkinit_kdc_cert_pool =
 FUNC_6(VAR_7, ((void*)0),
    "kdc", "pkinit_pool", ((void*)0));
    VAR_9->pkinit_kdc_revoke =
 FUNC_6(VAR_7, ((void*)0),
    "kdc", "pkinit_revoke", ((void*)0));
    VAR_9->pkinit_kdc_ocsp_file =
 FUNC_4(VAR_7, ((void*)0),
          "kdc", "pkinit_kdc_ocsp", ((void*)0));
    VAR_9->pkinit_kdc_friendly_name =
 FUNC_4(VAR_7, ((void*)0),
          "kdc", "pkinit_kdc_friendly_name", ((void*)0));
    VAR_9->pkinit_princ_in_cert =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->pkinit_princ_in_cert,
         "kdc",
         "pkinit_principal_in_certificate",
         ((void*)0));
    VAR_9->pkinit_require_binding =
 FUNC_2(VAR_7, ((void*)0),
         VAR_9->pkinit_require_binding,
         "kdc",
         "pkinit_win2k_require_binding",
         ((void*)0));
    VAR_9->pkinit_dh_min_bits =
 FUNC_3(VAR_7, ((void*)0),
        0,
        "kdc", "pkinit_dh_min_bits", ((void*)0));

    *VAR_8 = VAR_9;

    return 0;
}
