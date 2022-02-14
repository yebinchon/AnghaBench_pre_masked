
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {scalar_t__ not_after; scalar_t__ not_before; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; size_t length; int * payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*,size_t,struct asn1_hdr*) ;
 int FUNC_1 (int ,char*,int *,size_t) ;
 int FUNC_2 (int ,char*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_3 (int *,size_t,unsigned long,scalar_t__*) ;

__attribute__((used)) static int FUNC_4(const u8 *VAR_4, size_t VAR_5,
          struct x509_certificate *VAR_6, const u8 **VAR_7)
{
 struct asn1_hdr VAR_8;
 const u8 *VAR_9;
 size_t VAR_10;
 if (FUNC_0(VAR_4, VAR_5, &VAR_8) < 0 ||
     VAR_8.class != VAR_0 ||
     VAR_8.tag != VAR_1) {
  FUNC_2(VAR_2, "X509: Expected SEQUENCE "
      "(Validity) - found class %d tag 0x%x",
      VAR_8.class, VAR_8.tag);
  return -1;
 }
 VAR_9 = VAR_8.payload;
 VAR_10 = VAR_8.length;

 if (VAR_10 > (size_t) (VAR_4 + VAR_5 - VAR_9))
  return -1;

 *VAR_7 = VAR_9 + VAR_10;

 if (FUNC_0(VAR_9, VAR_10, &VAR_8) < 0 ||
     VAR_8.class != VAR_0 ||
     FUNC_3(VAR_8.payload, VAR_8.length, VAR_8.tag,
       &VAR_6->not_before) < 0) {
  FUNC_1(VAR_2, "X509: Failed to parse notBefore "
      "Time", VAR_8.payload, VAR_8.length);
  return -1;
 }

 VAR_9 = VAR_8.payload + VAR_8.length;
 VAR_10 = *VAR_7 - VAR_9;

 if (FUNC_0(VAR_9, VAR_10, &VAR_8) < 0 ||
     VAR_8.class != VAR_0 ||
     FUNC_3(VAR_8.payload, VAR_8.length, VAR_8.tag,
       &VAR_6->not_after) < 0) {
  FUNC_1(VAR_2, "X509: Failed to parse notAfter "
      "Time", VAR_8.payload, VAR_8.length);
  return -1;
 }

 FUNC_2(VAR_3, "X509: Validity: notBefore: %lu notAfter: %lu",
     (unsigned long) VAR_6->not_before,
     (unsigned long) VAR_6->not_after);

 return 0;
}
