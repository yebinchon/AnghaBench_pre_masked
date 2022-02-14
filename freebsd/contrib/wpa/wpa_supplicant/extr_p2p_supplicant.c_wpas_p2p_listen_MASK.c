
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {unsigned int p2p_long_listen; unsigned int max_remain_on_chan; TYPE_1__* global; scalar_t__ p2p_lo_started; } ;
struct TYPE_2__ {int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct wpa_supplicant*,int *) ;
 int FUNC_1 (unsigned int,int ,int ,struct wpa_supplicant*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct wpa_supplicant*) ;
 int FUNC_5 (struct wpa_supplicant*) ;
 int FUNC_6 (struct wpa_supplicant*,unsigned int) ;
 int VAR_1 ;

int FUNC_7(struct wpa_supplicant *VAR_2, unsigned int VAR_3)
{
 int VAR_4;

 if (VAR_2->global->p2p_disabled || VAR_2->global->p2p == ((void*)0))
  return -1;

 if (VAR_2->p2p_lo_started) {
  FUNC_3(VAR_0,
   "P2P: Cannot start P2P listen, it is offloaded");
  return -1;
 }

 FUNC_4(VAR_2);
 FUNC_5(VAR_2);

 if (VAR_3 == 0) {





  VAR_3 = 3600;
 }
 FUNC_0(VAR_1, VAR_2, ((void*)0));
 VAR_2->p2p_long_listen = 0;






 if (VAR_2->global->p2p)
  FUNC_2(VAR_2->global->p2p);

 VAR_4 = FUNC_6(VAR_2, VAR_3 * 1000);
 if (VAR_4 == 0 && VAR_3 * 1000 > VAR_2->max_remain_on_chan) {
  VAR_2->p2p_long_listen = VAR_3 * 1000;
  FUNC_1(VAR_3, 0,
           VAR_1,
           VAR_2, ((void*)0));
 }

 return VAR_4;
}
