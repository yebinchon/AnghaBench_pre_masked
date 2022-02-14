
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {int fip_arg; int (* fip ) (int ,TYPE_2__*) ;int os; } ;
typedef TYPE_1__ sli4_t ;
struct TYPE_7__ {int type; int index; int member_0; } ;
typedef TYPE_2__ sli4_fip_event_t ;
struct TYPE_8__ {int event_type; int event_information; int event_tag; int fcf_count; } ;
typedef TYPE_3__ sli4_fcoe_fip_t ;
typedef int int32_t ;







 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,TYPE_2__*) ;

int32_t
FUNC_3(sli4_t *VAR_2, void *VAR_3)
{
 sli4_fcoe_fip_t *VAR_4 = VAR_3;
 sli4_fip_event_t VAR_5 = { 0 };
 uint32_t VAR_6 = VAR_1;

 FUNC_0(VAR_2->os, "ACQE FCoE FIP type=%02x count=%d tag=%#x\n",
   VAR_4->event_type,
   VAR_4->fcf_count,
   VAR_4->event_tag);

 if (!VAR_2->fip) {
  return 0;
 }

 VAR_5.type = VAR_4->event_type;
 VAR_5.index = VAR_1;

 switch (VAR_4->event_type) {
 case 130:
  FUNC_0(VAR_2->os, "FCF Discovered index=%d\n", VAR_4->event_information);
  break;
 case 128:
  FUNC_0(VAR_2->os, "FCF Table Full\n");
  VAR_6 = 0;
  break;
 case 131:
  FUNC_0(VAR_2->os, "FCF Dead/Gone index=%d\n", VAR_4->event_information);
  break;
 case 132:
  VAR_6 = VAR_0;
  FUNC_0(VAR_2->os, "Clear VLINK Received VPI=%#x\n", VAR_4->event_information & VAR_6);
  break;
 case 129:
  FUNC_0(VAR_2->os, "FCF Modified\n");
  break;
 default:
  FUNC_1(VAR_2->os, "bad FCoE type %#x", VAR_4->event_type);
  VAR_6 = 0;
 }

 if (VAR_6 != 0) {
  VAR_5.index = VAR_4->event_information & VAR_6;
 }

 VAR_2->fip(VAR_2->fip_arg, &VAR_5);

 return 0;
}
