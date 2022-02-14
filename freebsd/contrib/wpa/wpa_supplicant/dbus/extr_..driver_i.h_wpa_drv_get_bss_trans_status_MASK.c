
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int drv_priv; TYPE_1__* driver; } ;
struct wpa_bss_trans_info {int dummy; } ;
struct wpa_bss_candidate_info {int dummy; } ;
struct TYPE_2__ {struct wpa_bss_candidate_info* (* get_bss_transition_status ) (int ,struct wpa_bss_trans_info*) ;} ;


 struct wpa_bss_candidate_info* FUNC_0 (int ,struct wpa_bss_trans_info*) ;

__attribute__((used)) static inline struct wpa_bss_candidate_info *
FUNC_1(struct wpa_supplicant *VAR_0,
        struct wpa_bss_trans_info *VAR_1)
{
 if (!VAR_0->driver->get_bss_transition_status)
  return ((void*)0);
 return VAR_0->driver->get_bss_transition_status(VAR_0->drv_priv,
       VAR_1);
}
