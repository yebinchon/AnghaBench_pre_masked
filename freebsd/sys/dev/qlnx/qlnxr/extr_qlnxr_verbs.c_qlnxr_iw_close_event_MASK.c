
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qlnxr_iw_ep {TYPE_1__* cm_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct ecore_iwarp_cm_event_params {int dummy; } ;
typedef int qlnx_host_t ;
struct TYPE_2__ {int (* rem_ref ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (void*,struct ecore_iwarp_cm_event_params*,int ,char*) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_1,
  struct ecore_iwarp_cm_event_params *VAR_2)
{
 struct qlnxr_iw_ep *VAR_3 = (struct qlnxr_iw_ep *)VAR_1;
 struct qlnxr_dev *VAR_4 = VAR_3->dev;
 qlnx_host_t *VAR_5;

 VAR_5 = VAR_4->ha;

 FUNC_0(VAR_5, "enter\n");

 if (VAR_3->cm_id) {
  FUNC_1(VAR_1,
        VAR_2,
        VAR_0,
        "IW_CM_EVENT_EVENT_CLOSE");
  VAR_3->cm_id->rem_ref(VAR_3->cm_id);
  VAR_3->cm_id = ((void*)0);
 }

 FUNC_0(VAR_5, "exit\n");

 return;
}
