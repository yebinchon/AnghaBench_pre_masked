
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {int p2p_oob_dev_pw_id; int p2p_pd_before_go_neg; TYPE_1__* global; scalar_t__ p2p_go_ht40; TYPE_2__* conf; } ;
struct wpa_ssid {int ssid_len; int * ssid; } ;
typedef enum p2p_wps_method { ____Placeholder_p2p_wps_method } p2p_wps_method ;
struct TYPE_4__ {scalar_t__ persistent_reconnect; } ;
struct TYPE_3__ {int p2p; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int const*,int,int,int const*,unsigned int,int,int *,int ,int ,unsigned int,int ) ;
 int FUNC_1 (int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1,
     const u8 *VAR_2,
     enum p2p_wps_method VAR_3,
     int VAR_4, const u8 *VAR_5,
     unsigned int VAR_6, int VAR_7,
     struct wpa_ssid *VAR_8, unsigned int VAR_9)
{
 if (VAR_7 && VAR_1->conf->persistent_reconnect)
  VAR_7 = 2;





 FUNC_1(VAR_1->global->p2p,
          VAR_1->p2p_go_ht40 ? 255 : 100, 20);

 return FUNC_0(VAR_1->global->p2p, VAR_2, VAR_3,
      VAR_4, VAR_5, VAR_6,
      VAR_7, VAR_8 ? VAR_8->ssid : ((void*)0),
      VAR_8 ? VAR_8->ssid_len : 0,
      VAR_1->p2p_pd_before_go_neg, VAR_9,
      VAR_3 == VAR_0 ? VAR_1->p2p_oob_dev_pw_id :
      0);
}
