
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct x509_certificate {int dummy; } ;
struct tlsv1_client {int dummy; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; int * payload; } ;
typedef enum tls_ocsp_result { ____Placeholder_tls_ocsp_result } tls_ocsp_result ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int const*,int,struct asn1_hdr*) ;
 scalar_t__ FUNC_1 (struct tlsv1_client*,struct x509_certificate*,struct x509_certificate*,int *,int,int*) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static enum tls_ocsp_result
FUNC_3(struct tlsv1_client *VAR_5,
      struct x509_certificate *VAR_6,
      struct x509_certificate *VAR_7, const u8 *VAR_8,
      size_t VAR_9)
{
 struct asn1_hdr VAR_10;
 const u8 *VAR_11, *VAR_12;
 enum tls_ocsp_result VAR_13;

 VAR_11 = VAR_8;
 VAR_12 = VAR_8 + VAR_9;
 while (VAR_11 < VAR_12) {

  if (FUNC_0(VAR_11, VAR_12 - VAR_11, &VAR_10) < 0 ||
      VAR_10.class != VAR_0 ||
      VAR_10.tag != VAR_1) {
   FUNC_2(VAR_2,
       "OCSP: Expected SEQUENCE (SingleResponse) - found class %d tag 0x%x",
       VAR_10.class, VAR_10.tag);
   return VAR_3;
  }
  if (FUNC_1(VAR_5, VAR_6, VAR_7,
           VAR_10.payload, VAR_10.length,
           &VAR_13) == 0)
   return VAR_13;
  VAR_11 = VAR_10.payload + VAR_10.length;
 }

 FUNC_2(VAR_2,
     "OCSP: Did not find a response matching the server certificate");
 return VAR_4;
}
