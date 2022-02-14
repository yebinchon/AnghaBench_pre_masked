
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* reason_txt; char* subject; int reason; } ;
union tls_event_data {TYPE_1__ cert_fail; } ;
typedef scalar_t__ u8 ;
struct x509_certificate {int extensions_present; int ext_key_usage; int subject; int cert_len; int cert_start; struct x509_certificate* next; } ;
struct tlsv1_client {int flags; int state; struct x509_certificate* server_cert; TYPE_2__* cred; int cb_ctx; int (* event_cb ) (int ,int ,union tls_event_data*) ;int server_rsa_key; } ;
typedef int ev ;
typedef int buf ;
struct TYPE_4__ {scalar_t__ server_cert_only; int trusted_certs; scalar_t__ ca_cert_verify; scalar_t__ cert_probe; int srv_cert_hash; } ;


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
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;






 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,scalar_t__*,int) ;
 int FUNC_3 (union tls_event_data*,int ,int) ;
 scalar_t__ FUNC_4 (int,int *,int *,scalar_t__*) ;
 int FUNC_5 (int ,int ,union tls_event_data*) ;
 int FUNC_6 (int ,int ,union tls_event_data*) ;
 int FUNC_7 (struct tlsv1_client*,int ,int) ;
 int FUNC_8 (struct tlsv1_client*,int ,struct x509_certificate*,int ,char*) ;
 scalar_t__ FUNC_9 (scalar_t__ const*,size_t,int *) ;
 int FUNC_10 (struct tlsv1_client*,size_t,struct x509_certificate*) ;
 int FUNC_11 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_12 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_13 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_14 (int ,char*,scalar_t__*,int) ;
 int FUNC_15 (int ,char*,...) ;
 int FUNC_16 (struct x509_certificate*) ;
 scalar_t__ FUNC_17 (int ,struct x509_certificate*,int*,int) ;
 struct x509_certificate* FUNC_18 (scalar_t__ const*,size_t) ;
 int FUNC_19 (int *,char*,int) ;

__attribute__((used)) static int FUNC_20(struct tlsv1_client *VAR_30, u8 VAR_31,
       const u8 *VAR_32, size_t *VAR_33)
{
 const u8 *VAR_34, *VAR_35;
 size_t VAR_36, VAR_37, VAR_38, VAR_39, VAR_40;
 u8 VAR_41;
 struct x509_certificate *VAR_42 = ((void*)0), *VAR_43 = ((void*)0), *VAR_44;
 int VAR_45;

 if (VAR_31 != VAR_16) {
  FUNC_15(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_31);
  FUNC_7(VAR_30, VAR_9,
     VAR_10);
  return -1;
 }

 VAR_34 = VAR_32;
 VAR_36 = *VAR_33;

 if (VAR_36 < 4) {
  FUNC_15(VAR_0, "TLSv1: Too short Certificate message "
      "(len=%lu)", (unsigned long) VAR_36);
  FUNC_7(VAR_30, VAR_9, VAR_8);
  return -1;
 }

 VAR_41 = *VAR_34++;
 VAR_37 = FUNC_0(VAR_34);
 VAR_34 += 3;
 VAR_36 -= 4;

 if (VAR_37 > VAR_36) {
  FUNC_15(VAR_0, "TLSv1: Unexpected Certificate message "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_37, (unsigned long) VAR_36);
  FUNC_7(VAR_30, VAR_9, VAR_8);
  return -1;
 }

 if (VAR_41 == VAR_26)
  return FUNC_13(VAR_30, VAR_31, VAR_32,
             VAR_33);
 if (VAR_41 == VAR_24)
  return FUNC_11(VAR_30, VAR_31, VAR_32,
             VAR_33);
 if (VAR_41 == VAR_25)
  return FUNC_12(VAR_30, VAR_31, VAR_32,
           VAR_33);
 if (VAR_41 != VAR_23) {
  FUNC_15(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected Certificate/"
      "ServerKeyExchange/CertificateRequest/"
      "ServerHelloDone)", VAR_41);
  FUNC_7(VAR_30, VAR_9,
     VAR_10);
  return -1;
 }

 FUNC_15(VAR_0,
     "TLSv1: Received Certificate (certificate_list len %lu)",
     (unsigned long) VAR_37);
 VAR_35 = VAR_34 + VAR_37;

 if (VAR_35 - VAR_34 < 3) {
  FUNC_15(VAR_0, "TLSv1: Too short Certificate "
      "(left=%lu)", (unsigned long) VAR_36);
  FUNC_7(VAR_30, VAR_9, VAR_8);
  return -1;
 }

 VAR_38 = FUNC_0(VAR_34);
 VAR_34 += 3;

 if ((size_t) (VAR_35 - VAR_34) != VAR_38) {
  FUNC_15(VAR_0, "TLSv1: Unexpected certificate_list "
      "length (len=%lu left=%lu)",
      (unsigned long) VAR_38,
      (unsigned long) (VAR_35 - VAR_34));
  FUNC_7(VAR_30, VAR_9, VAR_8);
  return -1;
 }

 VAR_40 = 0;
 while (VAR_34 < VAR_35) {
  if (VAR_35 - VAR_34 < 3) {
   FUNC_15(VAR_0, "TLSv1: Failed to parse "
       "certificate_list");
   FUNC_7(VAR_30, VAR_9,
      VAR_8);
   FUNC_16(VAR_42);
   return -1;
  }

  VAR_39 = FUNC_0(VAR_34);
  VAR_34 += 3;

  if ((size_t) (VAR_35 - VAR_34) < VAR_39) {
   FUNC_15(VAR_0, "TLSv1: Unexpected certificate "
       "length (len=%lu left=%lu)",
       (unsigned long) VAR_39,
       (unsigned long) (VAR_35 - VAR_34));
   FUNC_7(VAR_30, VAR_9,
      VAR_8);
   FUNC_16(VAR_42);
   return -1;
  }

  FUNC_15(VAR_0, "TLSv1: Certificate %lu (len %lu)",
      (unsigned long) VAR_40, (unsigned long) VAR_39);

  if (VAR_40 == 0) {
   FUNC_1(VAR_30->server_rsa_key);
   if (FUNC_9(VAR_34, VAR_39,
        &VAR_30->server_rsa_key)) {
    FUNC_15(VAR_0, "TLSv1: Failed to parse "
        "the certificate");
    FUNC_7(VAR_30, VAR_9,
       VAR_4);
    FUNC_16(VAR_42);
    return -1;
   }
  }

  VAR_44 = FUNC_18(VAR_34, VAR_39);
  if (VAR_44 == ((void*)0)) {
   FUNC_15(VAR_0, "TLSv1: Failed to parse "
       "the certificate");
   FUNC_7(VAR_30, VAR_9,
      VAR_4);
   FUNC_16(VAR_42);
   return -1;
  }

  FUNC_10(VAR_30, VAR_40, VAR_44);

  if (VAR_43 == ((void*)0))
   VAR_42 = VAR_44;
  else
   VAR_43->next = VAR_44;
  VAR_43 = VAR_44;

  VAR_40++;
  VAR_34 += VAR_39;
 }

 if (VAR_30->cred && VAR_30->cred->server_cert_only && VAR_42) {
  u8 VAR_46[VAR_3];
  char VAR_47[128];

  FUNC_15(VAR_0,
      "TLSv1: Validate server certificate hash");
  FUNC_19(&VAR_42->subject, VAR_47, sizeof(VAR_47));
  FUNC_15(VAR_0, "TLSv1: 0: %s", VAR_47);
  if (FUNC_4(1, &VAR_42->cert_start, &VAR_42->cert_len,
      VAR_46) < 0 ||
      FUNC_2(VAR_30->cred->srv_cert_hash, VAR_46,
         VAR_3) != 0) {
   FUNC_15(VAR_0,
       "TLSv1: Server certificate hash mismatch");
   FUNC_14(VAR_1, "TLSv1: SHA256 hash",
        VAR_46, VAR_3);
   if (VAR_30->event_cb) {
    union tls_event_data VAR_48;

    FUNC_3(&VAR_48, 0, sizeof(VAR_48));
    VAR_48.cert_fail.reason = VAR_21;
    VAR_48.cert_fail.reason_txt =
     "Server certificate mismatch";
    VAR_48.cert_fail.subject = VAR_47;
    VAR_30->event_cb(VAR_30->cb_ctx,
            VAR_13, &VAR_48);
   }
   FUNC_7(VAR_30, VAR_9,
      VAR_4);
   FUNC_16(VAR_42);
   return -1;
  }
 } else if (VAR_30->cred && VAR_30->cred->cert_probe) {
  FUNC_15(VAR_0,
      "TLSv1: Reject server certificate on probe-only rune");
  if (VAR_30->event_cb) {
   union tls_event_data VAR_49;
   char VAR_50[128];

   FUNC_3(&VAR_49, 0, sizeof(VAR_49));
   VAR_49.cert_fail.reason = VAR_20;
   VAR_49.cert_fail.reason_txt =
    "Server certificate chain probe";
   if (VAR_42) {
    FUNC_19(&VAR_42->subject, VAR_50,
       sizeof(VAR_50));
    VAR_49.cert_fail.subject = VAR_50;
   }
   VAR_30->event_cb(VAR_30->cb_ctx, VAR_13,
           &VAR_49);
  }
  FUNC_7(VAR_30, VAR_9,
     VAR_4);
  FUNC_16(VAR_42);
  return -1;
 } else if (VAR_30->cred && VAR_30->cred->ca_cert_verify &&
     FUNC_17(
      VAR_30->cred->trusted_certs, VAR_42, &VAR_45,
      !!(VAR_30->flags & VAR_14))
     < 0) {
  int VAR_51;
  FUNC_15(VAR_0, "TLSv1: Server certificate chain "
      "validation failed (reason=%d)", VAR_45);
  switch (VAR_45) {
  case 133:
   VAR_51 = VAR_4;
   FUNC_8(
    VAR_30, 0, VAR_42, VAR_17,
    "bad certificate");
   break;
  case 128:
   VAR_51 = VAR_12;
   break;
  case 131:
   VAR_51 = VAR_6;
   FUNC_8(
    VAR_30, 0, VAR_42, VAR_19,
    "certificate revoked");
   break;
  case 132:
   VAR_51 = VAR_5;
   FUNC_8(
    VAR_30, 0, VAR_42, VAR_18,
    "certificate has expired or is not yet valid");
   break;
  case 130:
   VAR_51 = VAR_7;
   break;
  case 129:
   VAR_51 = VAR_11;
   FUNC_8(
    VAR_30, 0, VAR_42, VAR_22,
    "unknown CA");
   break;
  default:
   VAR_51 = VAR_4;
   break;
  }
  FUNC_7(VAR_30, VAR_9, VAR_51);
  FUNC_16(VAR_42);
  return -1;
 }

 if (VAR_30->cred && !VAR_30->cred->server_cert_only && VAR_42 &&
     (VAR_42->extensions_present & VAR_27) &&
     !(VAR_42->ext_key_usage &
       (VAR_28 | VAR_29))) {
  FUNC_8(
   VAR_30, 0, VAR_42, VAR_17,
   "certificate not allowed for server authentication");
  FUNC_7(VAR_30, VAR_9,
     VAR_4);
  FUNC_16(VAR_42);
  return -1;
 }

 if (VAR_30->flags & VAR_15) {
  FUNC_16(VAR_30->server_cert);
  VAR_30->server_cert = VAR_42;
 } else {
  FUNC_16(VAR_42);
 }

 *VAR_33 = VAR_35 - VAR_32;

 VAR_30->state = VAR_2;

 return 0;
}
