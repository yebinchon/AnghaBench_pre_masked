
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned char const u8 ;
struct dpp_bootstrap_info {unsigned char const* pubkey_hash; int * pubkey; int curve; } ;
typedef int buf ;
typedef int X509_PUBKEY ;
typedef int X509_ALGOR ;
typedef int EVP_PKEY ;
typedef int const ASN1_OBJECT ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (char*,int,int const*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int const**,int*,void*,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int const**,unsigned char const**,int*,int **,int *) ;
 int FUNC_7 (int **,int *) ;
 unsigned char* FUNC_8 (unsigned char const*,int,size_t*) ;
 int * FUNC_9 (int *,unsigned char const**,size_t) ;
 int FUNC_10 (int const*) ;
 int FUNC_11 (unsigned char const*) ;
 char* FUNC_12 (char const*,char) ;
 scalar_t__ FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (int,unsigned char const**,size_t*,unsigned char const*) ;
 int FUNC_15 (int ,char*,unsigned char const*,int) ;
 int FUNC_16 (int ,char*,...) ;

__attribute__((used)) static int FUNC_17(struct dpp_bootstrap_info *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 u8 *VAR_7;
 size_t VAR_8;
 EVP_PKEY *VAR_9;
 const unsigned char *VAR_10;
 int VAR_11;
 X509_PUBKEY *VAR_12 = ((void*)0);
 ASN1_OBJECT *VAR_13;
 const unsigned char *VAR_14;
 int VAR_15;
 X509_ALGOR *VAR_16;



 ASN1_OBJECT *VAR_17;



 const void *VAR_18;
 int VAR_19;
 const ASN1_OBJECT *VAR_20;
 char VAR_21[100];

 VAR_6 = FUNC_12(VAR_5, ';');
 if (!VAR_6)
  return -1;

 VAR_7 = FUNC_8((const unsigned char *) VAR_5, VAR_6 - VAR_5,
        &VAR_8);
 if (!VAR_7) {
  FUNC_16(VAR_1,
      "DPP: Invalid base64 encoding on URI public-key");
  return -1;
 }
 FUNC_15(VAR_1, "DPP: Base64 decoded URI public-key",
      VAR_7, VAR_8);

 if (FUNC_14(1, (const u8 **) &VAR_7, &VAR_8,
     VAR_4->pubkey_hash) < 0) {
  FUNC_16(VAR_1, "DPP: Failed to hash public key");
  FUNC_11(VAR_7);
  return -1;
 }
 FUNC_15(VAR_1, "DPP: Public key hash",
      VAR_4->pubkey_hash, VAR_2);
 VAR_10 = VAR_7;
 VAR_9 = FUNC_9(((void*)0), &VAR_10, VAR_8);
 FUNC_11(VAR_7);

 if (!VAR_9) {
  FUNC_16(VAR_1,
      "DPP: Could not parse URI public-key SubjectPublicKeyInfo");
  return -1;
 }

 if (FUNC_2(FUNC_1(VAR_9)) != VAR_0) {
  FUNC_16(VAR_1,
      "DPP: SubjectPublicKeyInfo does not describe an EC key");
  FUNC_0(VAR_9);
  return -1;
 }

 VAR_11 = FUNC_7(&VAR_12, VAR_9);
 if (VAR_11 != 1) {
  FUNC_16(VAR_1, "DPP: Could not set pubkey");
  goto fail;
 }

 VAR_11 = FUNC_6(&VAR_13, &VAR_14, &VAR_15, &VAR_16, VAR_12);
 if (VAR_11 != 1) {
  FUNC_16(VAR_1,
      "DPP: Could not extract SubjectPublicKeyInfo parameters");
  goto fail;
 }
 VAR_11 = FUNC_3(VAR_21, sizeof(VAR_21), VAR_13, 0);
 if (VAR_11 < 0 || (size_t) VAR_11 >= sizeof(VAR_21)) {
  FUNC_16(VAR_1,
      "DPP: Could not extract SubjectPublicKeyInfo algorithm");
  goto fail;
 }
 FUNC_16(VAR_1, "DPP: URI subjectPublicKey algorithm: %s", VAR_21);
 if (FUNC_13(VAR_21, "id-ecPublicKey") != 0) {
  FUNC_16(VAR_1,
      "DPP: Unsupported SubjectPublicKeyInfo algorithm");
  goto fail;
 }

 FUNC_4(&VAR_17, &VAR_19, (void *) &VAR_18, VAR_16);
 if (VAR_19 != VAR_3) {
  FUNC_16(VAR_1,
      "DPP: SubjectPublicKeyInfo parameters did not contain an OID");
  goto fail;
 }
 VAR_20 = VAR_18;
 VAR_11 = FUNC_3(VAR_21, sizeof(VAR_21), VAR_20, 0);
 if (VAR_11 < 0 || (size_t) VAR_11 >= sizeof(VAR_21)) {
  FUNC_16(VAR_1,
      "DPP: Could not extract SubjectPublicKeyInfo parameters OID");
  goto fail;
 }
 FUNC_16(VAR_1, "DPP: URI subjectPublicKey parameters: %s", VAR_21);
 VAR_4->curve = FUNC_10(VAR_20);
 if (!VAR_4->curve) {
  FUNC_16(VAR_1,
      "DPP: Unsupported SubjectPublicKeyInfo curve: %s",
      VAR_21);
  goto fail;
 }

 FUNC_15(VAR_1, "DPP: URI subjectPublicKey", VAR_14, VAR_15);

 FUNC_5(VAR_12);
 VAR_4->pubkey = VAR_9;
 return 0;
fail:
 FUNC_5(VAR_12);
 FUNC_0(VAR_9);
 return -1;
}
