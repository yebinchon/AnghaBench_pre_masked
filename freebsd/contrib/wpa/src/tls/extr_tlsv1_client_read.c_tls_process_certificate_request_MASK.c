
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {int certificate_requested; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 int FUNC_2 (struct tlsv1_client*,scalar_t__,scalar_t__ const*,size_t*) ;
 int FUNC_3 (int ,char*,...) ;

__attribute__((used)) static int FUNC_4(struct tlsv1_client *VAR_8, u8 VAR_9,
        const u8 *VAR_10, size_t *VAR_11)
{
 const u8 *VAR_12, *VAR_13;
 size_t VAR_14, VAR_15;
 u8 VAR_16;

 if (VAR_9 != VAR_5) {
  FUNC_3(VAR_0, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_9);
  FUNC_1(VAR_8, VAR_3,
     VAR_4);
  return -1;
 }

 VAR_12 = VAR_10;
 VAR_14 = *VAR_11;

 if (VAR_14 < 4) {
  FUNC_3(VAR_0, "TLSv1: Too short CertificateRequest "
      "(left=%lu)", (unsigned long) VAR_14);
  FUNC_1(VAR_8, VAR_3, VAR_2);
  return -1;
 }

 VAR_16 = *VAR_12++;
 VAR_15 = FUNC_0(VAR_12);
 VAR_12 += 3;
 VAR_14 -= 4;

 if (VAR_15 > VAR_14) {
  FUNC_3(VAR_0, "TLSv1: Mismatch in CertificateRequest "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_15, (unsigned long) VAR_14);
  FUNC_1(VAR_8, VAR_3, VAR_2);
  return -1;
 }

 VAR_13 = VAR_12 + VAR_15;

 if (VAR_16 == VAR_7)
  return FUNC_2(VAR_8, VAR_9, VAR_10,
           VAR_11);
 if (VAR_16 != VAR_6) {
  FUNC_3(VAR_0, "TLSv1: Received unexpected handshake "
      "message %d (expected CertificateRequest/"
      "ServerHelloDone)", VAR_16);
  FUNC_1(VAR_8, VAR_3,
     VAR_4);
  return -1;
 }

 FUNC_3(VAR_0, "TLSv1: Received CertificateRequest");

 VAR_8->certificate_requested = 1;

 *VAR_11 = VAR_13 - VAR_10;

 VAR_8->state = VAR_1;

 return 0;
}
