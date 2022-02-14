
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct ecore_iwarp_ep {scalar_t__ connect_mode; int list_entry; int cb_context; int (* event_cb ) (int ,struct ecore_iwarp_cm_event_params*) ;int tcp_cid; int state; int cm_info; } ;
struct ecore_iwarp_cm_event_params {void* status; int * cm_info; struct ecore_iwarp_ep* ep_context; int event; } ;
struct ecore_hwfn {TYPE_2__* p_rdma_info; } ;
typedef int params ;
struct TYPE_3__ {int iw_lock; int ep_list; } ;
struct TYPE_4__ {TYPE_1__ iwarp; } ;


 int FUNC_0 (struct ecore_hwfn*,char*,int ,int ,int) ;
 int FUNC_1 (struct ecore_hwfn*,int,char*,int ,int ) ;
 int FUNC_2 (struct ecore_hwfn*,int ,char*,int ,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_3 (struct ecore_iwarp_ep*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;





 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct ecore_iwarp_cm_event_params*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_9 (int ,struct ecore_iwarp_cm_event_params*) ;

__attribute__((used)) static void
FUNC_10(struct ecore_hwfn *VAR_8,
         struct ecore_iwarp_ep *VAR_9,
         u8 VAR_10)
{
 struct ecore_iwarp_cm_event_params VAR_11;

 FUNC_5(&VAR_11, sizeof(VAR_11));
 VAR_11.event = VAR_3;
 VAR_11.ep_context = VAR_9;
 VAR_11.cm_info = &VAR_9->cm_info;
 VAR_9->state = VAR_2;

 switch (VAR_10) {
 case 129:
  FUNC_2(VAR_8, VAR_5,
      "%s(0x%x) TCP connect got invalid packet\n",
      FUNC_3(VAR_9),
      VAR_9->tcp_cid);
  VAR_11.status = VAR_1;
  break;
 case 130:
  FUNC_2(VAR_8, VAR_5,
      "%s(0x%x) TCP Connection Reset\n",
      FUNC_3(VAR_9),
      VAR_9->tcp_cid);
  VAR_11.status = VAR_1;
  break;
 case 128:
  FUNC_1(VAR_8, 0, "%s(0x%x) TCP timeout\n",
     FUNC_3(VAR_9),
     VAR_9->tcp_cid);
  VAR_11.status = VAR_6;
  break;
 case 131:
  FUNC_1(VAR_8, 0, "%s(0x%x) MPA not supported VER\n",
     FUNC_3(VAR_9),
     VAR_9->tcp_cid);
  VAR_11.status = VAR_0;
  break;
 case 132:
  FUNC_1(VAR_8, 0, "%s(0x%x) MPA Invalid Packet\n",
     FUNC_3(VAR_9), VAR_9->tcp_cid);
  VAR_11.status = VAR_1;
  break;
 default:
  FUNC_0(VAR_8, "%s(0x%x) Unexpected return code tcp connect: %d\n",
         FUNC_3(VAR_9), VAR_9->tcp_cid,
         VAR_10);
  VAR_11.status = VAR_1;
  break;
 }

 if (VAR_9->connect_mode == VAR_7) {
  VAR_9->tcp_cid = VAR_4;
  FUNC_8(VAR_8, VAR_9);
 } else {
  VAR_9->event_cb(VAR_9->cb_context, &VAR_11);
  FUNC_6(&VAR_8->p_rdma_info->iwarp.iw_lock);
  FUNC_4(&VAR_9->list_entry,
           &VAR_8->p_rdma_info->iwarp.ep_list);
  FUNC_7(&VAR_8->p_rdma_info->iwarp.iw_lock);
 }
}
