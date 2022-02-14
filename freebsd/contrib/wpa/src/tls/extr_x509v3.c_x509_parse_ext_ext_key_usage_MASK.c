
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct x509_certificate {int extensions_present; int ext_key_usage; } ;
struct asn1_oid {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int const* payload; } ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (int const*,int,struct asn1_oid*,int const**) ;
 int FUNC_2 (struct asn1_oid*,char*,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,char*,int const*,int) ;
 int FUNC_5 (int ,char*,char*,...) ;
 scalar_t__ FUNC_6 (struct asn1_oid*) ;
 scalar_t__ FUNC_7 (struct asn1_oid*) ;
 scalar_t__ FUNC_8 (struct asn1_oid*) ;
 scalar_t__ FUNC_9 (struct asn1_oid*) ;

__attribute__((used)) static int FUNC_10(struct x509_certificate *VAR_9,
     const u8 *VAR_10, size_t VAR_11)
{
 struct asn1_hdr VAR_12;
 const u8 *VAR_13;
 struct asn1_oid VAR_14;







 if (FUNC_0(VAR_10, VAR_11, &VAR_12) < 0 ||
     VAR_12.class != VAR_0 ||
     VAR_12.tag != VAR_1) {
  FUNC_5(VAR_2, "X509: Expected SEQUENCE "
      "(ExtKeyUsageSyntax) - found class %d tag 0x%x",
      VAR_12.class, VAR_12.tag);
  return -1;
 }
 if (VAR_12.length > VAR_10 + VAR_11 - VAR_12.payload)
  return -1;
 VAR_10 = VAR_12.payload;
 VAR_13 = VAR_10 + VAR_12.length;

 FUNC_4(VAR_3, "X509: ExtKeyUsageSyntax", VAR_10, VAR_13 - VAR_10);

 while (VAR_10 < VAR_13) {
  char VAR_15[80];

  if (FUNC_1(VAR_10, VAR_13 - VAR_10, &VAR_14, &VAR_10))
   return -1;
  if (FUNC_6(&VAR_14)) {
   FUNC_3(VAR_15, "anyExtendedKeyUsage", sizeof(VAR_15));
   VAR_9->ext_key_usage |= VAR_5;
  } else if (FUNC_9(&VAR_14)) {
   FUNC_3(VAR_15, "id-kp-serverAuth", sizeof(VAR_15));
   VAR_9->ext_key_usage |= VAR_8;
  } else if (FUNC_7(&VAR_14)) {
   FUNC_3(VAR_15, "id-kp-clientAuth", sizeof(VAR_15));
   VAR_9->ext_key_usage |= VAR_6;
  } else if (FUNC_8(&VAR_14)) {
   FUNC_3(VAR_15, "id-kp-OCSPSigning", sizeof(VAR_15));
   VAR_9->ext_key_usage |= VAR_7;
  } else {
   FUNC_2(&VAR_14, VAR_15, sizeof(VAR_15));
  }
  FUNC_5(VAR_2, "ExtKeyUsage KeyPurposeId: %s", VAR_15);
 }

 VAR_9->extensions_present |= VAR_4;

 return 0;
}
