
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct tlsv1_client {int flags; int state; int ocsp_resp_received; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct tlsv1_client*,int ,int ) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct tlsv1_client *VAR_10, u8 VAR_11,
      const u8 *VAR_12, size_t *VAR_13)
{
 const u8 *VAR_14, *VAR_15;
 size_t VAR_16, VAR_17;
 u8 VAR_18;

 if (VAR_11 != VAR_8) {
  FUNC_2(VAR_1, "TLSv1: Expected Handshake; "
      "received content type 0x%x", VAR_11);
  FUNC_1(VAR_10, VAR_5,
     VAR_6);
  return -1;
 }

 VAR_14 = VAR_12;
 VAR_16 = *VAR_13;

 if (VAR_16 < 4) {
  FUNC_2(VAR_1, "TLSv1: Too short ServerHelloDone "
      "(left=%lu)", (unsigned long) VAR_16);
  FUNC_1(VAR_10, VAR_5, VAR_4);
  return -1;
 }

 VAR_18 = *VAR_14++;
 VAR_17 = FUNC_0(VAR_14);
 VAR_14 += 3;
 VAR_16 -= 4;

 if (VAR_17 > VAR_16) {
  FUNC_2(VAR_1, "TLSv1: Mismatch in ServerHelloDone "
      "length (len=%lu != left=%lu)",
      (unsigned long) VAR_17, (unsigned long) VAR_16);
  FUNC_1(VAR_10, VAR_5, VAR_4);
  return -1;
 }
 VAR_15 = VAR_14 + VAR_17;

 if (VAR_18 != VAR_9) {
  FUNC_2(VAR_1, "TLSv1: Received unexpected handshake "
      "message %d (expected ServerHelloDone)", VAR_18);
  FUNC_1(VAR_10, VAR_5,
     VAR_6);
  return -1;
 }

 FUNC_2(VAR_1, "TLSv1: Received ServerHelloDone");

 if ((VAR_10->flags & VAR_7) &&
     !VAR_10->ocsp_resp_received) {
  FUNC_2(VAR_2,
      "TLSv1: No OCSP response received - reject handshake");
  FUNC_1(VAR_10, VAR_5,
     VAR_3);
  return -1;
 }

 *VAR_13 = VAR_15 - VAR_12;

 VAR_10->state = VAR_0;

 return 0;
}
