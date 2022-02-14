
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int p2p; scalar_t__ p2p_24ghz_social_channels; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_0,
       int VAR_1)
{
 if (VAR_0->global->p2p_24ghz_social_channels &&
     (VAR_1 == 2412 || VAR_1 == 2437 || VAR_1 == 2462)) {





  return 1;
 }
 return FUNC_0(VAR_0->global->p2p, VAR_1);
}
