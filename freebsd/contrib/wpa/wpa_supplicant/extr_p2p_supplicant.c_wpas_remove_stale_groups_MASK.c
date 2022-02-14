
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {int conf; } ;
struct wpa_ssid {size_t ssid_len; scalar_t__ mode; int num_p2p_clients; int const* p2p_client_list; int id; int const* ssid; int const* bssid; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int const*,int const*,size_t) ;
 int FUNC_1 (int const*,int const*,size_t) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct wpa_supplicant*,int ,char*,int ) ;
 int FUNC_5 (struct wpa_supplicant*,struct wpa_ssid*) ;
 struct wpa_ssid* FUNC_6 (struct wpa_supplicant*,int const*,int *,int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_3, const u8 *VAR_4, const u8 *VAR_5,
        const u8 *VAR_6, size_t VAR_7)
{
 struct wpa_supplicant *VAR_8 = VAR_3;
 struct wpa_ssid *VAR_9;
 int VAR_10 = 0;
 size_t VAR_11;


 while ((VAR_9 = FUNC_6(VAR_8, VAR_4, ((void*)0), 0))) {
  if (VAR_5 && VAR_6 && VAR_7 &&
      VAR_9->ssid_len == VAR_7 &&
      FUNC_0(VAR_5, VAR_9->bssid, VAR_0) == 0 &&
      FUNC_0(VAR_6, VAR_9->ssid, VAR_7) == 0)
   break;


  if (VAR_9->mode != VAR_2 || VAR_9->num_p2p_clients <= 1) {
   FUNC_4(VAR_8, VAR_1,
    "P2P: Remove stale persistent group id=%d",
    VAR_9->id);
   FUNC_5(VAR_8, VAR_9);
   FUNC_3(VAR_8->conf, VAR_9->id);
   VAR_10 = 1;
   continue;
  }

  for (VAR_11 = 0; VAR_11 < VAR_9->num_p2p_clients; VAR_11++) {
   if (FUNC_0(VAR_9->p2p_client_list + VAR_11 * 2 * VAR_0,
          VAR_4, VAR_0) != 0)
    continue;

   FUNC_1(VAR_9->p2p_client_list + VAR_11 * 2 * VAR_0,
       VAR_9->p2p_client_list + (VAR_11 + 1) * 2 * VAR_0,
       (VAR_9->num_p2p_clients - VAR_11 - 1) * 2 * VAR_0);
   break;
  }
  VAR_9->num_p2p_clients--;
  VAR_10 = 1;
 }

 if (VAR_10)
  FUNC_2(VAR_8);


 return VAR_9 != ((void*)0);
}
