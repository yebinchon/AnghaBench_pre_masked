
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {unsigned int max_remain_on_chan; TYPE_1__* global; } ;
struct TYPE_2__ {int p2p; } ;


 int FUNC_0 (int ,unsigned int) ;

int FUNC_1(struct wpa_supplicant *VAR_0, unsigned int VAR_1)
{

 if (VAR_1 > VAR_0->max_remain_on_chan)
  VAR_1 = VAR_0->max_remain_on_chan;

 return FUNC_0(VAR_0->global->p2p, VAR_1);
}
