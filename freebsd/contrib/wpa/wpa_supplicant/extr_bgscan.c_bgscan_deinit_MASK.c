
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_supplicant {int * bgscan_priv; TYPE_1__* bgscan; } ;
struct TYPE_2__ {int (* deinit ) (int *) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int ) ;

void FUNC_2(struct wpa_supplicant *VAR_1)
{
 if (VAR_1->bgscan && VAR_1->bgscan_priv) {
  FUNC_1(VAR_0, "bgscan: Deinitializing module '%s'",
      VAR_1->bgscan->name);
  VAR_1->bgscan->deinit(VAR_1->bgscan_priv);
  VAR_1->bgscan = ((void*)0);
  VAR_1->bgscan_priv = ((void*)0);
 }
}
