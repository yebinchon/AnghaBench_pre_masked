
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int kck; } ;
struct wpa_tdls_peer {int rsnie_p; TYPE_1__ tpk; scalar_t__ tpk_set; } ;
struct wpa_tdls_ftie {int * mic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ,char*,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,int ,int const*,int ,int const*,int *,int *) ;

__attribute__((used)) static int FUNC_4(u8 VAR_3,
       struct wpa_tdls_peer *VAR_4,
       const u8 *VAR_5, const u8 *VAR_6,
       const struct wpa_tdls_ftie *VAR_7)
{
 u8 VAR_8[16];

 if (VAR_4->tpk_set) {
  FUNC_3(VAR_4->tpk.kck, VAR_3, VAR_5,
      VAR_4->rsnie_p, VAR_6, (u8 *) VAR_7,
      VAR_8);
  if (FUNC_0(VAR_8, VAR_7->mic, 16) != 0) {
   FUNC_2(VAR_1, "TDLS: Invalid MIC in FTIE - "
       "dropping packet");
   FUNC_1(VAR_0, "TDLS: Received MIC",
        VAR_7->mic, 16);
   FUNC_1(VAR_0, "TDLS: Calculated MIC",
        VAR_8, 16);
   return -1;
  }
 } else {
  FUNC_2(VAR_2, "TDLS: Could not verify TDLS MIC, "
      "TPK not set - dropping packet");
  return -1;
 }
 return 0;
}
