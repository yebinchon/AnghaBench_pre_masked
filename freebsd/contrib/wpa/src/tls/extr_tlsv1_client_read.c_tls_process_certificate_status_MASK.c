
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct x509_certificate {scalar_t__ issuer_trusted; int ocsp_good; struct x509_certificate* next; scalar_t__ ocsp_revoked; } ;
struct tlsv1_client {int flags; int ocsp_resp_received; int state; struct x509_certificate* server_cert; } ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 void* FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 int FUNC_2 (struct tlsv1_client*,int,struct x509_certificate*,int ,char*) ;
 int FUNC_3 (struct tlsv1_client*,scalar_t__ const*,int) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static int FUNC_5(struct tlsv1_client *VAR_18, u8 VAR_19,
        const u8 *VAR_20, size_t *VAR_21)
{
 const u8 *VAR_22, *VAR_23;
 size_t VAR_24, VAR_25;
 u8 VAR_26, VAR_27;
 enum tls_ocsp_result VAR_28;
 struct x509_certificate *VAR_29;
 int VAR_30;

 if (VAR_19 != VAR_10) {
  FUNC_4(VAR_0,
      "TLSv1: Expected Handshake; received content type 0x%x",
      VAR_19);
  FUNC_1(VAR_18, VAR_6,
     VAR_7);
  return -1;
 }

 VAR_22 = VAR_20;
 VAR_24 = *VAR_21;

 if (VAR_24 < 4) {
  FUNC_4(VAR_0,
      "TLSv1: Too short CertificateStatus (left=%lu)",
      (unsigned long) VAR_24);
  FUNC_1(VAR_18, VAR_6, VAR_5);
  return -1;
 }

 VAR_26 = *VAR_22++;
 VAR_25 = FUNC_0(VAR_22);
 VAR_22 += 3;
 VAR_24 -= 4;

 if (VAR_25 > VAR_24) {
  FUNC_4(VAR_0,
      "TLSv1: Mismatch in CertificateStatus length (len=%lu != left=%lu)",
      (unsigned long) VAR_25, (unsigned long) VAR_24);
  FUNC_1(VAR_18, VAR_6, VAR_5);
  return -1;
 }

 VAR_23 = VAR_22 + VAR_25;

 if (VAR_26 != VAR_13) {
  FUNC_4(VAR_0,
      "TLSv1: Received unexpected handshake message %d (expected CertificateStatus)",
      VAR_26);
  FUNC_1(VAR_18, VAR_6,
     VAR_7);
  return -1;
 }

 FUNC_4(VAR_0, "TLSv1: Received CertificateStatus");
 if (VAR_23 - VAR_22 < 1) {
  FUNC_4(VAR_1, "TLSv1: Too short CertificateStatus");
  FUNC_1(VAR_18, VAR_6, VAR_5);
  return -1;
 }
 VAR_27 = *VAR_22++;
 FUNC_4(VAR_0, "TLSv1: CertificateStatus status_type %u",
     VAR_27);

 if (VAR_27 == 1 ) {
  VAR_28 = FUNC_3(
   VAR_18, VAR_22, VAR_23 - VAR_22);
 } else if (VAR_27 == 2 ) {
  int VAR_31 = 0, VAR_32 = 0;
  u32 VAR_33;

  VAR_28 = VAR_16;
  if (VAR_23 - VAR_22 < 3) {
   FUNC_4(VAR_0,
       "TLSv1: Truncated OCSPResponseList");
   VAR_28 = VAR_15;
   goto done;
  }
  VAR_33 = FUNC_0(VAR_22);
  VAR_22 += 3;
  if (VAR_23 - VAR_22 < VAR_33) {
   FUNC_4(VAR_0,
       "TLSv1: Truncated OCSPResponseList(len=%u)",
       VAR_33);
   VAR_28 = VAR_15;
   goto done;
  }
  VAR_23 = VAR_22 + VAR_33;

  while (VAR_23 - VAR_22 >= 3) {
   VAR_33 = FUNC_0(VAR_22);
   VAR_22 += 3;
   if (VAR_33 > VAR_23 - VAR_22) {
    FUNC_4(VAR_0,
        "TLSv1: Truncated OCSPResponse(len=%u; left=%d) in ocsp_multi",
        VAR_33, (int) (VAR_23 - VAR_22));
    VAR_28 = VAR_15;
    break;
   }
   if (!VAR_33)
    continue;
   VAR_28 = FUNC_3(
    VAR_18, VAR_22 - 3, VAR_33 + 3);
   if (VAR_28 == VAR_17)
    VAR_32++;
   else if (VAR_28 == VAR_14)
    VAR_31++;
   VAR_22 += VAR_33;
  }

  if (VAR_32)
   VAR_28 = VAR_17;
  else if (VAR_31)
   VAR_28 = VAR_14;
 } else {
  FUNC_4(VAR_0,
      "TLSv1: Ignore unsupported CertificateStatus");
  goto skip;
 }

done:
 if (VAR_28 == VAR_17) {
  FUNC_1(VAR_18, VAR_6,
     VAR_4);
  for (VAR_29 = VAR_18->server_cert, VAR_30 = 0; VAR_29;
       VAR_29 = VAR_29->next, VAR_30++) {
   if (VAR_29->ocsp_revoked) {
    FUNC_2(
     VAR_18, VAR_30, VAR_29, VAR_11,
     "certificate revoked");
   }
  }
  return -1;
 }

 if (VAR_18->flags & VAR_9) {





  for (VAR_29 = VAR_18->server_cert, VAR_30 = 0; VAR_29;
       VAR_29 = VAR_29->next, VAR_30++) {
   if (!VAR_29->ocsp_good) {
    FUNC_1(VAR_18, VAR_6,
       VAR_3);
    FUNC_2(
     VAR_18, VAR_30, VAR_29,
     VAR_12,
     "bad certificate status response");
    return -1;
   }
   if (VAR_29->issuer_trusted)
    break;
  }
 }

 if ((VAR_18->flags & VAR_8) && VAR_28 != VAR_14) {
  FUNC_1(VAR_18, VAR_6,
     VAR_28 == VAR_15 ? VAR_5 :
     VAR_3);
  if (VAR_18->server_cert)
   FUNC_2(
    VAR_18, 0, VAR_18->server_cert,
    VAR_12,
    "bad certificate status response");
  return -1;
 }

 VAR_18->ocsp_resp_received = 1;

skip:
 *VAR_21 = VAR_23 - VAR_20;

 VAR_18->state = VAR_2;

 return 0;
}
