
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ecore_iwarp_ep {int cb_context; int (* event_cb ) (int ,struct ecore_iwarp_cm_event_params*) ;int cm_info; int cid; } ;
struct ecore_iwarp_cm_event_params {int * cm_info; struct ecore_iwarp_ep* ep_context; void* event; int status; } ;
struct ecore_hwfn {int dummy; } ;


 int FUNC_0 (struct ecore_hwfn*,int ,char*,...) ;
 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,struct ecore_iwarp_cm_event_params*) ;

__attribute__((used)) static void
FUNC_2(struct ecore_hwfn *VAR_13,
          struct ecore_iwarp_ep *VAR_14,
          int VAR_15)
{
 struct ecore_iwarp_cm_event_params VAR_16;
 bool VAR_17 = 0;

 FUNC_0(VAR_13, VAR_11, "EP(0x%x) fw_ret_code=%d\n",
     VAR_14->cid, VAR_15);

 switch (VAR_15) {
 case 136:
  VAR_16.status = VAR_12;
  VAR_16.event = VAR_2;
  VAR_17 = 1;
  break;
 case 135:
  VAR_16.status = VAR_0;
  VAR_16.event = VAR_2;
  VAR_17 = 1;
  break;
 case 129:
  VAR_16.event = VAR_9;
  VAR_17 = 1;
  break;
 case 137:
  VAR_16.event = VAR_3;
  VAR_17 = 1;
  break;
 case 134:
  VAR_16.event = VAR_4;
  VAR_17 = 1;
  break;
 case 130:
  VAR_16.event = VAR_8;
  VAR_17 = 1;
  break;
 case 138:
  VAR_16.event = VAR_1;
  VAR_17 = 1;
  break;
 case 132:
  VAR_16.event = VAR_6;
  VAR_17 = 1;
  break;
 case 133:
  VAR_16.event = VAR_5;
  VAR_17 = 1;
  break;
 case 131:
  VAR_16.event = VAR_7;
  VAR_17 = 1;
  break;
 case 128:
  VAR_16.event = VAR_10;
  VAR_17 = 1;
  break;
 default:
  FUNC_0(VAR_13, VAR_11,
      "Unhandled exception received...\n");
  break;
 }

 if (VAR_17) {
  VAR_16.ep_context = VAR_14;
  VAR_16.cm_info = &VAR_14->cm_info;
  VAR_14->event_cb(VAR_14->cb_context, &VAR_16);
 }
}
