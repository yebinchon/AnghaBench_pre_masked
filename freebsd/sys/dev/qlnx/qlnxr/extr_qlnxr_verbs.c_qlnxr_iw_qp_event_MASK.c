
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_iw_ep {TYPE_1__* qp; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct ib_qp {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct TYPE_4__ {struct ib_qp* qp; } ;
struct ib_event {int event; TYPE_2__ element; int device; } ;
struct ecore_iwarp_cm_event_params {int event; } ;
typedef int qlnx_host_t ;
typedef enum ib_event_type { ____Placeholder_ib_event_type } ib_event_type ;
struct TYPE_3__ {struct ib_qp ibqp; } ;


 int FUNC_0 (int *,char*,void*,int ,char*,int (*) (struct ib_event*,int )) ;
 int FUNC_1 (struct ib_event*,int ) ;

void
FUNC_2(void *VAR_0,
 struct ecore_iwarp_cm_event_params *VAR_1,
 enum ib_event_type VAR_2,
 char *VAR_3)
{
        struct qlnxr_iw_ep *VAR_4 = (struct qlnxr_iw_ep *)VAR_0;
        struct qlnxr_dev *VAR_5 = VAR_4->dev;
        struct ib_qp *VAR_6 = &(VAR_4->qp->ibqp);
        struct ib_event VAR_7;
 qlnx_host_t *VAR_8;

 VAR_8 = VAR_5->ha;

 FUNC_0(VAR_8,
  "[context, event, event_handler] = [%p, 0x%x, %s, %p] enter\n",
  VAR_0, VAR_1->event, VAR_3, VAR_6->event_handler);

        if (VAR_6->event_handler) {
                VAR_7.event = VAR_2;
                VAR_7.device = VAR_6->device;
                VAR_7.element.qp = VAR_6;
                VAR_6->event_handler(&VAR_7, VAR_6->qp_context);
        }

 return;
}
