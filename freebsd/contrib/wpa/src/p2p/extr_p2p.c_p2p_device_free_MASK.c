
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * p2ps_instance; int * vendor_elems; int * wfd_subelems; int ** wps_vendor_ext; int p2p_device_addr; } ;
struct p2p_device {int flags; TYPE_2__ info; int * go_neg_conf; } ;
struct p2p_data {TYPE_1__* cfg; struct p2p_device* pending_client_disc_go; struct p2p_device* sd_peer; struct p2p_device* invite_peer; struct p2p_device* go_neg_peer; } ;
struct TYPE_3__ {int cb_ctx; int (* dev_lost ) (int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct p2p_device*) ;
 int FUNC_1 (struct p2p_data*,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct p2p_data *VAR_2, struct p2p_device *VAR_3)
{
 int VAR_4;

 if (VAR_2->go_neg_peer == VAR_3) {



  FUNC_1(VAR_2, -1);
 }
 if (VAR_2->invite_peer == VAR_3)
  VAR_2->invite_peer = ((void*)0);
 if (VAR_2->sd_peer == VAR_3)
  VAR_2->sd_peer = ((void*)0);
 if (VAR_2->pending_client_disc_go == VAR_3)
  VAR_2->pending_client_disc_go = ((void*)0);


 if (VAR_3->flags & VAR_0)
  VAR_2->cfg->dev_lost(VAR_2->cfg->cb_ctx,
       VAR_3->info.p2p_device_addr);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  FUNC_3(VAR_3->info.wps_vendor_ext[VAR_4]);
  VAR_3->info.wps_vendor_ext[VAR_4] = ((void*)0);
 }

 FUNC_3(VAR_3->info.wfd_subelems);
 FUNC_3(VAR_3->info.vendor_elems);
 FUNC_3(VAR_3->go_neg_conf);
 FUNC_3(VAR_3->info.p2ps_instance);

 FUNC_0(VAR_3);
}
