
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ird; int ord; } ;
struct ecore_iwarp_ep {scalar_t__ connect_mode; int mpa_reply_processed; int cb_context; int (* event_cb ) (int ,struct ecore_iwarp_cm_event_params*) ;TYPE_1__ cm_info; int mpa_rev; } ;
struct ecore_iwarp_cm_event_params {int status; struct ecore_iwarp_ep* ep_context; TYPE_1__* cm_info; int event; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int,char*) ;
 int FUNC_1 (struct ecore_hwfn*,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_iwarp_ep*) ;
 int FUNC_3 (int ,struct ecore_iwarp_cm_event_params*) ;

__attribute__((used)) static void
FUNC_4(struct ecore_hwfn *VAR_4,
         struct ecore_iwarp_ep *VAR_5)
{
 struct ecore_iwarp_cm_event_params VAR_6;

 if (VAR_5->connect_mode == VAR_3) {
  FUNC_0(VAR_4, 1, "MPA reply event not expected on passive side!\n");
  return;
 }

 VAR_6.event = VAR_0;

 FUNC_2(VAR_4, VAR_5);

 FUNC_1(VAR_4, VAR_1,
     "MPA_NEGOTIATE (v%d): ORD: 0x%x IRD: 0x%x\n",
     VAR_5->mpa_rev, VAR_5->cm_info.ord, VAR_5->cm_info.ird);

 VAR_6.cm_info = &VAR_5->cm_info;
 VAR_6.ep_context = VAR_5;
 VAR_6.status = VAR_2;

 VAR_5->mpa_reply_processed = 1;

 VAR_5->event_cb(VAR_5->cb_context, &VAR_6);
}
