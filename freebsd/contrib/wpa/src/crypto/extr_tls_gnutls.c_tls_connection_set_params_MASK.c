
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct tls_connection_params {int flags; char const* ca_cert; char const* private_key; int private_key_passwd; int private_key_blob_len; scalar_t__ private_key_blob; int client_cert_blob_len; scalar_t__ client_cert_blob; int client_cert; scalar_t__ ca_cert_blob; scalar_t__ ca_path; int ca_cert_blob_len; scalar_t__ openssl_ecdh_curves; scalar_t__ openssl_ciphers; scalar_t__ domain_match; scalar_t__ suffix_match; scalar_t__ altsubject_match; scalar_t__ subject_match; } ;
struct tls_connection {int flags; int disable_time_checks; int verify_peer; int params_set; int xcred; int session; int * domain_match; int * suffix_match; } ;
typedef int prio_buf ;
struct TYPE_8__ {unsigned char* data; int size; } ;
typedef TYPE_1__ gnutls_datum_t ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,char const*,int ) ;
 int FUNC_3 (int ,int ,char const*,int ,int ,int ) ;
 int FUNC_4 (int ,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_5 (int ,TYPE_1__*,TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (int ,char const*,int ,int ) ;
 int FUNC_7 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_8 (int ,char const*,int ) ;
 int FUNC_9 (int ,TYPE_1__*,int ) ;
 int FUNC_10 (int ,int ,int ) ;
 int FUNC_11 (int ,int *,int ,int *) ;
 int FUNC_12 (int ,char const*,char const**) ;
 char const* FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (char*,int,char*,char*,char*,char*) ;
 scalar_t__ FUNC_16 (scalar_t__,char*) ;
 void* FUNC_17 (scalar_t__) ;
 int VAR_19 ;
 int FUNC_18 (int ,char*,...) ;

int FUNC_19(void *VAR_20, struct tls_connection *VAR_21,
         const struct tls_connection_params *VAR_22)
{
 int VAR_23;
 const char *VAR_24;
 char VAR_25[100];
 const char *VAR_26 = ((void*)0);

 if (VAR_21 == ((void*)0) || VAR_22 == ((void*)0))
  return -1;

 if (VAR_22->flags & VAR_17) {
  FUNC_18(VAR_8,
      "GnuTLS: ocsp=3 not supported");
  return -1;
 }

 if (VAR_22->flags & VAR_14) {
  FUNC_18(VAR_8,
      "GnuTLS: tls_ext_cert_check=1 not supported");
  return -1;
 }

 if (VAR_22->subject_match) {
  FUNC_18(VAR_8, "GnuTLS: subject_match not supported");
  return -1;
 }

 if (VAR_22->altsubject_match) {
  FUNC_18(VAR_8, "GnuTLS: altsubject_match not supported");
  return -1;
 }

 FUNC_14(VAR_21->suffix_match);
 VAR_21->suffix_match = ((void*)0);
 if (VAR_22->suffix_match) {
  VAR_21->suffix_match = FUNC_17(VAR_22->suffix_match);
  if (VAR_21->suffix_match == ((void*)0))
   return -1;
 }
 if (VAR_22->domain_match) {
  FUNC_18(VAR_8, "GnuTLS: domain_match not supported");
  return -1;
 }


 VAR_21->flags = VAR_22->flags;

 if (VAR_22->flags & (VAR_11 |
        VAR_12 |
        VAR_13)) {
  FUNC_15(VAR_25, sizeof(VAR_25),
       "NORMAL:-VERS-SSL3.0%s%s%s",
       VAR_22->flags & VAR_11 ?
       ":-VERS-TLS1.0" : "",
       VAR_22->flags & VAR_12 ?
       ":-VERS-TLS1.1" : "",
       VAR_22->flags & VAR_13 ?
       ":-VERS-TLS1.2" : "");
  VAR_26 = VAR_25;
 }

 if (VAR_22->openssl_ciphers) {
  if (FUNC_16(VAR_22->openssl_ciphers, "SUITEB128") == 0) {
   VAR_26 = "SUITEB128";
  } else if (FUNC_16(VAR_22->openssl_ciphers,
         "SUITEB192") == 0) {
   VAR_26 = "SUITEB192";
  } else if ((VAR_22->flags & VAR_18) &&
      FUNC_16(VAR_22->openssl_ciphers,
         "ECDHE-RSA-AES256-GCM-SHA384") == 0) {
   VAR_26 = "NONE:+VERS-TLS1.2:+AEAD:+ECDHE-RSA:+AES-256-GCM:+SIGN-RSA-SHA384:+CURVE-SECP384R1:+COMP-NULL";
  } else if (FUNC_16(VAR_22->openssl_ciphers,
         "ECDHE-RSA-AES256-GCM-SHA384") == 0) {
   VAR_26 = "NONE:+VERS-TLS1.2:+AEAD:+ECDHE-RSA:+AES-256-GCM:+SIGN-RSA-SHA384:+CURVE-SECP384R1:+COMP-NULL";
  } else if (FUNC_16(VAR_22->openssl_ciphers,
         "DHE-RSA-AES256-GCM-SHA384") == 0) {
   VAR_26 = "NONE:+VERS-TLS1.2:+AEAD:+DHE-RSA:+AES-256-GCM:+SIGN-RSA-SHA384:+CURVE-SECP384R1:+COMP-NULL:%PROFILE_HIGH";
  } else if (FUNC_16(VAR_22->openssl_ciphers,
         "ECDHE-ECDSA-AES256-GCM-SHA384") == 0) {
   VAR_26 = "NONE:+VERS-TLS1.2:+AEAD:+ECDHE-ECDSA:+AES-256-GCM:+SIGN-RSA-SHA384:+CURVE-SECP384R1:+COMP-NULL";
  } else {
   FUNC_18(VAR_8,
       "GnuTLS: openssl_ciphers not supported");
   return -1;
  }
 } else if (VAR_22->flags & VAR_18) {
  VAR_26 = "NONE:+VERS-TLS1.2:+AEAD:+ECDHE-ECDSA:+ECDHE-RSA:+DHE-RSA:+AES-256-GCM:+SIGN-RSA-SHA384:+CURVE-SECP384R1:+COMP-NULL:%PROFILE_HIGH";
 }

 if (VAR_26) {
  FUNC_18(VAR_6, "GnuTLS: Set priority string: %s", VAR_26);
  VAR_23 = FUNC_12(VAR_21->session, VAR_26, &VAR_24);
  if (VAR_23 < 0) {
   FUNC_18(VAR_7,
       "GnuTLS: Priority string failure at '%s'",
       VAR_24);
   return -1;
  }
 }

 if (VAR_22->openssl_ecdh_curves) {
  FUNC_18(VAR_8,
      "GnuTLS: openssl_ecdh_curves not supported");
  return -1;
 }




 if (VAR_22->ca_cert) {
  FUNC_18(VAR_6, "GnuTLS: Try to parse %s in DER format",
      VAR_22->ca_cert);
  VAR_23 = FUNC_8(
   VAR_21->xcred, VAR_22->ca_cert, VAR_4);
  if (VAR_23 < 0) {
   FUNC_18(VAR_6,
       "GnuTLS: Failed to read CA cert '%s' in DER format (%s) - try in PEM format",
       VAR_22->ca_cert,
       FUNC_13(VAR_23));
   VAR_23 = FUNC_8(
    VAR_21->xcred, VAR_22->ca_cert,
    VAR_5);
   if (VAR_23 < 0) {
    FUNC_18(VAR_6,
        "Failed to read CA cert '%s' in PEM format: %s",
        VAR_22->ca_cert,
        FUNC_13(VAR_23));
    return -1;
   }
   FUNC_18(VAR_6,
       "GnuTLS: Successfully read CA cert '%s' in PEM format",
       VAR_22->ca_cert);
  } else {
   FUNC_18(VAR_6,
       "GnuTLS: Successfully read CA cert '%s' in DER format",
       VAR_22->ca_cert);
  }
 } else if (VAR_22->ca_cert_blob) {
  gnutls_datum_t VAR_27;

  VAR_27.data = (unsigned char *) VAR_22->ca_cert_blob;
  VAR_27.size = VAR_22->ca_cert_blob_len;

  VAR_23 = FUNC_9(
   VAR_21->xcred, &VAR_27, VAR_4);
  if (VAR_23 < 0) {
   FUNC_18(VAR_6,
       "Failed to parse CA cert in DER format: %s",
       FUNC_13(VAR_23));
   VAR_23 = FUNC_9(
    VAR_21->xcred, &VAR_27, VAR_5);
   if (VAR_23 < 0) {
    FUNC_18(VAR_6,
        "Failed to parse CA cert in PEM format: %s",
        FUNC_13(VAR_23));
    return -1;
   }
  }
 } else if (VAR_22->ca_path) {
  FUNC_18(VAR_8, "GnuTLS: ca_path not supported");
  return -1;
 }

 VAR_21->disable_time_checks = 0;
 if (VAR_22->ca_cert || VAR_22->ca_cert_blob) {
  VAR_21->verify_peer = 1;
  FUNC_1(
   VAR_21->xcred, VAR_19);

  if (VAR_22->flags & VAR_9) {
   FUNC_0(
    VAR_21->xcred, VAR_2);
  }

  if (VAR_22->flags & VAR_10) {
   VAR_21->disable_time_checks = 1;
   FUNC_0(
    VAR_21->xcred,
    VAR_3);
  }
 }

 if (VAR_22->client_cert && VAR_22->private_key) {
  FUNC_18(VAR_6,
      "GnuTLS: Try to parse client cert '%s' and key '%s' in DER format",
      VAR_22->client_cert, VAR_22->private_key);






  VAR_23 = FUNC_2(
   VAR_21->xcred, VAR_22->client_cert, VAR_22->private_key,
   VAR_4);

  if (VAR_23 < 0) {
   FUNC_18(VAR_6,
       "GnuTLS: Failed to read client cert/key in DER format (%s) - try in PEM format",
       FUNC_13(VAR_23));






   VAR_23 = FUNC_2(
    VAR_21->xcred, VAR_22->client_cert,
    VAR_22->private_key, VAR_5);

   if (VAR_23 < 0) {
    FUNC_18(VAR_6, "Failed to read client "
        "cert/key in PEM format: %s",
        FUNC_13(VAR_23));
    return VAR_23;
   }
   FUNC_18(VAR_6,
       "GnuTLS: Successfully read client cert/key in PEM format");
  } else {
   FUNC_18(VAR_6,
       "GnuTLS: Successfully read client cert/key in DER format");
  }
 } else if (VAR_22->private_key) {
  int VAR_28 = 0;
  if (!VAR_28) {
   FUNC_18(VAR_6, "GnuTLS: PKCS#12 support not "
       "included");
   return -1;
  }
 } else if (VAR_22->client_cert_blob && VAR_22->private_key_blob) {
  gnutls_datum_t VAR_29, VAR_30;

  VAR_29.data = (unsigned char *) VAR_22->client_cert_blob;
  VAR_29.size = VAR_22->client_cert_blob_len;
  VAR_30.data = (unsigned char *) VAR_22->private_key_blob;
  VAR_30.size = VAR_22->private_key_blob_len;







  VAR_23 = FUNC_4(
   VAR_21->xcred, &VAR_29, &VAR_30, VAR_4);

  if (VAR_23 < 0) {
   FUNC_18(VAR_6, "Failed to read client cert/key "
       "in DER format: %s", FUNC_13(VAR_23));






   VAR_23 = FUNC_4(
    VAR_21->xcred, &VAR_29, &VAR_30, VAR_5);

   if (VAR_23 < 0) {
    FUNC_18(VAR_6, "Failed to read client "
        "cert/key in PEM format: %s",
        FUNC_13(VAR_23));
    return VAR_23;
   }
  }
 } else if (VAR_22->private_key_blob) {
  FUNC_18(VAR_6, "GnuTLS: PKCS#12 support not included");
  return -1;

 }
 if (VAR_22->flags & VAR_16) {
  FUNC_18(VAR_8,
      "GnuTLS: OCSP not supported by this version of GnuTLS");
  return -1;
 }


 VAR_21->params_set = 1;

 VAR_23 = FUNC_10(VAR_21->session, VAR_0,
         VAR_21->xcred);
 if (VAR_23 < 0) {
  FUNC_18(VAR_8, "Failed to configure credentials: %s",
      FUNC_13(VAR_23));
 }

 return VAR_23;
}
