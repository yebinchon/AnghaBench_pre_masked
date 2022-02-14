
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct x509_certificate {scalar_t__ const* subject_dn; int subject_dn_len; scalar_t__ const* public_key; int public_key_len; size_t serial_number_len; scalar_t__* serial_number; } ;
struct x509_algorithm_identifier {int oid; } ;
struct tlsv1_client {int dummy; } ;
struct os_time {scalar_t__ sec; } ;
struct asn1_hdr {scalar_t__ class; unsigned int tag; scalar_t__* payload; size_t length; } ;
typedef scalar_t__ os_time_t ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 unsigned int FUNC_1 (int *,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_2 (struct os_time*) ;
 scalar_t__ FUNC_3 (scalar_t__ const*,scalar_t__*,size_t) ;
 int FUNC_4 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_5 (int ,char*,...) ;
 scalar_t__ FUNC_6 (scalar_t__ const*,int,struct x509_algorithm_identifier*,scalar_t__ const**) ;
 scalar_t__ FUNC_7 (scalar_t__*,size_t,unsigned int,scalar_t__*) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_client *VAR_11,
         struct x509_certificate *VAR_12,
         struct x509_certificate *VAR_13,
         const u8 *VAR_14, size_t VAR_15,
         enum tls_ocsp_result *VAR_16)
{
 struct asn1_hdr VAR_17;
 const u8 *VAR_18, *VAR_19;
 struct x509_algorithm_identifier VAR_20;
 const u8 *VAR_21, *VAR_22;
 size_t VAR_23, VAR_24;
 const u8 *VAR_25;
 size_t VAR_26;
 u8 VAR_27[64];
 unsigned int VAR_28;
 unsigned int VAR_29;
 os_time_t VAR_30;
 struct os_time VAR_31;

 FUNC_4(VAR_7, "OCSP: SingleResponse", VAR_14, VAR_15);
 if (FUNC_0(VAR_14, VAR_15, &VAR_17) < 0 ||
     VAR_17.class != VAR_1 ||
     VAR_17.tag != VAR_5) {
  FUNC_5(VAR_6,
      "OCSP: Expected SEQUENCE (CertID) - found class %d tag 0x%x",
      VAR_17.class, VAR_17.tag);
  return -1;
 }
 VAR_18 = VAR_17.payload;
 VAR_19 = VAR_17.payload + VAR_17.length;
 if (FUNC_6(VAR_18, VAR_19 - VAR_18, &VAR_20, &VAR_18))
  return -1;


 if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0 ||
     VAR_17.class != VAR_1 ||
     VAR_17.tag != VAR_4) {
  FUNC_5(VAR_6,
      "OCSP: Expected OCTET STRING (issuerNameHash) - found class %d tag 0x%x",
      VAR_17.class, VAR_17.tag);
  return -1;
 }
 VAR_21 = VAR_17.payload;
 VAR_23 = VAR_17.length;
 FUNC_4(VAR_6, "OCSP: issuerNameHash",
      VAR_21, VAR_23);
 VAR_18 = VAR_17.payload + VAR_17.length;

 FUNC_4(VAR_6, "OCSP: Issuer subject DN",
      VAR_13->subject_dn, VAR_13->subject_dn_len);
 VAR_28 = FUNC_1(&VAR_20.oid, VAR_13->subject_dn,
      VAR_13->subject_dn_len, VAR_27);
 if (VAR_28 == 0 || VAR_23 != VAR_28 ||
     FUNC_3(VAR_21, VAR_27, VAR_28) != 0) {
  FUNC_5(VAR_6, "OCSP: issuerNameHash mismatch");
  FUNC_4(VAR_6, "OCSP: Calculated issuerNameHash",
       VAR_27, VAR_28);
  return -1;
 }


 if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0 ||
     VAR_17.class != VAR_1 ||
     VAR_17.tag != VAR_4) {
  FUNC_5(VAR_6,
      "OCSP: Expected OCTET STRING (issuerKeyHash) - found class %d tag 0x%x",
      VAR_17.class, VAR_17.tag);
  return -1;
 }
 VAR_22 = VAR_17.payload;
 VAR_24 = VAR_17.length;
 FUNC_4(VAR_6, "OCSP: issuerKeyHash", VAR_22, VAR_24);
 VAR_18 = VAR_17.payload + VAR_17.length;

 VAR_28 = FUNC_1(&VAR_20.oid, VAR_13->public_key,
      VAR_13->public_key_len, VAR_27);
 if (VAR_28 == 0 || VAR_24 != VAR_28 ||
     FUNC_3(VAR_22, VAR_27, VAR_28) != 0) {
  FUNC_5(VAR_6, "OCSP: issuerKeyHash mismatch");
  FUNC_4(VAR_6, "OCSP: Calculated issuerKeyHash",
       VAR_27, VAR_28);
  return -1;
 }


 if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0 ||
     VAR_17.class != VAR_1 ||
     VAR_17.tag != VAR_3 ||
     VAR_17.length < 1 || VAR_17.length > VAR_10) {
  FUNC_5(VAR_6, "OCSP: No INTEGER tag found for serialNumber; class=%d tag=0x%x length=%u",
      VAR_17.class, VAR_17.tag, VAR_17.length);
  return -1;
 }
 VAR_25 = VAR_17.payload;
 VAR_26 = VAR_17.length;
 while (VAR_26 > 0 && VAR_25[0] == 0) {
  VAR_25++;
  VAR_26--;
 }
 FUNC_4(VAR_7, "OCSP: serialNumber", VAR_25,
      VAR_26);

 if (VAR_26 != VAR_12->serial_number_len ||
     FUNC_3(VAR_25, VAR_12->serial_number,
        VAR_26) != 0) {
  FUNC_5(VAR_6, "OCSP: serialNumber mismatch");
  return -1;
 }

 VAR_18 = VAR_19;
 VAR_19 = VAR_14 + VAR_15;


 if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0 ||
     VAR_17.class != VAR_0) {
  FUNC_5(VAR_6,
      "OCSP: Expected CHOICE (CertStatus) - found class %d tag 0x%x",
      VAR_17.class, VAR_17.tag);
  return -1;
 }
 VAR_29 = VAR_17.tag;
 FUNC_5(VAR_6, "OCSP: certStatus=%u", VAR_29);
 FUNC_4(VAR_6, "OCSP: CertStatus additional data",
      VAR_17.payload, VAR_17.length);
 VAR_18 = VAR_17.payload + VAR_17.length;

 FUNC_2(&VAR_31);

 if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0 ||
     VAR_17.class != VAR_1 ||
     VAR_17.tag != VAR_2 ||
     FUNC_7(VAR_17.payload, VAR_17.length, VAR_17.tag, &VAR_30) < 0) {
  FUNC_5(VAR_6, "OCSP: Failed to parse thisUpdate");
  return -1;
 }
 FUNC_5(VAR_6, "OCSP: thisUpdate %lu", (unsigned long) VAR_30);
 VAR_18 = VAR_17.payload + VAR_17.length;
 if ((unsigned long) VAR_31.sec < (unsigned long) VAR_30) {
  FUNC_5(VAR_6,
      "OCSP: thisUpdate time in the future (response not yet valid)");
  return -1;
 }


 if (VAR_18 < VAR_19) {
  if (FUNC_0(VAR_18, VAR_19 - VAR_18, &VAR_17) < 0)
   return -1;
  if (VAR_17.class == VAR_0 && VAR_17.tag == 0) {
   const u8 *VAR_32 = VAR_17.payload + VAR_17.length;

   if (FUNC_0(VAR_17.payload, VAR_17.length, &VAR_17) < 0 ||
       VAR_17.class != VAR_1 ||
       VAR_17.tag != VAR_2 ||
       FUNC_7(VAR_17.payload, VAR_17.length, VAR_17.tag,
         &VAR_30) < 0) {
    FUNC_5(VAR_6,
        "OCSP: Failed to parse nextUpdate");
    return -1;
   }
   FUNC_5(VAR_6, "OCSP: nextUpdate %lu",
       (unsigned long) VAR_30);
   VAR_18 = VAR_32;
   if ((unsigned long) VAR_31.sec > (unsigned long) VAR_30) {
    FUNC_5(VAR_6, "OCSP: nextUpdate time in the past (response has expired)");
    return -1;
   }
  }
 }


 if (VAR_18 < VAR_19) {
  FUNC_4(VAR_7, "OCSP: singleExtensions",
       VAR_18, VAR_19 - VAR_18);

 }

 if (VAR_29 == 0 )
  *VAR_16 = VAR_8;
 else if (VAR_29 == 1 )
  *VAR_16 = VAR_9;
 else
  return -1;
 return 0;
}
