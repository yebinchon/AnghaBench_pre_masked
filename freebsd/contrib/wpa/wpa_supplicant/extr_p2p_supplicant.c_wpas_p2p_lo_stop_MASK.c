
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ p2p_lo_started; } ;


 int VAR_0 ;
 int FUNC_0 (struct wpa_supplicant*,int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*) ;

int FUNC_2(struct wpa_supplicant *VAR_1)
{
 int VAR_2;

 if (!VAR_1->p2p_lo_started)
  return 0;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 < 0)
  FUNC_0(VAR_1, VAR_0,
   "P2P: Failed to stop P2P listen offload");

 VAR_1->p2p_lo_started = 0;
 return VAR_2;
}
