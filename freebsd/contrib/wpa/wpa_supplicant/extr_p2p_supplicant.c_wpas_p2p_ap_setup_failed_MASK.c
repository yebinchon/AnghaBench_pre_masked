
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int p2pdev; TYPE_1__* global; } ;
struct TYPE_2__ {struct wpa_supplicant* p2p_group_formation; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,int ,int ,int ,int *) ;
 int VAR_0 ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->global->p2p_group_formation != VAR_1)
  return;

 FUNC_0(VAR_0,
        VAR_1->p2pdev, ((void*)0));
 FUNC_1(0, 0, VAR_0,
          VAR_1->p2pdev, ((void*)0));
}
