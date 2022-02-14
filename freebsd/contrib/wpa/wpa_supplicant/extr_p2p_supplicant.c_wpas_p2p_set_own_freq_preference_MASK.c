
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {int num_multichan_concurrent; TYPE_2__* global; TYPE_1__* conf; } ;
struct TYPE_4__ {int * p2p; struct wpa_supplicant* p2p_init_wpa_s; scalar_t__ p2p_disabled; } ;
struct TYPE_3__ {scalar_t__ p2p_ignore_shared_freq; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (struct wpa_supplicant*) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
          int VAR_2)
{
 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return;


 VAR_1 = VAR_1->global->p2p_init_wpa_s;

 if (VAR_1->conf->p2p_ignore_shared_freq &&
     VAR_2 > 0 && VAR_1->num_multichan_concurrent > 1 &&
     FUNC_2(VAR_1) > 0) {
  FUNC_1(VAR_0, "P2P: Ignore own channel preference %d MHz due to p2p_ignore_shared_freq=1 configuration",
      VAR_2);
  VAR_2 = 0;
 }
 FUNC_0(VAR_1->global->p2p, VAR_2);
}
