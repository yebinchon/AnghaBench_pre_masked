
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlnxr_iw_ep {TYPE_2__* cm_id; struct qlnxr_dev* dev; } ;
struct qlnxr_dev {int * ha; } ;
struct iw_cm_event {int event; int status; int private_data_len; void* private_data; int ird; int ord; } ;
struct ecore_iwarp_cm_event_params {TYPE_1__* cm_info; int status; } ;
typedef int qlnx_host_t ;
typedef int event ;
typedef enum iw_cm_event_type { ____Placeholder_iw_cm_event_type } iw_cm_event_type ;
struct TYPE_4__ {int (* event_handler ) (TYPE_2__*,struct iw_cm_event*) ;} ;
struct TYPE_3__ {scalar_t__ private_data; int private_data_len; int ord; int ird; } ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (struct iw_cm_event*,int ,int) ;
 int FUNC_3 (TYPE_2__*,struct iw_cm_event*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0,
  struct ecore_iwarp_cm_event_params *VAR_1,
  enum iw_cm_event_type VAR_2,
  char *VAR_3)
{
 struct qlnxr_iw_ep *VAR_4 = (struct qlnxr_iw_ep *)VAR_0;
 struct qlnxr_dev *VAR_5 = VAR_4->dev;
 struct iw_cm_event VAR_6;
 qlnx_host_t *VAR_7;

 VAR_7 = VAR_5->ha;

 FUNC_1(VAR_7, "enter\n");

 FUNC_2(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.status = VAR_1->status;
 VAR_6.event = VAR_2;

 if (VAR_1->cm_info != ((void*)0)) {







  VAR_6.private_data_len = VAR_1->cm_info->private_data_len;
  VAR_6.private_data = (void *)VAR_1->cm_info->private_data;
  FUNC_1(VAR_7, "private_data_len=[%d] \n",
   VAR_6.private_data_len);
 }

 FUNC_1(VAR_7, "event=[%d] %s\n", VAR_6.event, VAR_3);
 FUNC_1(VAR_7, "status=[%d] \n", VAR_6.status);

 if (VAR_4) {
  if (VAR_4->cm_id)
   VAR_4->cm_id->event_handler(VAR_4->cm_id, &VAR_6);
  else
   FUNC_0(VAR_7, "ep->cm_id == NULL \n");
 } else {
  FUNC_0(VAR_7, "ep == NULL \n");
 }

 FUNC_1(VAR_7, "exit\n");

 return;
}
