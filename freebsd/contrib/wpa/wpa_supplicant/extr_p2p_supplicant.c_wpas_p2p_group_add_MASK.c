
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; int p2p_go_do_acs; } ;
struct p2p_go_neg_results {int persistent_group; } ;
struct TYPE_2__ {int * p2p; int * add_psk; scalar_t__ p2p_disabled; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct p2p_go_neg_results*) ;
 int FUNC_2 (int ,char*) ;
 struct wpa_supplicant* FUNC_3 (struct wpa_supplicant*,int ,int) ;
 scalar_t__ FUNC_4 (struct wpa_supplicant*,struct p2p_go_neg_results*,int,int,int,int,int,int,int *) ;
 int FUNC_5 (struct wpa_supplicant*,int) ;
 int FUNC_6 (struct wpa_supplicant*) ;
 int FUNC_7 (struct wpa_supplicant*,struct p2p_go_neg_results*,int ) ;

int FUNC_8(struct wpa_supplicant *VAR_1, int VAR_2,
         int VAR_3, int VAR_4, int VAR_5, int VAR_6,
         int VAR_7, int VAR_8)
{
 struct p2p_go_neg_results VAR_9;

 if (VAR_1->global->p2p_disabled || VAR_1->global->p2p == ((void*)0))
  return -1;

 FUNC_0(VAR_1->global->add_psk);
 VAR_1->global->add_psk = ((void*)0);


 FUNC_2(VAR_0, "P2P: Stop any on-going P2P FIND");
 FUNC_6(VAR_1);

 if (!VAR_1->p2p_go_do_acs) {
  VAR_3 = FUNC_5(VAR_1, VAR_3);
  if (VAR_3 < 0)
   return -1;
 }

 if (FUNC_4(VAR_1, &VAR_9, VAR_3, VAR_4,
        VAR_5, VAR_6, VAR_7, VAR_8, ((void*)0)))
  return -1;

 FUNC_1(VAR_1->global->p2p, &VAR_9);
 VAR_9.persistent_group = VAR_2;

 VAR_1 = FUNC_3(VAR_1, 0, 1);
 if (VAR_1 == ((void*)0))
  return -1;
 FUNC_7(VAR_1, &VAR_9, 0);

 return 0;
}
