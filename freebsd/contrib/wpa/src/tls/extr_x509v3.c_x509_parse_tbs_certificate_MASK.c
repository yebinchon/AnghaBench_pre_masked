
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct x509_certificate {unsigned long version; scalar_t__ const* serial_number; int serial_number_len; scalar_t__ const* subject_dn; int subject_dn_len; int subject; int issuer; int signature; } ;
struct asn1_hdr {int tag; scalar_t__* payload; int length; int class; } ;
typedef int sbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 scalar_t__ const* FUNC_1 (int) ;
 int FUNC_2 (scalar_t__ const*,scalar_t__ const*,int) ;
 int FUNC_3 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *,char*,int) ;
 scalar_t__ FUNC_6 (scalar_t__ const*,int,int *,scalar_t__ const**) ;
 scalar_t__ FUNC_7 (struct x509_certificate*,scalar_t__*,int) ;
 scalar_t__ FUNC_8 (scalar_t__ const*,int,int *,scalar_t__ const**) ;
 scalar_t__ FUNC_9 (scalar_t__ const*,int,struct x509_certificate*,scalar_t__ const**) ;
 scalar_t__ FUNC_10 (scalar_t__ const*,int,struct x509_certificate*,scalar_t__ const**) ;

__attribute__((used)) static int FUNC_11(const u8 *VAR_10, size_t VAR_11,
          struct x509_certificate *VAR_12,
          const u8 **VAR_13)
{
 struct asn1_hdr VAR_14;
 const u8 *VAR_15, *VAR_16;
 size_t VAR_17;
 char VAR_18[128];
 unsigned long VAR_19;
 const u8 *VAR_20;


 if (FUNC_0(VAR_10, VAR_11, &VAR_14) < 0 ||
     VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_3) {
  FUNC_4(VAR_4, "X509: tbsCertificate did not start "
      "with a valid SEQUENCE - found class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return -1;
 }
 VAR_15 = VAR_14.payload;
 VAR_16 = *VAR_13 = VAR_15 + VAR_14.length;





 if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0)
  return -1;
 VAR_15 = VAR_14.payload;

 if (VAR_14.class == VAR_0) {
  if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0)
   return -1;

  if (VAR_14.class != VAR_1 ||
      VAR_14.tag != VAR_2) {
   FUNC_4(VAR_4, "X509: No INTEGER tag found for "
       "version field - found class %d tag 0x%x",
       VAR_14.class, VAR_14.tag);
   return -1;
  }
  if (VAR_14.length != 1) {
   FUNC_4(VAR_4, "X509: Unexpected version field "
       "length %u (expected 1)", VAR_14.length);
   return -1;
  }
  VAR_15 = VAR_14.payload;
  VAR_17 = VAR_14.length;
  VAR_19 = 0;
  while (VAR_17) {
   VAR_19 <<= 8;
   VAR_19 |= *VAR_15++;
   VAR_17--;
  }

  VAR_12->version = VAR_19;
  if (VAR_12->version != VAR_6 &&
      VAR_12->version != VAR_7 &&
      VAR_12->version != VAR_8) {
   FUNC_4(VAR_4, "X509: Unsupported version %d",
       VAR_12->version + 1);
   return -1;
  }

  if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0)
   return -1;
 } else
  VAR_12->version = VAR_6;
 FUNC_4(VAR_5, "X509: Version X.509v%d", VAR_12->version + 1);


 if (VAR_14.class != VAR_1 ||
     VAR_14.tag != VAR_2 ||
     VAR_14.length < 1 || VAR_14.length > VAR_9) {
  FUNC_4(VAR_4, "X509: No INTEGER tag found for "
      "serialNumber; class=%d tag=0x%x length=%u",
      VAR_14.class, VAR_14.tag, VAR_14.length);
  return -1;
 }

 VAR_15 = VAR_14.payload + VAR_14.length;
 while (VAR_14.length > 0 && VAR_14.payload[0] == 0) {
  VAR_14.payload++;
  VAR_14.length--;
 }
 FUNC_2(VAR_12->serial_number, VAR_14.payload, VAR_14.length);
 VAR_12->serial_number_len = VAR_14.length;
 FUNC_3(VAR_5, "X509: serialNumber", VAR_12->serial_number,
      VAR_12->serial_number_len);


 if (FUNC_6(VAR_15, VAR_16 - VAR_15, &VAR_12->signature,
         &VAR_15))
  return -1;


 if (FUNC_8(VAR_15, VAR_16 - VAR_15, &VAR_12->issuer, &VAR_15))
  return -1;
 FUNC_5(&VAR_12->issuer, VAR_18, sizeof(VAR_18));
 FUNC_4(VAR_5, "X509: issuer %s", VAR_18);


 if (FUNC_10(VAR_15, VAR_16 - VAR_15, VAR_12, &VAR_15))
  return -1;


 VAR_20 = VAR_15;
 if (FUNC_8(VAR_15, VAR_16 - VAR_15, &VAR_12->subject, &VAR_15))
  return -1;
 VAR_12->subject_dn = FUNC_1(VAR_15 - VAR_20);
 if (!VAR_12->subject_dn)
  return -1;
 VAR_12->subject_dn_len = VAR_15 - VAR_20;
 FUNC_2(VAR_12->subject_dn, VAR_20, VAR_12->subject_dn_len);
 FUNC_5(&VAR_12->subject, VAR_18, sizeof(VAR_18));
 FUNC_4(VAR_5, "X509: subject %s", VAR_18);


 if (FUNC_9(VAR_15, VAR_16 - VAR_15, VAR_12, &VAR_15))
  return -1;

 if (VAR_15 == VAR_16)
  return 0;

 if (VAR_12->version == VAR_6)
  return 0;

 if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
     VAR_14.class != VAR_0) {
  FUNC_4(VAR_4, "X509: Expected Context-Specific"
      " tag to parse optional tbsCertificate "
      "field(s); parsed class %d tag 0x%x",
      VAR_14.class, VAR_14.tag);
  return -1;
 }

 if (VAR_14.tag == 1) {

  FUNC_4(VAR_4, "X509: issuerUniqueID");


  VAR_15 = VAR_14.payload + VAR_14.length;
  if (VAR_15 == VAR_16)
   return 0;

  if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
      VAR_14.class != VAR_0) {
   FUNC_4(VAR_4, "X509: Expected Context-Specific"
       " tag to parse optional tbsCertificate "
       "field(s); parsed class %d tag 0x%x",
       VAR_14.class, VAR_14.tag);
   return -1;
  }
 }

 if (VAR_14.tag == 2) {

  FUNC_4(VAR_4, "X509: subjectUniqueID");


  VAR_15 = VAR_14.payload + VAR_14.length;
  if (VAR_15 == VAR_16)
   return 0;

  if (FUNC_0(VAR_15, VAR_16 - VAR_15, &VAR_14) < 0 ||
      VAR_14.class != VAR_0) {
   FUNC_4(VAR_4, "X509: Expected Context-Specific"
       " tag to parse optional tbsCertificate "
       "field(s); parsed class %d tag 0x%x",
       VAR_14.class, VAR_14.tag);
   return -1;
  }
 }

 if (VAR_14.tag != 3) {
  FUNC_4(VAR_4, "X509: Ignored unexpected "
      "Context-Specific tag %d in optional "
      "tbsCertificate fields", VAR_14.tag);
  return 0;
 }



 if (VAR_12->version != VAR_8) {
  FUNC_4(VAR_4, "X509: X.509%d certificate and "
      "Extensions data which are only allowed for "
      "version 3", VAR_12->version + 1);
  return -1;
 }

 if (FUNC_7(VAR_12, VAR_14.payload, VAR_14.length) < 0)
  return -1;

 VAR_15 = VAR_14.payload + VAR_14.length;
 if (VAR_15 < VAR_16) {
  FUNC_3(VAR_4,
       "X509: Ignored extra tbsCertificate data",
       VAR_15, VAR_16 - VAR_15);
 }

 return 0;
}
