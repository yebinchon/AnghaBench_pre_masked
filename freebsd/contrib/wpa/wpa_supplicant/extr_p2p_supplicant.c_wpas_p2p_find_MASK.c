
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; scalar_t__ p2p_in_provisioning; scalar_t__ p2p_long_listen; } ;
typedef enum p2p_discovery_type { ____Placeholder_p2p_discovery_type } p2p_discovery_type ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned int,int,unsigned int,int const*,int const*,unsigned int,int ,char const**,int) ;
 int FUNC_1 (struct wpa_supplicant*,int ,char*,char*,char*) ;
 int FUNC_2 (struct wpa_supplicant*) ;
 int FUNC_3 (struct wpa_supplicant*) ;

int FUNC_4(struct wpa_supplicant *VAR_1, unsigned int VAR_2,
    enum p2p_discovery_type VAR_3,
    unsigned int VAR_4, const u8 *VAR_5,
    const u8 *VAR_6, unsigned int VAR_7,
    u8 VAR_8, const char **VAR_9, int VAR_10)
{
 FUNC_3(VAR_1);
 VAR_1->p2p_long_listen = 0;

 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0) ||
     VAR_1->p2p_in_provisioning) {
  FUNC_1(VAR_1, VAR_0, "P2P: Reject p2p_find operation%s%s",
   (VAR_1->global->p2p_disabled || !VAR_1->global->p2p) ?
   " (P2P disabled)" : "",
   VAR_1->p2p_in_provisioning ?
   " (p2p_in_provisioning)" : "");
  return -1;
 }

 FUNC_2(VAR_1);

 return FUNC_0(VAR_1->global->p2p, VAR_2, VAR_3,
   VAR_4, VAR_5, VAR_6,
   VAR_7, VAR_8, VAR_9, VAR_10);
}
