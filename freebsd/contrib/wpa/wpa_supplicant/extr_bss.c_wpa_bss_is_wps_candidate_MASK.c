
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpabuf {int dummy; } ;
struct wpa_supplicant {TYPE_1__* conf; int own_addr; } ;
struct wpa_ssid {int key_mgmt; scalar_t__ ssid_len; int eap; int ssid; struct wpa_ssid* next; } ;
struct wpa_bss {scalar_t__ ssid_len; int ssid; } ;
struct TYPE_2__ {struct wpa_ssid* ssid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__) ;
 struct wpabuf* FUNC_3 (struct wpa_bss*,int ) ;
 int FUNC_4 (struct wpabuf*) ;
 int FUNC_5 (struct wpabuf*,int ,int) ;
 scalar_t__ FUNC_6 (struct wpabuf*) ;

__attribute__((used)) static int FUNC_7(struct wpa_supplicant *VAR_2,
        struct wpa_bss *VAR_3)
{
 return 0;
}
