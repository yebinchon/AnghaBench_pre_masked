
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int kck; } ;
struct wpa_tdls_peer {TYPE_1__ tpk; scalar_t__ tpk_set; } ;
struct wpa_tdls_ftie {int mic; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,int ,int ,int ,int const*,int *,int *) ;

__attribute__((used)) static int FUNC_3(
 u8 VAR_1, u16 VAR_2, u8 VAR_3, struct wpa_tdls_peer *VAR_4,
 const u8 *VAR_5, const struct wpa_tdls_ftie *VAR_6)
{
 u8 VAR_7[16];

 if (VAR_4->tpk_set) {
  FUNC_2(VAR_4->tpk.kck, VAR_1, VAR_2,
       VAR_3, VAR_5, (u8 *) VAR_6, VAR_7);
  if (FUNC_0(VAR_7, VAR_6->mic, 16) != 0) {
   FUNC_1(VAR_0, "TDLS: Invalid MIC in Teardown - "
       "dropping packet");
   return -1;
  }
 } else {
  FUNC_1(VAR_0, "TDLS: Could not verify TDLS Teardown "
      "MIC, TPK not set - dropping packet");
  return -1;
 }
 return 0;
}
