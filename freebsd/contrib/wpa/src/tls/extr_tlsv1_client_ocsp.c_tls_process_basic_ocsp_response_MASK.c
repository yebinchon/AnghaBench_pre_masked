
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ const u8 ;
struct x509_name {int dummy; } ;
struct x509_certificate {int ext_key_usage; int ocsp_revoked; int ocsp_good; int subject; int issuer; struct x509_certificate* next; } ;
struct x509_algorithm_identifier {int dummy; } ;
struct tlsv1_client {TYPE_1__* cred; } ;
struct asn1_hdr {int tag; scalar_t__ const* payload; size_t length; int class; } ;
typedef scalar_t__ os_time_t ;
typedef int name ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;
typedef int buf ;
struct TYPE_2__ {struct x509_certificate* trusted_certs; } ;


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
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (struct x509_certificate*,struct x509_name*,scalar_t__ const*) ;
 int FUNC_2 (struct x509_name*,int ,int) ;
 int FUNC_3 (struct tlsv1_client*,struct x509_certificate*,struct x509_certificate*,scalar_t__ const*,size_t) ;
 int FUNC_4 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct x509_certificate*) ;
 scalar_t__ FUNC_7 (struct x509_certificate*,struct x509_certificate*) ;
 struct x509_certificate* FUNC_8 (scalar_t__ const*,size_t) ;
 scalar_t__ FUNC_9 (struct x509_certificate*,struct x509_algorithm_identifier*,scalar_t__ const*,size_t,scalar_t__ const*,size_t) ;
 int FUNC_10 (struct x509_name*) ;
 scalar_t__ FUNC_11 (int *,int *) ;
 int FUNC_12 (struct x509_name*,char*,int) ;
 scalar_t__ FUNC_13 (scalar_t__ const*,int,struct x509_algorithm_identifier*,scalar_t__ const**) ;
 scalar_t__ FUNC_14 (scalar_t__ const*,size_t,struct x509_name*,scalar_t__ const**) ;
 scalar_t__ FUNC_15 (scalar_t__ const*,size_t,int,scalar_t__*) ;

__attribute__((used)) static enum tls_ocsp_result
FUNC_16(struct tlsv1_client *VAR_15,
    struct x509_certificate *VAR_16,
    const u8 *VAR_17, size_t VAR_18)
{
 struct asn1_hdr VAR_19;
 const u8 *VAR_20, *VAR_21;
 const u8 *VAR_22, *VAR_23, *VAR_24 = ((void*)0), *VAR_25;
 const u8 *VAR_26;
 size_t VAR_27, VAR_28, VAR_29;
 size_t VAR_30;
 struct x509_algorithm_identifier VAR_31;
 struct x509_certificate *VAR_32 = ((void*)0), *VAR_33 = ((void*)0);
 struct x509_certificate *VAR_34, *VAR_35;
 struct x509_name VAR_36;
 char VAR_37[100];
 os_time_t VAR_38;
 enum tls_ocsp_result VAR_39;

 FUNC_4(VAR_8, "OCSP: BasicOCSPResponse", VAR_17, VAR_18);

 FUNC_2(&VAR_36, 0, sizeof(VAR_36));
 if (FUNC_0(VAR_17, VAR_18, &VAR_19) < 0 ||
     VAR_19.class != VAR_1 ||
     VAR_19.tag != VAR_6) {
  FUNC_5(VAR_7,
      "OCSP: Expected SEQUENCE (BasicOCSPResponse) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  return VAR_11;
 }
 VAR_20 = VAR_19.payload;
 VAR_21 = VAR_19.payload + VAR_19.length;


 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
     VAR_19.class != VAR_1 ||
     VAR_19.tag != VAR_6) {
  FUNC_5(VAR_7,
      "OCSP: Expected SEQUENCE (ResponseData) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  return VAR_11;
 }
 VAR_22 = VAR_19.payload;
 VAR_27 = VAR_19.length;
 VAR_26 = VAR_20;
 VAR_20 = VAR_19.payload + VAR_19.length;
 VAR_30 = VAR_20 - VAR_26;


 if (FUNC_13(VAR_20, VAR_21 - VAR_20, &VAR_31, &VAR_20))
  return VAR_11;


 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
     VAR_19.class != VAR_1 ||
     VAR_19.tag != VAR_2) {
  FUNC_5(VAR_7,
      "OCSP: Expected BITSTRING (signature) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  return VAR_11;
 }
 if (VAR_19.length < 1)
  return VAR_11;
 VAR_20 = VAR_19.payload;
 if (*VAR_20) {
  FUNC_5(VAR_7, "OCSP: BITSTRING - %d unused bits", *VAR_20);




  return VAR_11;
 }
 VAR_23 = VAR_20 + 1;
 VAR_28 = VAR_19.length - 1;
 VAR_20 += VAR_19.length;
 FUNC_4(VAR_8, "OCSP: signature", VAR_23, VAR_28);


 if (VAR_20 < VAR_21) {
  if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
      VAR_19.class != VAR_0 ||
      VAR_19.tag != 0) {
   FUNC_5(VAR_7,
       "OCSP: Expected [0] EXPLICIT (certs) - found class %d tag 0x%x",
       VAR_19.class, VAR_19.tag);
   return VAR_11;
  }
  FUNC_4(VAR_8, "OCSP: certs",
       VAR_19.payload, VAR_19.length);
  VAR_20 = VAR_19.payload;
  VAR_21 = VAR_19.payload + VAR_19.length;
  while (VAR_20 < VAR_21) {
   struct x509_certificate *VAR_40;

   if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
       VAR_19.class != VAR_1 ||
       VAR_19.tag != VAR_6) {
    FUNC_5(VAR_7,
        "OCSP: Expected SEQUENCE (Certificate) - found class %d tag 0x%x",
        VAR_19.class, VAR_19.tag);
    goto fail;
   }

   VAR_40 = FUNC_8(VAR_19.payload, VAR_19.length);
   if (!VAR_40)
    goto fail;
   if (VAR_33) {
    VAR_33->next = VAR_40;
    VAR_33 = VAR_40;
   } else {
    VAR_33 = VAR_32 = VAR_40;
   }
   VAR_20 = VAR_19.payload + VAR_19.length;
  }
 }
 VAR_20 = VAR_22;
 VAR_21 = VAR_22 + VAR_27;
 FUNC_4(VAR_8, "OCSP: ResponseData", VAR_20, VAR_21 - VAR_20);





 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 &&
     VAR_19.class == VAR_0 &&
     VAR_19.tag == 0) {
  if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
      VAR_19.class != VAR_1 ||
      VAR_19.tag != VAR_4 ||
      VAR_19.length != 1) {
   FUNC_5(VAR_7,
       "OCSP: No INTEGER (len=1) tag found for version field - found class %d tag 0x%x length %d",
       VAR_19.class, VAR_19.tag, VAR_19.length);
   goto fail;
  }
  FUNC_5(VAR_7, "OCSP: ResponseData version %u",
      VAR_19.payload[0]);
  if (VAR_19.payload[0] != 0) {
   FUNC_5(VAR_7,
       "OCSP: Unsupported ResponseData version %u",
       VAR_19.payload[0]);
   goto no_resp;
  }
  VAR_20 = VAR_19.payload + VAR_19.length;
 } else {
  FUNC_5(VAR_7,
      "OCSP: Default ResponseData version (v1)");
 }






 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
     VAR_19.class != VAR_0) {
  FUNC_5(VAR_7,
      "OCSP: Expected CHOICE (ResponderID) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  goto fail;
 }

 if (VAR_19.tag == 1) {

  if (FUNC_14(VAR_19.payload, VAR_19.length, &VAR_36, &VAR_20) < 0)
   goto fail;
  FUNC_12(&VAR_36, VAR_37, sizeof(VAR_37));
  FUNC_5(VAR_7, "OCSP: ResponderID byName Name: %s", VAR_37);
 } else if (VAR_19.tag == 2) {

  if (FUNC_0(VAR_19.payload, VAR_19.length, &VAR_19) < 0 ||
      VAR_19.class != VAR_1 ||
      VAR_19.tag != VAR_5) {
   FUNC_5(VAR_7,
       "OCSP: Expected OCTET STRING (KeyHash) - found class %d tag 0x%x",
       VAR_19.class, VAR_19.tag);
   goto fail;
  }
  VAR_24 = VAR_19.payload;
  FUNC_4(VAR_7, "OCSP: ResponderID byKey KeyHash",
       VAR_24, VAR_19.length);
  if (VAR_19.length != VAR_9) {
   FUNC_5(VAR_7,
       "OCSP: Unexpected byKey KeyHash length %u - expected %u for SHA-1",
       VAR_19.length, VAR_9);
   goto fail;
  }
  VAR_20 = VAR_19.payload + VAR_19.length;
 } else {
  FUNC_5(VAR_7, "OCSP: Unexpected ResponderID CHOICE %u",
      VAR_19.tag);
  goto fail;
 }


 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
     VAR_19.class != VAR_1 ||
     VAR_19.tag != VAR_3 ||
     FUNC_15(VAR_19.payload, VAR_19.length, VAR_19.tag,
       &VAR_38) < 0) {
  FUNC_5(VAR_7, "OCSP: Failed to parse producedAt");
  goto fail;
 }
 FUNC_5(VAR_7, "OCSP: producedAt %lu",
     (unsigned long) VAR_38);
 VAR_20 = VAR_19.payload + VAR_19.length;


 if (FUNC_0(VAR_20, VAR_21 - VAR_20, &VAR_19) < 0 ||
     VAR_19.class != VAR_1 ||
     VAR_19.tag != VAR_6) {
  FUNC_5(VAR_7,
      "OCSP: Expected SEQUENCE (responses) - found class %d tag 0x%x",
      VAR_19.class, VAR_19.tag);
  goto fail;
 }
 VAR_25 = VAR_19.payload;
 VAR_29 = VAR_19.length;
 FUNC_4(VAR_8, "OCSP: responses", VAR_25, VAR_29);
 VAR_20 = VAR_19.payload + VAR_19.length;

 if (VAR_20 < VAR_21) {

  FUNC_4(VAR_8, "OCSP: responseExtensions",
       VAR_20, VAR_21 - VAR_20);

 }

 if (!VAR_16) {
  FUNC_5(VAR_7,
      "OCSP: Server certificate not known - cannot check OCSP response");
  goto no_resp;
 }

 if (VAR_16->next) {

  VAR_34 = VAR_16->next;
 } else {

  for (VAR_34 = VAR_15->cred ? VAR_15->cred->trusted_certs : ((void*)0);
       VAR_34; VAR_34 = VAR_34->next) {
   if (FUNC_11(&VAR_16->issuer,
           &VAR_34->subject) == 0)
    break;
  }
 }
 if (!VAR_34) {
  FUNC_5(VAR_7,
      "OCSP: Server certificate issuer not known - cannot check OCSP response");
  goto no_resp;
 }

 if (FUNC_1(VAR_34, &VAR_36, VAR_24)) {
  FUNC_5(VAR_7,
      "OCSP: Server certificate issuer certificate matches ResponderID");
  VAR_35 = VAR_34;
 } else {
  for (VAR_35 = VAR_32; VAR_35; VAR_35 = VAR_35->next) {
   if (!FUNC_1(VAR_35, &VAR_36, VAR_24) ||
       FUNC_11(&VAR_16->issuer,
           &VAR_34->subject) != 0 ||
       !(VAR_35->ext_key_usage &
         VAR_14) ||
       FUNC_7(VAR_34, VAR_35) <
       0)
    continue;
   FUNC_5(VAR_7,
       "OCSP: An extra certificate from the response matches ResponderID and is trusted as an OCSP signer");
   break;
  }
  if (!VAR_35) {
   FUNC_5(VAR_7,
       "OCSP: Could not find OCSP signer certificate");
   goto no_resp;
  }
 }

 FUNC_10(&VAR_36);
 FUNC_2(&VAR_36, 0, sizeof(VAR_36));
 FUNC_6(VAR_32);
 VAR_32 = ((void*)0);

 if (FUNC_9(VAR_35, &VAR_31, VAR_23, VAR_28,
     VAR_26, VAR_30) < 0) {
      FUNC_5(VAR_7, "OCSP: Invalid signature");
      return VAR_11;
 }

 VAR_39 = FUNC_3(VAR_15, VAR_16, VAR_34,
      VAR_25, VAR_29);
 if (VAR_39 == VAR_13)
  VAR_16->ocsp_revoked = 1;
 else if (VAR_39 == VAR_10)
  VAR_16->ocsp_good = 1;
 return VAR_39;

no_resp:
 FUNC_10(&VAR_36);
 FUNC_6(VAR_32);
 return VAR_12;

fail:
 FUNC_10(&VAR_36);
 FUNC_6(VAR_32);
 return VAR_11;
}
