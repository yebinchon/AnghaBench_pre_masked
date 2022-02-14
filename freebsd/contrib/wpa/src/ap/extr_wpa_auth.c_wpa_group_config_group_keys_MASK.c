
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_group {int GN; size_t GTK_len; int GN_igtk; int * IGTK; int vlan_id; int * GTK; } ;
struct TYPE_2__ {scalar_t__ ieee80211w; int group_mgmt_cipher; int wpa_group; } ;
struct wpa_authenticator {TYPE_1__ conf; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct wpa_authenticator*,int ,int,int ,int,int ,size_t) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct wpa_authenticator *VAR_2,
           struct wpa_group *VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_0(VAR_2, VAR_3->vlan_id,
        FUNC_2(VAR_2->conf.wpa_group),
        VAR_1, VAR_3->GN,
        VAR_3->GTK[VAR_3->GN - 1], VAR_3->GTK_len) < 0)
  VAR_4 = -1;
 return VAR_4;
}
