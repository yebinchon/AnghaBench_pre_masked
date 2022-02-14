
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct eap_gpsk_data {int specifier; int vendor; int sk_len; int sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ,int const*,int,int const*) ;
 size_t FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int const*,int const*,size_t) ;
 int FUNC_3 (int ,char*,int const*,size_t) ;
 int FUNC_4 (int ,char*,...) ;

__attribute__((used)) static const u8 * FUNC_5(struct eap_gpsk_data *VAR_3,
            const u8 *VAR_4,
            const u8 *VAR_5, const u8 *VAR_6)
{
 size_t VAR_7;
 u8 VAR_8[VAR_0];

 if (VAR_5 == ((void*)0))
  return ((void*)0);

 VAR_7 = FUNC_1(VAR_3->vendor, VAR_3->specifier);
 if (VAR_6 - VAR_5 < (int) VAR_7) {
  FUNC_4(VAR_1, "EAP-GPSK: Message too short for MIC "
      "(left=%lu miclen=%lu)",
      (unsigned long) (VAR_6 - VAR_5),
      (unsigned long) VAR_7);
  return ((void*)0);
 }
 if (FUNC_0(VAR_3->sk, VAR_3->sk_len, VAR_3->vendor,
     VAR_3->specifier, VAR_4, VAR_5 - VAR_4, VAR_8)
     < 0) {
  FUNC_4(VAR_1, "EAP-GPSK: Failed to compute MIC");
  return ((void*)0);
 }
 if (FUNC_2(VAR_8, VAR_5, VAR_7) != 0) {
  FUNC_4(VAR_2, "EAP-GPSK: Incorrect MIC in GPSK-3");
  FUNC_3(VAR_1, "EAP-GPSK: Received MIC", VAR_5, VAR_7);
  FUNC_3(VAR_1, "EAP-GPSK: Computed MIC", VAR_8, VAR_7);
  return ((void*)0);
 }
 VAR_5 += VAR_7;

 return VAR_5;
}
