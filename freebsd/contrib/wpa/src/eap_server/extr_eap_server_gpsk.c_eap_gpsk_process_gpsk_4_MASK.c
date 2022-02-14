
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
typedef int u16 ;
struct eap_sm {int dummy; } ;
struct eap_gpsk_data {scalar_t__ state; int specifier; int vendor; int sk_len; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int const*,int,int const*) ;
 size_t FUNC_2 (int ,int ) ;
 int FUNC_3 (struct eap_gpsk_data*,int ) ;
 scalar_t__ FUNC_4 (int const*,int const*,size_t) ;
 int FUNC_5 (int ,char*,int const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;

__attribute__((used)) static void FUNC_7(struct eap_sm *VAR_6,
        struct eap_gpsk_data *VAR_7,
        const u8 *VAR_8, size_t VAR_9)
{
 const u8 *VAR_10, *VAR_11;
 u16 VAR_12;
 size_t VAR_13;
 u8 VAR_14[VAR_0];

 if (VAR_7->state != VAR_2)
  return;

 FUNC_6(VAR_3, "EAP-GPSK: Received Response/GPSK-4");

 VAR_10 = VAR_8;
 VAR_11 = VAR_8 + VAR_9;

 if (VAR_11 - VAR_10 < 2) {
  FUNC_6(VAR_3, "EAP-GPSK: Too short message for "
      "PD_Payload_1 length");
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 VAR_12 = FUNC_0(VAR_10);
 VAR_10 += 2;
 if (VAR_11 - VAR_10 < VAR_12) {
  FUNC_6(VAR_3, "EAP-GPSK: Too short message for "
      "PD_Payload_1");
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 FUNC_5(VAR_3, "EAP-GPSK: PD_Payload_1", VAR_10, VAR_12);
 VAR_10 += VAR_12;

 VAR_13 = FUNC_2(VAR_7->vendor, VAR_7->specifier);
 if (VAR_11 - VAR_10 < (int) VAR_13) {
  FUNC_6(VAR_3, "EAP-GPSK: Message too short for MIC "
      "(left=%lu miclen=%lu)",
      (unsigned long) (VAR_11 - VAR_10),
      (unsigned long) VAR_13);
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 if (FUNC_1(VAR_7->sk, VAR_7->sk_len, VAR_7->vendor,
     VAR_7->specifier, VAR_8, VAR_10 - VAR_8, VAR_14)
     < 0) {
  FUNC_6(VAR_3, "EAP-GPSK: Failed to compute MIC");
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 if (FUNC_4(VAR_14, VAR_10, VAR_13) != 0) {
  FUNC_6(VAR_4, "EAP-GPSK: Incorrect MIC in GPSK-4");
  FUNC_5(VAR_3, "EAP-GPSK: Received MIC", VAR_10, VAR_13);
  FUNC_5(VAR_3, "EAP-GPSK: Computed MIC", VAR_14, VAR_13);
  FUNC_3(VAR_7, VAR_1);
  return;
 }
 VAR_10 += VAR_13;

 if (VAR_10 != VAR_11) {
  FUNC_6(VAR_3, "EAP-GPSK: Ignored %lu bytes of extra "
      "data in the end of GPSK-4",
      (unsigned long) (VAR_11 - VAR_10));
 }

 FUNC_3(VAR_7, VAR_5);
}
