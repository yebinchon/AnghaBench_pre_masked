
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * vendor_ext; } ;
struct wps_context {int dh_privkey; int dh_pubkey; struct wps_context* network_key; TYPE_1__ dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct wps_context*) ;
 int FUNC_1 (struct wps_context*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_4(struct wps_context *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_2(VAR_1->dev.vendor_ext[VAR_2]);
 FUNC_3(&VAR_1->dev);
 FUNC_1(VAR_1->network_key);
 FUNC_0(VAR_1);
 FUNC_2(VAR_1->dh_pubkey);
 FUNC_2(VAR_1->dh_privkey);
 FUNC_1(VAR_1);
}
