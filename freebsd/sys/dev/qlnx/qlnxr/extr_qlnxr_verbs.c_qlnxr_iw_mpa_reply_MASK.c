
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qlnxr_iw_ep {struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int rdma_ctx; TYPE_2__* ha; } ;
struct ecore_iwarp_send_rtr_in {int ep_context; } ;
struct ecore_iwarp_cm_event_params {int ep_context; } ;
struct TYPE_5__ {TYPE_1__* ifp; } ;
typedef TYPE_2__ qlnx_host_t ;
struct TYPE_4__ {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,...) ;
 int FUNC_1 (struct ecore_iwarp_send_rtr_in*,int) ;
 int FUNC_2 (int ,struct ecore_iwarp_send_rtr_in*) ;

__attribute__((used)) static int
FUNC_3(void *VAR_2,
 struct ecore_iwarp_cm_event_params *VAR_3)
{
        struct qlnxr_iw_ep *VAR_4 = (struct qlnxr_iw_ep *)VAR_2;
        struct qlnxr_dev *VAR_5 = VAR_4->dev;
        struct ecore_iwarp_send_rtr_in VAR_6;
        int VAR_7;
 qlnx_host_t *VAR_8;

 VAR_8 = VAR_5->ha;

 FUNC_0(VAR_8, "enter\n");

 if (!(VAR_8->ifp->if_drv_flags & VAR_1))
  return -VAR_0;

 FUNC_1(&VAR_6, sizeof(struct ecore_iwarp_send_rtr_in));
        VAR_6.ep_context = VAR_3->ep_context;

        VAR_7 = FUNC_2(VAR_5->rdma_ctx, &VAR_6);

 FUNC_0(VAR_8, "exit rc = %d\n", VAR_7);
        return VAR_7;
}
