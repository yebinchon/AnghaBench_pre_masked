
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct TYPE_6__ {int remote_device_handle; } ;
struct ISCI_TASK_REQUEST {int sci_object; union ccb* ccb; TYPE_3__ parent; } ;
struct ISCI_REQUEST {int dummy; } ;
struct ISCI_REMOTE_DEVICE {scalar_t__ is_resetting; int sci_object; int index; TYPE_2__* domain; int pending_device_reset_element; } ;
struct ISCI_CONTROLLER {int scif_controller_handle; int request_pool; int index; int pending_device_reset_list; } ;
struct TYPE_5__ {int index; struct ISCI_CONTROLLER* controller; } ;
typedef int SCI_TASK_STATUS ;
typedef scalar_t__ SCI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*,char*,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,struct ISCI_REQUEST*) ;
 scalar_t__ FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (int ,int ,int ,void*,void*,int *) ;
 int FUNC_7 (union ccb*) ;

void
FUNC_8(struct ISCI_REMOTE_DEVICE *VAR_5,
    union ccb *VAR_6)
{
 struct ISCI_CONTROLLER *VAR_7 = VAR_5->domain->controller;
 struct ISCI_REQUEST *VAR_8;
 struct ISCI_TASK_REQUEST *VAR_9;
 SCI_STATUS VAR_10;

 if (VAR_5->is_resetting == VAR_4) {

  return;
 }

 if (FUNC_3(VAR_7->request_pool)) {





  if (VAR_6 == ((void*)0))
   FUNC_2(
       &VAR_7->pending_device_reset_list,
       &VAR_5->pending_device_reset_element);
  else {
   VAR_6->ccb_h.status &= ~VAR_1;
   VAR_6->ccb_h.status |= VAR_0;
   FUNC_7(VAR_6);
  }
  return;
 }

 FUNC_0(0, "ISCI",
     "Sending reset to device on controller %d domain %d CAM index %d\n",
     VAR_7->index, VAR_5->domain->index,
     VAR_5->index
 );

 FUNC_4(VAR_7->request_pool, VAR_8);
 VAR_9 = (struct ISCI_TASK_REQUEST *)VAR_8;

 VAR_9->parent.remote_device_handle = VAR_5->sci_object;
 VAR_9->ccb = VAR_6;

 VAR_5->is_resetting = VAR_4;

 VAR_10 = (SCI_STATUS) FUNC_6(
     VAR_7->scif_controller_handle, VAR_5->sci_object,
     VAR_2, (void *)VAR_9,
     (void *)((char*)VAR_9 + sizeof(struct ISCI_TASK_REQUEST)),
     &VAR_9->sci_object);

 if (VAR_10 != VAR_3) {
  FUNC_1(VAR_7->scif_controller_handle,
      VAR_5->sci_object, VAR_9->sci_object,
      (SCI_TASK_STATUS)VAR_10);
  return;
 }

 VAR_10 = (SCI_STATUS)FUNC_5(
     VAR_7->scif_controller_handle, VAR_5->sci_object,
     VAR_9->sci_object, VAR_2);

 if (VAR_10 != VAR_3) {
  FUNC_1(
      VAR_7->scif_controller_handle,
      VAR_5->sci_object, VAR_9->sci_object,
      (SCI_TASK_STATUS)VAR_10);
  return;
 }
}
