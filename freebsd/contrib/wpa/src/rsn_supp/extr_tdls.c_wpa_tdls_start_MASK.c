
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_peer {int tpk_in_progress; int initiator; int addr; } ;
struct wpa_sm {int tdls_prohibited; int tdls_supported; scalar_t__ tdls_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (struct wpa_sm*,int ,int,int ,int ,int *,int ,int *,int *,int ,int ,int *,int ,int *,int ,int *,int ) ;
 struct wpa_tdls_peer* FUNC_2 (struct wpa_sm*,int const*,int *) ;
 int FUNC_3 (struct wpa_sm*,struct wpa_tdls_peer*) ;
 scalar_t__ FUNC_4 (struct wpa_sm*,struct wpa_tdls_peer*) ;

int FUNC_5(struct wpa_sm *VAR_3, const u8 *VAR_4)
{
 struct wpa_tdls_peer *VAR_5;
 int VAR_6 = VAR_3->tdls_prohibited;

 if (VAR_3->tdls_disabled || !VAR_3->tdls_supported)
  return -1;
 if (VAR_6) {
  FUNC_0(VAR_0, "TDLS: TDLS is prohibited in this BSS - "
      "reject request to start setup");
  return -1;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_4, ((void*)0));
 if (VAR_5 == ((void*)0))
  return -1;

 if (VAR_5->tpk_in_progress) {
  FUNC_0(VAR_0, "TDLS: Setup is already in progress with the peer");
  return 0;
 }

 VAR_5->initiator = 1;


 if (FUNC_1(VAR_3, VAR_5->addr, 1, 0, 0, ((void*)0), 0, ((void*)0),
        ((void*)0), 0, 0, ((void*)0), 0, ((void*)0), 0, ((void*)0), 0)) {
  FUNC_3(VAR_3, VAR_5);
  return -1;
 }

 VAR_5->tpk_in_progress = 1;

 if (FUNC_4(VAR_3, VAR_5) < 0) {
  FUNC_3(VAR_3, VAR_5);
  return -1;
 }

 return 0;
}
