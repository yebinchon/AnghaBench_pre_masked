
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* global; int p2pdev; } ;
struct TYPE_2__ {scalar_t__ p2p; } ;


 int FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct wpa_supplicant*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_1,
         int VAR_2)
{
 FUNC_0(VAR_0,
        VAR_1->p2pdev, ((void*)0));
 if (VAR_1->global->p2p)
  FUNC_1(VAR_1->global->p2p);
 FUNC_2(VAR_1, 0, VAR_2);
}
