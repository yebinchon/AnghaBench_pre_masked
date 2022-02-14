
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fils_pmkid; int fils_pmk_len; int fils_pmk; int fils_erp_next_seq_num; int ptk_kek_len; int ptk_kek; int ptk_kck_len; int ptk_kck; int key_replay_ctr; } ;
union wpa_event_data {TYPE_1__ assoc_info; } ;
typedef int u8 ;
struct wpa_supplicant {scalar_t__ auth_alg; int wpa; int bssid; int eapol; int wpa_state; } ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int *,int *,int ,int *,int ) ;
 struct wpa_bss* FUNC_2 (struct wpa_supplicant*,int ) ;
 int * FUNC_3 (struct wpa_bss*) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int ,int const*) ;
 int FUNC_6 (int ,int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_9(struct wpa_supplicant *VAR_2,
         union wpa_event_data *VAR_3)
{
 FUNC_4(VAR_2, VAR_0,
  "Connection authorized by device, previous state %d",
  VAR_2->wpa_state);

 FUNC_8(VAR_2);

 FUNC_7(VAR_2->wpa, VAR_3->assoc_info.key_replay_ctr);
 FUNC_6(VAR_2->wpa, VAR_3->assoc_info.ptk_kck,
          VAR_3->assoc_info.ptk_kck_len,
          VAR_3->assoc_info.ptk_kek,
          VAR_3->assoc_info.ptk_kek_len);
}
