
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wpa_supplicant {TYPE_1__* p2pdev; } ;
struct TYPE_4__ {scalar_t__ update_config; } ;
struct TYPE_3__ {TYPE_2__* conf; int confname; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct wpa_supplicant *VAR_1)
{

 if (VAR_1->p2pdev->conf->update_config &&
     FUNC_0(VAR_1->p2pdev->confname, VAR_1->p2pdev->conf))
  FUNC_1(VAR_0, "P2P: Failed to update configuration");

}
