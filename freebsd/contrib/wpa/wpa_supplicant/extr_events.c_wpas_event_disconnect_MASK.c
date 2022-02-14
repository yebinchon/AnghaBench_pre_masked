
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct wpa_supplicant {int key_mgmt; int eap_expected_failure; int eapol; scalar_t__ own_disconnect_req; TYPE_1__* ap_iface; } ;
struct TYPE_2__ {int * bss; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int const*) ;
 int FUNC_2 (struct wpa_supplicant*,int ,char*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct wpa_supplicant*,scalar_t__,int) ;
 int FUNC_5 (struct wpa_supplicant*,scalar_t__,int) ;
 int FUNC_6 (struct wpa_supplicant*,char*) ;
 scalar_t__ FUNC_7 (struct wpa_supplicant*,int const*,scalar_t__,int const*,size_t,int) ;

__attribute__((used)) static void FUNC_8(struct wpa_supplicant *VAR_3, const u8 *VAR_4,
      u16 VAR_5, int VAR_6,
      const u8 *VAR_7, size_t VAR_8, int VAR_9)
{
 if (!VAR_6)
  VAR_3->own_disconnect_req = 0;

 FUNC_4(VAR_3, VAR_5, VAR_6);

 if (((VAR_5 == VAR_1 ||
       ((FUNC_3(VAR_3->key_mgmt) ||
  (VAR_3->key_mgmt & VAR_2)) &&
        FUNC_0(VAR_3->eapol))) &&
      !VAR_3->eap_expected_failure))
  FUNC_6(VAR_3, "AUTH_FAILED");
 FUNC_5(VAR_3, VAR_5,
          VAR_6);
}
