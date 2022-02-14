
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int next_neighbor_rep_token; scalar_t__ notify_neighbor_rep; scalar_t__ rrm_used; } ;
struct wpa_supplicant {TYPE_1__ rrm; } ;


 int FUNC_0 (int (*) (TYPE_1__*,int *),TYPE_1__*,int *) ;
 int FUNC_1 (struct wpa_supplicant*) ;
 int FUNC_2 (TYPE_1__*,int *) ;

void FUNC_3(struct wpa_supplicant *VAR_0)
{
 VAR_0->rrm.rrm_used = 0;

 FUNC_0(FUNC_2, &VAR_0->rrm,
        ((void*)0));
 if (VAR_0->rrm.notify_neighbor_rep)
  FUNC_2(&VAR_0->rrm, ((void*)0));
 VAR_0->rrm.next_neighbor_rep_token = 1;
 FUNC_1(VAR_0);
}
