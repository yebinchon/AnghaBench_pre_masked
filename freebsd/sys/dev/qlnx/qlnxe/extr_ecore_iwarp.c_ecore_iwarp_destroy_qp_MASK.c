
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_rdma_qp {scalar_t__ iwarp_state; int shared_queue_phys_addr; scalar_t__ shared_queue; int icid; struct ecore_iwarp_ep* ep; } ;
struct ecore_iwarp_fpdu {scalar_t__ incomplete_bytes; } ;
struct ecore_iwarp_ep {scalar_t__ state; } ;
struct ecore_hwfn {int p_dev; } ;
typedef enum _ecore_status_t { ____Placeholder__ecore_status_t } _ecore_status_t ;


 int FUNC_0 (struct ecore_hwfn*,int,char*,scalar_t__) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct ecore_hwfn*,struct ecore_iwarp_ep*,int) ;
 int FUNC_5 (struct ecore_hwfn*,struct ecore_rdma_qp*) ;
 struct ecore_iwarp_fpdu* FUNC_6 (struct ecore_hwfn*,int ) ;
 int FUNC_7 (struct ecore_hwfn*,struct ecore_rdma_qp*,scalar_t__,int) ;

enum _ecore_status_t
FUNC_8(struct ecore_hwfn *VAR_5,
         struct ecore_rdma_qp *VAR_6)
{
 enum _ecore_status_t VAR_7 = VAR_3;
 struct ecore_iwarp_ep *VAR_8 = VAR_6->ep;
 struct ecore_iwarp_fpdu *VAR_9;
 int VAR_10 = 0;

 VAR_9 = FUNC_6(VAR_5, VAR_6->icid);
 if (VAR_9 && VAR_9->incomplete_bytes)
  FUNC_0(VAR_5, 0,
     "Pending Partial fpdu with incomplete bytes=%d\n",
     VAR_9->incomplete_bytes);

 if (VAR_6->iwarp_state != VAR_1) {

  VAR_7 = FUNC_7(VAR_5, VAR_6,
        VAR_1,
        0);

  if (VAR_7 != VAR_3)
   return VAR_7;
 }


 if (VAR_8) {
  while (VAR_8->state != VAR_0) {
   FUNC_1(VAR_5, VAR_2,
       "Waiting for ep->state to be closed...state=%x\n",
       VAR_8->state);

   FUNC_3(100);
   if (VAR_10++ > 200) {
    FUNC_0(VAR_5, 0, "ep state close timeout state=%x\n",
       VAR_8->state);
    break;
   }
  }

  FUNC_4(VAR_5, VAR_8, 0);
 }

 VAR_7 = FUNC_5(VAR_5, VAR_6);

 if (VAR_6->shared_queue)
  FUNC_2(VAR_5->p_dev,
           VAR_6->shared_queue,
           VAR_6->shared_queue_phys_addr,
           VAR_4);

 return VAR_7;
}
