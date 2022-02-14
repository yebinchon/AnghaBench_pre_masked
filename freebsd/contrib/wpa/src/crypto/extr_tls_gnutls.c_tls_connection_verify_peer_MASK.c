
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int hash_len; unsigned int depth; char* subject; int * hash; struct wpabuf* cert; } ;
union tls_event_data {TYPE_1__ peer_cert; void* data; int type; } ;
typedef int u8 ;
struct wpabuf {int dummy; } ;
struct tls_connection {int failed; TYPE_2__* global; int disable_time_checks; int domain_match; int suffix_match; scalar_t__ verify_peer; } ;
struct os_time {scalar_t__ sec; } ;
typedef int hash ;
typedef int gnutls_x509_crt_t ;
typedef union tls_event_data gnutls_typed_vdata_st ;
typedef int gnutls_session_t ;
struct TYPE_10__ {size_t size; int * data; } ;
typedef TYPE_3__ gnutls_datum_t ;
typedef int gnutls_alert_description_t ;
typedef int ev ;
typedef int data ;
struct TYPE_9__ {int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;int server; scalar_t__ cert_in_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_0 (struct tls_connection*,int ,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 TYPE_3__* FUNC_2 (int ,unsigned int*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,int,TYPE_3__*,int ) ;
 int FUNC_5 (int ,union tls_event_data*,int,unsigned int*) ;
 int FUNC_6 (int ,unsigned int*) ;
 int FUNC_7 (int *) ;
 struct tls_connection* FUNC_8 (int ) ;
 int FUNC_9 (struct tls_connection*,TYPE_3__ const*,unsigned int,char*,char*,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,char*,size_t*) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ,TYPE_3__ const*,int ) ;
 scalar_t__ FUNC_15 (int *) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (struct os_time*) ;
 char* FUNC_18 (size_t) ;
 int FUNC_19 (union tls_event_data*,int ,int) ;
 int FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int,int const**,size_t*,int *) ;
 int FUNC_22 (int ,int ,union tls_event_data*) ;
 int FUNC_23 (int ,int ,union tls_event_data*) ;
 int FUNC_24 (int ,int ,int) ;
 int FUNC_25 (int ,char*,...) ;
 struct wpabuf* FUNC_26 (int *,size_t) ;
 int FUNC_27 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_28(gnutls_session_t VAR_29)
{
 struct tls_connection *VAR_30;
 unsigned int VAR_31, VAR_32, VAR_33;
 struct os_time VAR_34;
 const gnutls_datum_t *VAR_35;
 gnutls_x509_crt_t VAR_36;
 gnutls_alert_description_t VAR_37;
 int VAR_38;

 VAR_30 = FUNC_8(VAR_29);
 if (!VAR_30->verify_peer) {
  FUNC_25(VAR_17,
      "GnuTLS: No peer certificate verification enabled");
  return 0;
 }

 FUNC_25(VAR_17, "GnuTSL: Verifying peer certificate");
 VAR_38 = FUNC_6(VAR_29, &VAR_31);

 if (VAR_38 < 0) {
  FUNC_25(VAR_18, "TLS: Failed to verify peer "
      "certificate chain");
  VAR_37 = VAR_5;
  goto out;
 }
 VAR_35 = FUNC_2(VAR_29, &VAR_32);
 if (VAR_35 == ((void*)0) || VAR_32 == 0) {
  FUNC_25(VAR_18, "TLS: No peer certificate chain received");
  VAR_37 = VAR_6;
  goto out;
 }

 if (VAR_30->verify_peer && (VAR_31 & VAR_9)) {
  FUNC_25(VAR_18, "TLS: Peer certificate not trusted");
  if (VAR_31 & VAR_8) {
   FUNC_25(VAR_18, "TLS: Certificate uses insecure "
       "algorithm");
   FUNC_9(VAR_30, ((void*)0), 0, ((void*)0),
           "certificate uses insecure algorithm",
           VAR_21);
   VAR_37 = VAR_4;
   goto out;
  }
  if (VAR_31 & VAR_10) {
   FUNC_25(VAR_18, "TLS: Certificate not yet "
       "activated");
   FUNC_9(VAR_30, ((void*)0), 0, ((void*)0),
           "certificate not yet valid",
           VAR_25);
   VAR_37 = VAR_2;
   goto out;
  }
  if (VAR_31 & VAR_7) {
   FUNC_25(VAR_18, "TLS: Certificate expired");
   FUNC_9(VAR_30, ((void*)0), 0, ((void*)0),
           "certificate has expired",
           VAR_24);
   VAR_37 = VAR_2;
   goto out;
  }
  FUNC_9(VAR_30, ((void*)0), 0, ((void*)0),
          "untrusted certificate",
          VAR_27);
  VAR_37 = VAR_5;
  goto out;
 }

 if (VAR_31 & VAR_12) {
  FUNC_25(VAR_18, "TLS: Peer certificate does not have a "
      "known issuer");
  FUNC_9(VAR_30, ((void*)0), 0, ((void*)0), "signed not found",
          VAR_27);
  VAR_37 = VAR_6;
  goto out;
 }

 if (VAR_31 & VAR_11) {
  FUNC_25(VAR_18, "TLS: Peer certificate has been revoked");
  FUNC_9(VAR_30, ((void*)0), 0, ((void*)0),
          "certificate revoked",
          VAR_26);
  VAR_37 = VAR_3;
  goto out;
 }

 if (VAR_31 != 0) {
  FUNC_25(VAR_18, "TLS: Unknown verification status: %d",
      VAR_31);
  VAR_37 = VAR_5;
  goto out;
 }

 if (FUNC_0(VAR_30, VAR_29, &VAR_37))
  goto out;

 FUNC_17(&VAR_34);

 for (VAR_33 = 0; VAR_33 < VAR_32; VAR_33++) {
  char *VAR_39;
  size_t VAR_40;
  if (FUNC_15(&VAR_36) < 0) {
   FUNC_25(VAR_18, "TLS: Certificate initialization "
       "failed");
   VAR_37 = VAR_1;
   goto out;
  }

  if (FUNC_14(VAR_36, &VAR_35[VAR_33],
        VAR_16) < 0) {
   FUNC_25(VAR_18, "TLS: Could not parse peer "
       "certificate %d/%d", VAR_33 + 1, VAR_32);
   FUNC_10(VAR_36);
   VAR_37 = VAR_1;
   goto out;
  }

  FUNC_12(VAR_36, ((void*)0), &VAR_40);
  VAR_40++;
  VAR_39 = FUNC_18(VAR_40 + 1);
  if (VAR_39) {
   VAR_39[0] = VAR_39[VAR_40] = '\0';
   FUNC_12(VAR_36, VAR_39, &VAR_40);
  }
  FUNC_25(VAR_17, "TLS: Peer cert chain %d/%d: %s",
      VAR_33 + 1, VAR_32, VAR_39);

  if (VAR_30->global->event_cb) {
   struct wpabuf *VAR_41 = ((void*)0);
   union tls_event_data VAR_42;






   FUNC_19(&VAR_42, 0, sizeof(VAR_42));
   if (VAR_30->global->cert_in_cb) {
    VAR_41 = FUNC_26(VAR_35[VAR_33].data,
            VAR_35[VAR_33].size);
    VAR_42.peer_cert.cert = VAR_41;
   }
   VAR_42.peer_cert.depth = VAR_33;
   VAR_42.peer_cert.subject = VAR_39;
   VAR_30->global->event_cb(VAR_30->global->cb_ctx,
            VAR_28, &VAR_42);
   FUNC_27(VAR_41);
  }

  if (VAR_33 == 0) {
   if (VAR_30->suffix_match &&
       !FUNC_24(VAR_36, VAR_30->suffix_match, 0)) {
    FUNC_25(VAR_19,
        "TLS: Domain suffix match '%s' not found",
        VAR_30->suffix_match);
    FUNC_9(
     VAR_30, &VAR_35[VAR_33], VAR_33, VAR_39,
     "Domain suffix mismatch",
     VAR_23);
    VAR_37 = VAR_1;
    FUNC_10(VAR_36);
    FUNC_16(VAR_39);
    goto out;
   }
   if (!VAR_30->global->server &&
       !FUNC_20(VAR_36)) {
    FUNC_25(VAR_19,
        "GnuTLS: No server EKU");
    FUNC_9(
     VAR_30, &VAR_35[VAR_33], VAR_33, VAR_39,
     "No server EKU",
     VAR_21);
    VAR_37 = VAR_1;
    FUNC_10(VAR_36);
    FUNC_16(VAR_39);
    goto out;
   }

  }

  if (!VAR_30->disable_time_checks &&
      (FUNC_13(VAR_36) < VAR_34.sec ||
       FUNC_11(VAR_36) > VAR_34.sec)) {
   FUNC_25(VAR_18, "TLS: Peer certificate %d/%d is "
       "not valid at this time",
       VAR_33 + 1, VAR_32);
   FUNC_9(
    VAR_30, &VAR_35[VAR_33], VAR_33, VAR_39,
    "Certificate is not valid at this time",
    VAR_24);
   FUNC_10(VAR_36);
   FUNC_16(VAR_39);
   VAR_37 = VAR_2;
   goto out;
  }

  FUNC_16(VAR_39);

  FUNC_10(VAR_36);
 }

 if (VAR_30->global->event_cb != ((void*)0))
  VAR_30->global->event_cb(VAR_30->global->cb_ctx,
           VAR_20, ((void*)0));

 return 0;

out:
 VAR_30->failed++;
 FUNC_1(VAR_29, VAR_0, VAR_37);
 return VAR_14;
}
