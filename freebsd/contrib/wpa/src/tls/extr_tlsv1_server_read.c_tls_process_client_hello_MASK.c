
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct TYPE_2__ {int tls_version; } ;
struct tlsv1_server {int client_version; scalar_t__ const* client_random; size_t num_cipher_suites; int* cipher_suites; int cipher_suite; scalar_t__ const* session_ticket; int session_ticket_len; int status_request; int state; TYPE_1__ rl; } ;


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
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ const VAR_14 ;
 int VAR_15 ;
 scalar_t__ const VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* FUNC_0 (scalar_t__ const*) ;
 size_t FUNC_1 (scalar_t__ const*) ;
 int FUNC_2 (scalar_t__ const*) ;
 scalar_t__ const* FUNC_3 (int) ;
 int FUNC_4 (scalar_t__ const*,scalar_t__ const*,int) ;
 scalar_t__ FUNC_5 (struct tlsv1_server*,int) ;
 int FUNC_6 (struct tlsv1_server*,scalar_t__ const*,int) ;
 int FUNC_7 (int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (struct tlsv1_server*,int ,int ) ;
 int FUNC_10 (struct tlsv1_server*,char*,...) ;
 int FUNC_11 (int ,char*,scalar_t__ const*,scalar_t__ const) ;
 int FUNC_12 (int ,char*) ;

__attribute__((used)) static int FUNC_13(struct tlsv1_server *VAR_21, u8 VAR_22,
        const u8 *VAR_23, size_t *VAR_24)
{
 const u8 *VAR_25, *VAR_26, *VAR_27;
 size_t VAR_28, VAR_29, VAR_30, VAR_31;
 u16 VAR_32;
 u16 VAR_33;
 int VAR_34;
 u16 VAR_35, VAR_36;

 if (VAR_22 != VAR_10) {
  FUNC_10(VAR_21, "Expected Handshake; received content type 0x%x",
     VAR_22);
  FUNC_9(VAR_21, VAR_6,
       VAR_8);
  return -1;
 }

 VAR_25 = VAR_23;
 VAR_28 = *VAR_24;

 if (VAR_28 < 4) {
  FUNC_10(VAR_21,
     "Truncated handshake message (expected ClientHello)");
  goto decode_error;
 }


 if (*VAR_25 != VAR_14) {
  FUNC_10(VAR_21, "Received unexpected handshake message %d (expected ClientHello)",
     *VAR_25);
  FUNC_9(VAR_21, VAR_6,
       VAR_8);
  return -1;
 }
 FUNC_10(VAR_21, "Received ClientHello");
 VAR_25++;

 VAR_29 = FUNC_1(VAR_25);
 VAR_25 += 3;
 VAR_28 -= 4;

 if (VAR_29 > VAR_28) {
  FUNC_10(VAR_21,
     "Truncated ClientHello (len=%d left=%d)",
     (int) VAR_29, (int) VAR_28);
  goto decode_error;
 }



 FUNC_11(VAR_1, "TLSv1: ClientHello", VAR_25, VAR_29);
 VAR_26 = VAR_25 + VAR_29;


 if (VAR_26 - VAR_25 < 2) {
  FUNC_10(VAR_21, "Truncated ClientHello/client_version");
  goto decode_error;
 }
 VAR_21->client_version = FUNC_0(VAR_25);
 FUNC_10(VAR_21, "Client version %d.%d",
    VAR_21->client_version >> 8,
    VAR_21->client_version & 0xff);
 if (VAR_21->client_version < VAR_18) {
  FUNC_10(VAR_21, "Unexpected protocol version in ClientHello %u.%u",
     VAR_21->client_version >> 8,
     VAR_21->client_version & 0xff);
  FUNC_9(VAR_21, VAR_6,
       VAR_7);
  return -1;
 }
 VAR_25 += 2;

 if (VAR_17 == VAR_18)
  VAR_21->rl.tls_version = VAR_18;




 else if (VAR_21->client_version > VAR_19)
  VAR_21->rl.tls_version = VAR_19;
 else
  VAR_21->rl.tls_version = VAR_21->client_version;
 FUNC_10(VAR_21, "Using TLS v%s",
    FUNC_7(VAR_21->rl.tls_version));


 if (VAR_26 - VAR_25 < VAR_15) {
  FUNC_10(VAR_21, "Truncated ClientHello/client_random");
  goto decode_error;
 }

 FUNC_4(VAR_21->client_random, VAR_25, VAR_15);
 VAR_25 += VAR_15;
 FUNC_11(VAR_1, "TLSv1: client_random",
      VAR_21->client_random, VAR_15);


 if (VAR_26 - VAR_25 < 1) {
  FUNC_10(VAR_21, "Truncated ClientHello/session_id len");
  goto decode_error;
 }
 if (VAR_26 - VAR_25 < 1 + *VAR_25 || *VAR_25 > VAR_16) {
  FUNC_10(VAR_21, "Truncated ClientHello/session_id");
  goto decode_error;
 }
 FUNC_11(VAR_1, "TLSv1: client session_id", VAR_25 + 1, *VAR_25);
 VAR_25 += 1 + *VAR_25;



 if (VAR_26 - VAR_25 < 2) {
  FUNC_10(VAR_21,
     "Truncated ClientHello/cipher_suites len");
  goto decode_error;
 }
 VAR_33 = FUNC_0(VAR_25);
 VAR_25 += 2;
 if (VAR_26 - VAR_25 < VAR_33) {
  FUNC_10(VAR_21, "Truncated ClientHello/cipher_suites");
  goto decode_error;
 }
 FUNC_11(VAR_1, "TLSv1: client cipher suites",
      VAR_25, VAR_33);
 if (VAR_33 & 1) {
  FUNC_10(VAR_21, "Odd len ClientHello/cipher_suites");
  goto decode_error;
 }
 VAR_33 /= 2;

 VAR_32 = 0;
 for (VAR_30 = 0; !VAR_32 && VAR_30 < VAR_21->num_cipher_suites; VAR_30++) {
  if (FUNC_5(VAR_21, VAR_21->cipher_suites[VAR_30]))
   continue;
  VAR_27 = VAR_25;
  for (VAR_31 = 0; VAR_31 < VAR_33; VAR_31++) {
   u16 VAR_37 = FUNC_0(VAR_27);
   VAR_27 += 2;
   if (!VAR_32 && VAR_37 == VAR_21->cipher_suites[VAR_30]) {
    VAR_32 = VAR_37;
    break;
   }
  }
 }
 VAR_25 += VAR_33 * 2;
 if (!VAR_32) {
  FUNC_10(VAR_21, "No supported cipher suite available");
  FUNC_9(VAR_21, VAR_6,
       VAR_4);
  return -1;
 }

 if (FUNC_8(&VAR_21->rl, VAR_32) < 0) {
  FUNC_12(VAR_0, "TLSv1: Failed to set CipherSuite for "
      "record layer");
  FUNC_9(VAR_21, VAR_6,
       VAR_5);
  return -1;
 }

 VAR_21->cipher_suite = VAR_32;


 if (VAR_26 - VAR_25 < 1) {
  FUNC_10(VAR_21,
     "Truncated ClientHello/compression_methods len");
  goto decode_error;
 }
 VAR_33 = *VAR_25++;
 if (VAR_26 - VAR_25 < VAR_33) {
  FUNC_10(VAR_21,
     "Truncated ClientHello/compression_methods");
  goto decode_error;
 }
 FUNC_11(VAR_1, "TLSv1: client compression_methods",
      VAR_25, VAR_33);
 VAR_34 = 0;
 for (VAR_30 = 0; VAR_30 < VAR_33; VAR_30++) {
  if (*VAR_25++ == VAR_9)
   VAR_34 = 1;
 }
 if (!VAR_34) {
  FUNC_10(VAR_21, "Client does not accept NULL compression");
  FUNC_9(VAR_21, VAR_6,
       VAR_4);
  return -1;
 }

 if (VAR_26 - VAR_25 == 1) {
  FUNC_10(VAR_21, "Unexpected extra octet in the end of ClientHello: 0x%02x",
     *VAR_25);
  goto decode_error;
 }

 if (VAR_26 - VAR_25 >= 2) {

  VAR_36 = FUNC_0(VAR_25);
  VAR_25 += 2;

  FUNC_10(VAR_21, "%u bytes of ClientHello extensions",
     VAR_36);
  if (VAR_26 - VAR_25 != VAR_36) {
   FUNC_10(VAR_21, "Invalid ClientHello extension list length %u (expected %u)",
      VAR_36, (unsigned int) (VAR_26 - VAR_25));
   goto decode_error;
  }
  while (VAR_25 < VAR_26) {
   if (VAR_26 - VAR_25 < 2) {
    FUNC_10(VAR_21, "Invalid extension_type field");
    goto decode_error;
   }

   VAR_35 = FUNC_0(VAR_25);
   VAR_25 += 2;

   if (VAR_26 - VAR_25 < 2) {
    FUNC_10(VAR_21, "Invalid extension_data length field");
    goto decode_error;
   }

   VAR_36 = FUNC_0(VAR_25);
   VAR_25 += 2;

   if (VAR_26 - VAR_25 < VAR_36) {
    FUNC_10(VAR_21, "Invalid extension_data field");
    goto decode_error;
   }

   FUNC_10(VAR_21, "ClientHello Extension type %u",
      VAR_35);
   FUNC_11(VAR_1, "TLSv1: ClientHello "
        "Extension data", VAR_25, VAR_36);

   if (VAR_35 == VAR_11) {
    FUNC_2(VAR_21->session_ticket);
    VAR_21->session_ticket = FUNC_3(VAR_36);
    if (VAR_21->session_ticket) {
     FUNC_4(VAR_21->session_ticket, VAR_25,
        VAR_36);
     VAR_21->session_ticket_len = VAR_36;
    }
   } else if (VAR_35 == VAR_12) {
    VAR_21->status_request = 1;
   } else if (VAR_35 == VAR_13) {
    FUNC_6(VAR_21, VAR_25,
             VAR_36);
   }

   VAR_25 += VAR_36;
  }
 }

 *VAR_24 = VAR_26 - VAR_23;

 FUNC_10(VAR_21, "ClientHello OK - proceed to ServerHello");
 VAR_21->state = VAR_2;

 return 0;

decode_error:
 FUNC_10(VAR_21, "Failed to decode ClientHello");
 FUNC_9(VAR_21, VAR_6,
      VAR_3);
 return -1;
}
