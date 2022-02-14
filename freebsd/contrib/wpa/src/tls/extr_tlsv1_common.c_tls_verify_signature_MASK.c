
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct crypto_public_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (struct crypto_public_key*,int const*,int,int *,size_t*) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int const*,int const*,size_t) ;
 int FUNC_6 (int ,char*,int const*,int) ;
 int FUNC_7 (int ,char*,int const*,size_t) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(u16 VAR_6, struct crypto_public_key *VAR_7,
    const u8 *VAR_8, size_t VAR_9,
    const u8 *VAR_10, size_t VAR_11, u8 *VAR_12)
{
 u8 *VAR_13;
 const u8 *VAR_14 = VAR_10 + VAR_11;
 const u8 *VAR_15;
 u16 VAR_16;
 size_t VAR_17;

 if (VAR_14 - VAR_10 < 2) {
  *VAR_12 = VAR_2;
  return -1;
 }
 VAR_16 = FUNC_0(VAR_10);
 VAR_10 += 2;
 if (VAR_14 - VAR_10 < VAR_16) {
  *VAR_12 = VAR_2;
  return -1;
 }
 if (VAR_14 - VAR_10 > VAR_16) {
  FUNC_6(VAR_1, "Additional data after Signature",
       VAR_10 + VAR_16, VAR_14 - VAR_10 - VAR_16);
  VAR_14 = VAR_10 + VAR_16;
 }

 FUNC_6(VAR_1, "TLSv1: Signature", VAR_10, VAR_14 - VAR_10);
 if (VAR_7 == ((void*)0)) {
  FUNC_8(VAR_0, "TLSv1: No public key to verify signature");
  *VAR_12 = VAR_4;
  return -1;
 }

 VAR_17 = VAR_14 - VAR_10;
 VAR_13 = FUNC_3(VAR_14 - VAR_10);
 if (VAR_13 == ((void*)0)) {
  *VAR_12 = VAR_4;
  return -1;
 }
 if (FUNC_1(VAR_7, VAR_10, VAR_14 - VAR_10, VAR_13, &VAR_17) <
     0) {
  FUNC_8(VAR_0, "TLSv1: Failed to decrypt signature");
  FUNC_2(VAR_13);
  *VAR_12 = VAR_3;
  return -1;
 }
 VAR_15 = VAR_13;

 FUNC_7(VAR_1, "TLSv1: Decrypted Signature",
   VAR_15, VAR_17);
 if (VAR_17 != VAR_9 ||
     FUNC_5(VAR_15, VAR_8, VAR_9) != 0) {
  FUNC_8(VAR_0, "TLSv1: Invalid Signature in CertificateVerify - did not match calculated hash");
  FUNC_2(VAR_13);
  *VAR_12 = VAR_3;
  return -1;
 }

 FUNC_2(VAR_13);

 return 0;
}
