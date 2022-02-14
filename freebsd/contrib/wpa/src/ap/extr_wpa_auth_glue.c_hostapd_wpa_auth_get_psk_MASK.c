
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int const u8 ;
struct sta_info {scalar_t__ auth_alg; size_t owe_pmk_len; struct hostapd_sta_wpa_psk_short* psk; int wpa_sm; int const* owe_pmk; TYPE_1__* sae; } ;
struct rsn_pmksa_cache_entry {int akmp; size_t pmk_len; int const* pmk; } ;
struct hostapd_sta_wpa_psk_short {int const* psk; struct hostapd_sta_wpa_psk_short* next; scalar_t__ is_passphrase; int passphrase; } ;
struct hostapd_data {TYPE_3__* conf; } ;
struct TYPE_5__ {int ssid_len; int ssid; } ;
struct TYPE_6__ {int wpa_key_mgmt; TYPE_2__ ssid; } ;
struct TYPE_4__ {int const* pmk; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct sta_info* FUNC_0 (struct hostapd_data*,int const*) ;
 int const* FUNC_1 (TYPE_3__*,int const*,int const*,int const*,int*) ;
 int FUNC_2 (int ,int ,int ,int,int const*,size_t) ;
 struct rsn_pmksa_cache_entry* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static const u8 * FUNC_6(void *VAR_4, const u8 *VAR_5,
        const u8 *VAR_6,
        const u8 *VAR_7, size_t *VAR_8,
        int *VAR_9)
{
 struct hostapd_data *VAR_10 = VAR_4;
 struct sta_info *VAR_11 = FUNC_0(VAR_10, VAR_5);
 const u8 *VAR_12;

 if (VAR_9)
  *VAR_9 = 0;
 if (VAR_8)
  *VAR_8 = VAR_1;
 VAR_12 = FUNC_1(VAR_10->conf, VAR_5, VAR_6, VAR_7,
         VAR_9);





 if (VAR_11 && VAR_11->psk && !VAR_12) {
  struct hostapd_sta_wpa_psk_short *VAR_13;

  if (VAR_9)
   *VAR_9 = 0;
  VAR_12 = VAR_11->psk->psk;
  for (VAR_13 = VAR_11->psk; VAR_13; VAR_13 = VAR_13->next) {
   if (VAR_13->is_passphrase) {
    FUNC_2(VAR_13->passphrase,
         VAR_10->conf->ssid.ssid,
         VAR_10->conf->ssid.ssid_len, 4096,
         VAR_13->psk, VAR_1);
    VAR_13->is_passphrase = 0;
   }
   if (VAR_13->psk == VAR_7) {
    VAR_12 = VAR_13->next ? VAR_13->next->psk : ((void*)0);
    break;
   }
  }
 }
 return VAR_12;
}
