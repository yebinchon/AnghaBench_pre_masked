
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ecore_iwarp_ep {int cb_context; int (* event_cb ) (int ,struct ecore_iwarp_cm_event_params*) ;int list_entry; int state; int cm_info; int qp; } ;
struct ecore_iwarp_cm_event_params {int status; int * cm_info; struct ecore_iwarp_ep* ep_context; int event; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
struct TYPE_3__ {int iw_lock; int ep_list; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ecore_hwfn*,int ,int ,int) ;
 int FUNC_4 (int ,struct ecore_iwarp_cm_event_params*) ;

__attribute__((used)) static void
FUNC_5(struct ecore_hwfn *VAR_6,
   struct ecore_iwarp_ep *VAR_7,
   u8 VAR_8)
{
 struct ecore_iwarp_cm_event_params VAR_9;

 FUNC_3(VAR_6, VAR_7->qp, VAR_3, 1);

 VAR_9.event = VAR_2;
 VAR_9.ep_context = VAR_7;
 VAR_9.cm_info = &VAR_7->cm_info;
 VAR_9.status = (VAR_8 == VAR_5) ?
  VAR_4 : VAR_0;

 VAR_7->state = VAR_1;
 FUNC_1(&VAR_6->p_rdma_info->iwarp.iw_lock);
 FUNC_0(&VAR_7->list_entry,
          &VAR_6->p_rdma_info->iwarp.ep_list);
 FUNC_2(&VAR_6->p_rdma_info->iwarp.iw_lock);

 VAR_7->event_cb(VAR_7->cb_context, &VAR_9);
}
