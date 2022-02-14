
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {scalar_t__ tls_version; } ;
struct TYPE_3__ {int * sha1_cert; int * md5_cert; int * sha256_cert; } ;
struct tlsv1_server {int state; int client_rsa_key; TYPE_2__ rl; TYPE_1__ verify; scalar_t__ verify_peer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ const VAR_13 ;
 scalar_t__ const VAR_14 ;
 scalar_t__ VAR_15 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 scalar_t__ FUNC_1 (int *,scalar_t__*,size_t*) ;
 int FUNC_2 (struct tlsv1_server*,scalar_t__,scalar_t__ const*,size_t*) ;
 scalar_t__ FUNC_3 (scalar_t__,int ,scalar_t__*,size_t,scalar_t__ const*,int,scalar_t__*) ;
 int FUNC_4 (struct tlsv1_server*,int ,scalar_t__) ;
 int FUNC_5 (struct tlsv1_server*,char*,...) ;
 int FUNC_6 (int ,char*,scalar_t__*,size_t) ;
 int FUNC_7 (int ,char*,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_8(struct tlsv1_server *VAR_16, u8 VAR_17,
       const u8 *VAR_18, size_t *VAR_19)
{
 const u8 *VAR_20, *VAR_21;
 size_t VAR_22, VAR_23;
 u8 VAR_24;
 size_t VAR_25;
 u8 VAR_26[VAR_1 + VAR_4], *VAR_27;
 u8 VAR_28;

 if (VAR_17 == VAR_10) {
  if (VAR_16->verify_peer) {
   FUNC_5(VAR_16, "Client did not include CertificateVerify");
   FUNC_4(VAR_16, VAR_8,
        VAR_9);
   return -1;
  }

  return FUNC_2(VAR_16, VAR_17, VAR_18,
            VAR_19);
 }

 if (VAR_17 != VAR_11) {
  FUNC_5(VAR_16, "Expected Handshake; received content type 0x%x",
     VAR_17);
  FUNC_4(VAR_16, VAR_8,
       VAR_9);
  return -1;
 }

 VAR_20 = VAR_18;
 VAR_22 = *VAR_19;

 if (VAR_22 < 4) {
  FUNC_5(VAR_16, "Too short CertificateVerify message (len=%lu)",
     (unsigned long) VAR_22);
  FUNC_4(VAR_16, VAR_8,
       VAR_6);
  return -1;
 }

 VAR_24 = *VAR_20++;
 VAR_23 = FUNC_0(VAR_20);
 VAR_20 += 3;
 VAR_22 -= 4;

 if (VAR_23 > VAR_22) {
  FUNC_5(VAR_16, "Unexpected CertificateVerify message length (len=%lu != left=%lu)",
     (unsigned long) VAR_23, (unsigned long) VAR_22);
  FUNC_4(VAR_16, VAR_8,
       VAR_6);
  return -1;
 }

 VAR_21 = VAR_20 + VAR_23;

 if (VAR_24 != VAR_12) {
  FUNC_5(VAR_16, "Received unexpected handshake message %d (expected CertificateVerify)",
     VAR_24);
  FUNC_4(VAR_16, VAR_8,
       VAR_9);
  return -1;
 }

 FUNC_5(VAR_16, "Received CertificateVerify");







 VAR_27 = VAR_26;
 VAR_25 = VAR_1;
 if (VAR_16->verify.md5_cert == ((void*)0) ||
     FUNC_1(VAR_16->verify.md5_cert, VAR_27, &VAR_25) < 0) {
  FUNC_4(VAR_16, VAR_8,
       VAR_7);
  VAR_16->verify.md5_cert = ((void*)0);
  FUNC_1(VAR_16->verify.sha1_cert, ((void*)0), ((void*)0));
  VAR_16->verify.sha1_cert = ((void*)0);
  return -1;
 }
 VAR_27 += VAR_1;

 VAR_16->verify.md5_cert = ((void*)0);
 VAR_25 = VAR_4;
 if (VAR_16->verify.sha1_cert == ((void*)0) ||
     FUNC_1(VAR_16->verify.sha1_cert, VAR_27, &VAR_25) < 0) {
  VAR_16->verify.sha1_cert = ((void*)0);
  FUNC_4(VAR_16, VAR_8,
       VAR_7);
  return -1;
 }
 VAR_16->verify.sha1_cert = ((void*)0);

 VAR_25 += VAR_1;





 FUNC_6(VAR_3, "TLSv1: CertificateVerify hash", VAR_26, VAR_25);

 if (FUNC_3(VAR_16->rl.tls_version, VAR_16->client_rsa_key,
     VAR_26, VAR_25, VAR_20, VAR_21 - VAR_20, &VAR_28) < 0) {
  FUNC_5(VAR_16, "Invalid Signature in CertificateVerify");
  FUNC_4(VAR_16, VAR_8, VAR_28);
  return -1;
 }

 *VAR_19 = VAR_21 - VAR_18;

 VAR_16->state = VAR_0;

 return 0;
}
