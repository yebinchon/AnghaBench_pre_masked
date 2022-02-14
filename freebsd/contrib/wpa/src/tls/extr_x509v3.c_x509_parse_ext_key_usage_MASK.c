
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int key_usage; int extensions_present; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int const*,size_t,struct asn1_hdr*) ;
 int FUNC_2 (int ,char*,scalar_t__,...) ;

__attribute__((used)) static int FUNC_3(struct x509_certificate *VAR_4,
        const u8 *VAR_5, size_t VAR_6)
{
 struct asn1_hdr VAR_7;
 if (FUNC_1(VAR_5, VAR_6, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1 ||
     VAR_7.length < 1) {
  FUNC_2(VAR_2, "X509: Expected BIT STRING in "
      "KeyUsage; found %d tag 0x%x len %d",
      VAR_7.class, VAR_7.tag, VAR_7.length);
  return -1;
 }

 VAR_4->extensions_present |= VAR_3;
 VAR_4->key_usage = FUNC_0(VAR_7.payload, VAR_7.length);

 FUNC_2(VAR_2, "X509: KeyUsage 0x%lx", VAR_4->key_usage);

 return 0;
}
