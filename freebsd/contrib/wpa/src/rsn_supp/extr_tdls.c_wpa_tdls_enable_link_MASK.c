
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct wpa_tdls_peer {int tpk_success; int lifetime; int addr; scalar_t__ reconfig_key; scalar_t__ initiator; scalar_t__ tpk_in_progress; } ;
struct wpa_sm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct wpa_sm*,struct wpa_tdls_peer*) ;
 int FUNC_1 (int,int ,int ,struct wpa_sm*,struct wpa_tdls_peer*) ;
 int VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct wpa_sm*,int ,int ) ;
 scalar_t__ FUNC_4 (struct wpa_sm*) ;
 scalar_t__ FUNC_5 (struct wpa_sm*,struct wpa_tdls_peer*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct wpa_sm *VAR_6, struct wpa_tdls_peer *VAR_7)
{
 VAR_7->tpk_success = 1;
 VAR_7->tpk_in_progress = 0;
 FUNC_0(VAR_5, VAR_6, VAR_7);
 if (FUNC_4(VAR_6)) {
  u32 VAR_8 = VAR_7->lifetime;




  if (VAR_8 > 3 && VAR_7->initiator)
   VAR_8 -= 3;
  FUNC_1(VAR_8, 0, VAR_5,
           VAR_6, VAR_7);







 }

 if (VAR_7->reconfig_key && FUNC_5(VAR_6, VAR_7) < 0) {
  FUNC_2(VAR_1, "TDLS: Could not configure key to the "
      "driver");
  return -1;
 }
 VAR_7->reconfig_key = 0;

 return FUNC_3(VAR_6, VAR_2, VAR_7->addr);
}
