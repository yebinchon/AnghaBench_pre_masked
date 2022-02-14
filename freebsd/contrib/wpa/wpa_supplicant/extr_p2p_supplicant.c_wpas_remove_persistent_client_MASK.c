
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2pdev; struct wpa_ssid* current_ssid; TYPE_1__* global; } ;
struct wpa_ssid {scalar_t__ mode; int ssid_len; int ssid; int p2p_persistent_group; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_invite_group; } ;


 scalar_t__ VAR_0 ;
 struct wpa_ssid* FUNC_0 (int ,int const*,int ,int ) ;
 int FUNC_1 (struct wpa_supplicant*,struct wpa_ssid*,int const*,int) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1,
       const u8 *VAR_2)
{
 struct wpa_ssid *VAR_3;

 VAR_1 = VAR_1->global->p2p_invite_group;
 if (VAR_1 == ((void*)0))
  return;
 VAR_3 = VAR_1->current_ssid;
 if (VAR_3 == ((void*)0) || VAR_3->mode != VAR_0 ||
     !VAR_3->p2p_persistent_group)
  return;
 VAR_3 = FUNC_0(VAR_1->p2pdev, VAR_2,
           VAR_3->ssid, VAR_3->ssid_len);
 FUNC_1(VAR_1, VAR_3, VAR_2, 1);
}
