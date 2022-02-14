
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct x509_certificate {size_t cert_len; int tbs_cert_len; int sign_value_len; scalar_t__ const* sign_value; int signature_alg; scalar_t__* cert_start; scalar_t__* tbs_cert_start; } ;
struct asn1_hdr {scalar_t__ class; scalar_t__ tag; int length; scalar_t__* payload; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__ const*,int,struct asn1_hdr*) ;
 int FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (struct x509_certificate*,scalar_t__ const*,size_t) ;
 scalar_t__ const* FUNC_3 (scalar_t__ const*,int) ;
 struct x509_certificate* FUNC_4 (int) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,int) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (struct x509_certificate*) ;
 scalar_t__ FUNC_8 (scalar_t__ const*,int,int *,scalar_t__ const**) ;
 scalar_t__ FUNC_9 (scalar_t__ const*,int,struct x509_certificate*,scalar_t__ const**) ;

struct x509_certificate * FUNC_10(const u8 *VAR_5, size_t VAR_6)
{
 struct asn1_hdr VAR_7;
 const u8 *VAR_8, *VAR_9, *VAR_10;
 struct x509_certificate *VAR_11;

 VAR_11 = FUNC_4(sizeof(*VAR_11) + VAR_6);
 if (VAR_11 == ((void*)0))
  return ((void*)0);
 FUNC_2(VAR_11 + 1, VAR_5, VAR_6);
 VAR_11->cert_start = (u8 *) (VAR_11 + 1);
 VAR_11->cert_len = VAR_6;

 VAR_8 = VAR_5;
 VAR_9 = VAR_5 + VAR_6;




 if (FUNC_0(VAR_8, VAR_6, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_2) {
  FUNC_6(VAR_3, "X509: Certificate did not start with "
      "a valid SEQUENCE - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 VAR_8 = VAR_7.payload;

 if (VAR_7.length > VAR_9 - VAR_8) {
  FUNC_7(VAR_11);
  return ((void*)0);
 }

 if (VAR_7.length < VAR_9 - VAR_8) {
  FUNC_5(VAR_4, "X509: Ignoring extra data after DER "
       "encoded certificate",
       VAR_8 + VAR_7.length, VAR_9 - (VAR_8 + VAR_7.length));
  VAR_9 = VAR_8 + VAR_7.length;
 }

 VAR_10 = VAR_8;
 VAR_11->tbs_cert_start = VAR_11->cert_start + (VAR_10 - VAR_5);
 if (FUNC_9(VAR_8, VAR_9 - VAR_8, VAR_11, &VAR_8)) {
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 VAR_11->tbs_cert_len = VAR_8 - VAR_10;


 if (FUNC_8(VAR_8, VAR_9 - VAR_8,
         &VAR_11->signature_alg, &VAR_8)) {
  FUNC_7(VAR_11);
  return ((void*)0);
 }


 if (FUNC_0(VAR_8, VAR_9 - VAR_8, &VAR_7) < 0 ||
     VAR_7.class != VAR_0 ||
     VAR_7.tag != VAR_1) {
  FUNC_6(VAR_3, "X509: Expected BITSTRING "
      "(signatureValue) - found class %d tag 0x%x",
      VAR_7.class, VAR_7.tag);
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 if (VAR_7.length < 1) {
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 VAR_8 = VAR_7.payload;
 if (*VAR_8) {
  FUNC_6(VAR_3, "X509: BITSTRING - %d unused bits",
      *VAR_8);




  FUNC_7(VAR_11);
  return ((void*)0);
 }
 FUNC_1(VAR_11->sign_value);
 VAR_11->sign_value = FUNC_3(VAR_8 + 1, VAR_7.length - 1);
 if (VAR_11->sign_value == ((void*)0)) {
  FUNC_6(VAR_3, "X509: Failed to allocate memory for "
      "signatureValue");
  FUNC_7(VAR_11);
  return ((void*)0);
 }
 VAR_11->sign_value_len = VAR_7.length - 1;
 FUNC_5(VAR_4, "X509: signature",
      VAR_11->sign_value, VAR_11->sign_value_len);

 return VAR_11;
}
