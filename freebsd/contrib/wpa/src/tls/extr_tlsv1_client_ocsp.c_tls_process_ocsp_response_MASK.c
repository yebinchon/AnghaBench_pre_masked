
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct x509_certificate {struct x509_certificate* next; scalar_t__ issuer_trusted; int subject; int ocsp_revoked; int ocsp_good; } ;
struct tlsv1_client {struct x509_certificate* server_cert; } ;
struct asn1_oid {int dummy; } ;
struct asn1_hdr {scalar_t__ tag; scalar_t__* payload; int length; int class; } ;
typedef int sbuf ;
typedef int obuf ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (scalar_t__ const*,int,struct asn1_oid*,scalar_t__ const**) ;
 int FUNC_2 (struct asn1_oid*,char*,int) ;
 int FUNC_3 (struct asn1_oid*) ;
 int FUNC_4 (struct tlsv1_client*,struct x509_certificate*,scalar_t__*,int) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int *,char*,int) ;

enum tls_ocsp_result FUNC_8(struct tlsv1_client *VAR_11,
            const u8 *VAR_12, size_t VAR_13)
{
 struct asn1_hdr VAR_14;
 const u8 *VAR_15, *VAR_16;
 u8 VAR_17;
 struct asn1_oid VAR_18;
 char VAR_19[80];
 struct x509_certificate *VAR_20;
 enum tls_ocsp_result VAR_21 = VAR_9;
 enum tls_ocsp_result VAR_22 = VAR_21;

 FUNC_5(VAR_6, "TLSv1: OCSPResponse", VAR_12, VAR_13);
 if (FUNC_0(VAR_12, VAR_13, &VAR_14) < 0 ||
     VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_4) {
  FUNC_6(VAR_5,
      "OCSP: Expected SEQUENCE (OCSPResponse) - found class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return VAR_8;
 }
 VAR_15 = VAR_14.payload;
 VAR_16 = VAR_14.payload + VAR_14.length;


 if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
     VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_2 ||
     VAR_14.length != 1) {
  FUNC_6(VAR_5,
      "OCSP: Expected ENUMERATED (responseStatus) - found class %d tag 0x%x length %u",
      VAR_14.class, VAR_14.tag, VAR_14.length);
  return VAR_8;
 }
 VAR_17 = VAR_14.payload[0];
 FUNC_6(VAR_5, "OCSP: responseStatus %u", VAR_17);
 VAR_15 = VAR_14.payload + VAR_14.length;
 if (VAR_17 != VAR_7) {
  FUNC_6(VAR_5, "OCSP: No stapling result");
  return VAR_9;
 }


 if (VAR_15 == VAR_16)
  return VAR_9;

 if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
     VAR_14.class != VAR_0 ||
     VAR_14.tag != 0) {
  FUNC_6(VAR_5,
      "OCSP: Expected [0] EXPLICIT (responseBytes) - found class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return VAR_8;
 }







 if (FUNC_0(VAR_14.payload, VAR_14.length, &VAR_14) < 0 ||
     VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_4) {
  FUNC_6(VAR_5,
      "OCSP: Expected SEQUENCE (ResponseBytes) - found class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return VAR_8;
 }
 VAR_15 = VAR_14.payload;
 VAR_16 = VAR_14.payload + VAR_14.length;


 if (FUNC_1(VAR_15, VAR_16 - VAR_15, &VAR_18, &VAR_15)) {
  FUNC_6(VAR_5,
      "OCSP: Failed to parse OID (responseType)");
  return VAR_8;
 }
 FUNC_2(&VAR_18, VAR_19, sizeof(VAR_19));
 FUNC_6(VAR_5, "OCSP: responseType %s", VAR_19);
 if (!FUNC_3(&VAR_18)) {
  FUNC_6(VAR_5, "OCSP: Ignore unsupported response type");
  return VAR_9;
 }


 if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
     VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_3) {
  FUNC_6(VAR_5,
      "OCSP: Expected OCTET STRING (response) - found class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return VAR_8;
 }

 VAR_20 = VAR_11->server_cert;
 while (VAR_20) {
  if (!VAR_20->ocsp_good && !VAR_20->ocsp_revoked) {
   char VAR_23[128];

   FUNC_7(&VAR_20->subject, VAR_23, sizeof(VAR_23));
   FUNC_6(VAR_5,
       "OCSP: Trying to find certificate status for %s",
       VAR_23);

   VAR_21 = FUNC_4(VAR_11, VAR_20,
             VAR_14.payload,
             VAR_14.length);
   if (VAR_20 == VAR_11->server_cert)
    VAR_22 = VAR_21;
  }
  if (VAR_21 == VAR_10 || VAR_20->issuer_trusted)
   break;
  VAR_20 = VAR_20->next;
 }
 return VAR_21 == VAR_10 ? VAR_21 : VAR_22;
}
