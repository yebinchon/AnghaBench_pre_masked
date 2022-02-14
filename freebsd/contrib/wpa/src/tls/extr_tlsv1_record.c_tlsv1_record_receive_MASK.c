
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tlsv1_record_layer {scalar_t__ read_cipher_suite; size_t iv_size; scalar_t__ tls_version; size_t hash_size; int* read_seq_num; int read_mac_secret; int hash_alg; int read_cbc; } ;
struct crypto_hash {int dummy; } ;
typedef int hash ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_0 (int const*) ;
 int FUNC_1 (int*,size_t) ;
 scalar_t__ FUNC_2 (int ,int const*,int*,size_t) ;
 scalar_t__ FUNC_3 (struct crypto_hash*,int*,size_t*) ;
 struct crypto_hash* FUNC_4 (int ,int ,size_t) ;
 int FUNC_5 (struct crypto_hash*,int const*,size_t) ;
 int FUNC_6 (int*,size_t) ;
 scalar_t__ FUNC_7 (int*,int*,size_t) ;
 int FUNC_8 (int*,int const*,size_t) ;
 int FUNC_9 (int*,int*,size_t) ;
 int FUNC_10 (int ,char*,int const*,int) ;
 int FUNC_11 (int ,char*,int*,size_t) ;
 int FUNC_12 (int ,char*,...) ;

int FUNC_13(struct tlsv1_record_layer *VAR_16,
    const u8 *VAR_17, size_t VAR_18,
    u8 *VAR_19, size_t *VAR_20, u8 *VAR_21)
{
 size_t VAR_22, VAR_23, VAR_24;
 u8 VAR_25;
 struct crypto_hash *VAR_26;
 u8 VAR_27[2], VAR_28[100];
 int VAR_29 = 0;
 u8 VAR_30;

 if (VAR_18 < VAR_13) {
  FUNC_12(VAR_0, "TLSv1: Too short record (in_len=%lu) - "
      "need more data",
      (unsigned long) VAR_18);
  FUNC_10(VAR_1, "TLSv1: Record Layer - Received",
       VAR_17, VAR_18);
  return 0;
 }

 VAR_30 = VAR_17[0];
 VAR_23 = FUNC_0(VAR_17 + 3);
 FUNC_12(VAR_0, "TLSv1: Received content type %d version %d.%d "
     "length %d", VAR_30, VAR_17[1], VAR_17[2], (int) VAR_23);






 if (VAR_17[1] != 0x03) {
  FUNC_12(VAR_0, "TLSv1: Unexpected protocol version "
      "%u.%u", VAR_17[1], VAR_17[2]);
  *VAR_21 = VAR_5;
  return -1;
 }


 if (VAR_13 + VAR_23 > 18432) {
  FUNC_12(VAR_0, "TLSv1: Record overflow (len=%lu)",
      (unsigned long) (VAR_13 + VAR_23));
  *VAR_21 = VAR_6;
  return -1;
 }

 VAR_17 += VAR_13;
 VAR_18 -= VAR_13;

 if (VAR_23 > VAR_18) {
  FUNC_12(VAR_0, "TLSv1: Not all record data included "
      "(rlen=%lu > in_len=%lu)",
      (unsigned long) VAR_23, (unsigned long) VAR_18);
  return 0;
 }

 FUNC_10(VAR_1, "TLSv1: Record Layer - Received",
      VAR_17, VAR_23);

 if (VAR_30 != VAR_11 &&
     VAR_30 != VAR_10 &&
     VAR_30 != VAR_8 &&
     VAR_30 != VAR_9) {
  FUNC_12(VAR_0, "TLSv1: Ignore record with unknown "
      "content type 0x%x", VAR_30);
  *VAR_21 = VAR_7;
  return -1;
 }

 VAR_18 = VAR_23;

 if (*VAR_20 < VAR_18) {
  FUNC_12(VAR_0, "TLSv1: Not enough output buffer for "
      "processing received record");
  *VAR_21 = VAR_4;
  return -1;
 }

 if (VAR_16->read_cipher_suite != VAR_12) {
  size_t VAR_31;
  if (FUNC_2(VAR_16->read_cbc, VAR_17,
       VAR_19, VAR_18) < 0) {
   *VAR_21 = VAR_3;
   return -1;
  }
  VAR_31 = VAR_18;
  FUNC_11(VAR_1, "TLSv1: Record Layer - Decrypted "
    "data", VAR_19, VAR_31);

  if (VAR_16->iv_size) {
   if (VAR_16->tls_version >= VAR_15) {

    if (VAR_31 < VAR_16->iv_size) {
     FUNC_12(VAR_0, "TLSv1.1: Not "
         "enough room for IV");
     VAR_29 = 1;
     goto check_mac;
    }
    FUNC_9(VAR_19, VAR_19 + VAR_16->iv_size,
        VAR_31 - VAR_16->iv_size);
    VAR_31 -= VAR_16->iv_size;
   }


   if (VAR_31 == 0) {
    FUNC_12(VAR_0, "TLSv1: Too short record"
        " (no pad)");
    VAR_29 = 1;
    goto check_mac;
   }
   VAR_25 = VAR_19[VAR_31 - 1];
   if (VAR_25 >= VAR_31) {
    FUNC_12(VAR_0, "TLSv1: Incorrect pad "
        "length (%u, plen=%lu) in "
        "received record",
        VAR_25, (unsigned long) VAR_31);
    VAR_29 = 1;
    goto check_mac;
   }
   for (VAR_22 = VAR_31 - VAR_25 - 1; VAR_22 < VAR_31 - 1; VAR_22++) {
    if (VAR_19[VAR_22] != VAR_25) {
     FUNC_10(VAR_0,
          "TLSv1: Invalid pad in "
          "received record",
          VAR_19 + VAR_31 - VAR_25 -
          1, VAR_25 + 1);
     VAR_29 = 1;
     goto check_mac;
    }
   }

   VAR_31 -= VAR_25 + 1;

   FUNC_11(VAR_1, "TLSv1: Record Layer - "
     "Decrypted data with IV and padding "
     "removed", VAR_19, VAR_31);
  }

 check_mac:
  if (VAR_31 < VAR_16->hash_size) {
   FUNC_12(VAR_0, "TLSv1: Too short record; no "
       "hash value");
   *VAR_21 = VAR_2;
   return -1;
  }

  VAR_31 -= VAR_16->hash_size;

  VAR_26 = FUNC_4(VAR_16->hash_alg, VAR_16->read_mac_secret,
     VAR_16->hash_size);
  if (VAR_26 == ((void*)0)) {
   FUNC_12(VAR_0, "TLSv1: Record Layer - Failed "
       "to initialize HMAC");
   *VAR_21 = VAR_4;
   return -1;
  }

  FUNC_5(VAR_26, VAR_16->read_seq_num, VAR_14);

  FUNC_5(VAR_26, VAR_17 - VAR_13, 3);
  FUNC_1(VAR_27, VAR_31);
  FUNC_5(VAR_26, VAR_27, 2);
  FUNC_5(VAR_26, VAR_19, VAR_31);
  VAR_24 = sizeof(VAR_28);
  if (FUNC_3(VAR_26, VAR_28, &VAR_24) < 0) {
   FUNC_12(VAR_0, "TLSv1: Record Layer - Failed "
       "to calculate HMAC");
   *VAR_21 = VAR_4;
   return -1;
  }
  if (VAR_24 != VAR_16->hash_size ||
      FUNC_7(VAR_28, VAR_19 + VAR_31, VAR_24) != 0 ||
      VAR_29) {
   FUNC_12(VAR_0, "TLSv1: Invalid HMAC value in "
       "received message (force_mac_error=%d)",
       VAR_29);
   *VAR_21 = VAR_2;
   return -1;
  }

  *VAR_20 = VAR_31;
 } else {
  FUNC_8(VAR_19, VAR_17, VAR_18);
  *VAR_20 = VAR_18;
 }


 if (VAR_13 + *VAR_20 > 17408) {
  FUNC_12(VAR_0, "TLSv1: Record overflow (len=%lu)",
      (unsigned long) (VAR_13 + *VAR_20));
  *VAR_21 = VAR_6;
  return -1;
 }

 FUNC_6(VAR_16->read_seq_num, VAR_14);

 return VAR_13 + VAR_23;
}
