
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int dummy; } ;
struct asn1_oid {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int* payload; int length; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int const*,int,struct asn1_oid*,int const**) ;
 int FUNC_2 (struct asn1_oid*,char*,int) ;
 int FUNC_3 (int ,char*,int*,int) ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (struct x509_certificate*,struct asn1_oid*,int*,int) ;

__attribute__((used)) static int FUNC_6(struct x509_certificate *VAR_8,
    const u8 *VAR_9, size_t VAR_10, const u8 **VAR_11)
{
 const u8 *VAR_12;
 struct asn1_hdr VAR_13;
 struct asn1_oid VAR_14;
 int VAR_15 = 0, VAR_16;
 char VAR_17[80];
 if (FUNC_0(VAR_9, VAR_10, &VAR_13) < 0 ||
     VAR_13.class != VAR_1 ||
     VAR_13.tag != VAR_4) {
  FUNC_4(VAR_5, "X509: Unexpected ASN.1 header in "
      "Extensions: class %d tag 0x%x; expected SEQUENCE",
      VAR_13.class, VAR_13.tag);
  return -1;
 }
 VAR_9 = VAR_13.payload;
 *VAR_11 = VAR_12 = VAR_9 + VAR_13.length;

 if (FUNC_1(VAR_9, VAR_12 - VAR_9, &VAR_14, &VAR_9) < 0) {
  FUNC_4(VAR_5, "X509: Unexpected ASN.1 data for "
      "Extension (expected OID)");
  return -1;
 }

 if (FUNC_0(VAR_9, VAR_12 - VAR_9, &VAR_13) < 0 ||
     VAR_13.class != VAR_1 ||
     (VAR_13.tag != VAR_2 &&
      VAR_13.tag != VAR_3)) {
  FUNC_4(VAR_5, "X509: Unexpected ASN.1 header in "
      "Extensions: class %d tag 0x%x; expected BOOLEAN "
      "or OCTET STRING", VAR_13.class, VAR_13.tag);
  return -1;
 }

 if (VAR_13.tag == VAR_2) {
  VAR_15 = VAR_13.payload[0];
  VAR_9 = VAR_13.payload;
  if (FUNC_0(VAR_9, VAR_12 - VAR_9, &VAR_13) < 0 ||
      (VAR_13.class != VAR_1 &&
       VAR_13.class != VAR_0) ||
      VAR_13.tag != VAR_3) {
   FUNC_4(VAR_5, "X509: Unexpected ASN.1 header "
       "in Extensions: class %d tag 0x%x; "
       "expected OCTET STRING",
       VAR_13.class, VAR_13.tag);
   return -1;
  }
 }

 FUNC_2(&VAR_14, VAR_17, sizeof(VAR_17));
 FUNC_4(VAR_5, "X509: Extension: extnID=%s critical=%d",
     VAR_17, VAR_15);
 FUNC_3(VAR_7, "X509: extnValue", VAR_13.payload, VAR_13.length);

 VAR_16 = FUNC_5(VAR_8, &VAR_14, VAR_13.payload, VAR_13.length);
 if (VAR_16 < 0)
  return VAR_16;
 if (VAR_16 == 1 && VAR_15) {
  FUNC_4(VAR_6, "X509: Unknown critical extension %s",
      VAR_17);
  return -1;
 }

 return 0;
}
