
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ rsp_prod; scalar_t__ rsp_cons; } ;
struct TYPE_3__ {int xen_intr_handle; int evtchn; int xs_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int,...) ;
 int FUNC_1 (int ,int ,int *,int ,int *,int,int *) ;
 int FUNC_2 (int *) ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_3(void)
{
 int VAR_6;

 if (VAR_3->rsp_prod != VAR_3->rsp_cons) {
  FUNC_0(VAR_2, "XENSTORE response ring is not quiescent "
      "(%08x:%08x): fixing up\n",
      VAR_3->rsp_cons, VAR_3->rsp_prod);
  VAR_3->rsp_cons = VAR_3->rsp_prod;
 }

 FUNC_2(&VAR_4.xen_intr_handle);

 VAR_6 = FUNC_1(VAR_4.xs_dev, VAR_4.evtchn,
               ((void*)0), VAR_5, ((void*)0), VAR_1|VAR_0,
     &VAR_4.xen_intr_handle);
 if (VAR_6) {
  FUNC_0(VAR_2, "XENSTORE request irq failed %i\n", VAR_6);
  return (VAR_6);
 }

 return (0);
}
