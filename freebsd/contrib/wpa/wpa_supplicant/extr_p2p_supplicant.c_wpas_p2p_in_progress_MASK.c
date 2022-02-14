
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; int ifname; } ;
struct os_reltime {int dummy; } ;
struct TYPE_4__ {scalar_t__ sec; } ;
struct TYPE_3__ {TYPE_2__ p2p_go_wait_client; struct wpa_supplicant* p2p_group_formation; int * p2p; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct os_reltime*) ;
 scalar_t__ FUNC_1 (struct os_reltime*,TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct wpa_supplicant*,int ,char*,...) ;

int FUNC_4(struct wpa_supplicant *VAR_2)
{
 int VAR_3;

 if (VAR_2->global->p2p_disabled || VAR_2->global->p2p == ((void*)0))
  return 0;

 VAR_3 = FUNC_2(VAR_2->global->p2p);
 if (VAR_3 == 0) {






  if (VAR_2->global->p2p_group_formation &&
      VAR_2->global->p2p_group_formation != VAR_2) {
   FUNC_3(VAR_2, VAR_0, "P2P: Another interface (%s) "
    "in group formation",
    VAR_2->global->p2p_group_formation->ifname);
   VAR_3 = 1;
  }
 }

 if (!VAR_3 && VAR_2->global->p2p_go_wait_client.sec) {
  struct os_reltime VAR_4;
  FUNC_0(&VAR_4);
  if (FUNC_1(&VAR_4, &VAR_2->global->p2p_go_wait_client,
           VAR_1)) {

   VAR_2->global->p2p_go_wait_client.sec = 0;
  } else {
   FUNC_3(VAR_2, VAR_0, "P2P: Waiting for initial client connection during group formation");
   VAR_3 = 1;
  }
 }

 return VAR_3;
}
