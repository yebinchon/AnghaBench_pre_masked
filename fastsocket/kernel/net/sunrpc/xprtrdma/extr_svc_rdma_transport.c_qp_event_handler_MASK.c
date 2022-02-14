
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct svc_xprt {int xpt_flags; } ;
struct TYPE_2__ {int qp; } ;
struct ib_event {int event; TYPE_1__ element; } ;
 int VAR_0 ;
 int FUNC_0 (char*,int,int ) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct ib_event *VAR_1, void *VAR_2)
{
 struct svc_xprt *VAR_3 = VAR_2;

 switch (VAR_1->event) {

 case 134:
 case 136:
 case 128:
 case 130:
  FUNC_0("svcrdma: QP event %d received for QP=%p\n",
   VAR_1->event, VAR_1->element.qp);
  break;

 case 133:
 case 131:
 case 129:
 case 132:
 case 135:
 default:
  FUNC_0("svcrdma: QP ERROR event %d received for QP=%p, "
   "closing transport\n",
   VAR_1->event, VAR_1->element.qp);
  FUNC_1(VAR_0, &VAR_3->xpt_flags);
  break;
 }
}
