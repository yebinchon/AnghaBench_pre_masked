
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int status; } ;
union ccb {TYPE_2__ ccb_h; } ;
struct ISCI_TASK_REQUEST {union ccb* ccb; } ;
struct ISCI_REQUEST {int dummy; } ;
struct ISCI_REMOTE_DEVICE {TYPE_1__* domain; scalar_t__ is_resetting; } ;
struct ISCI_CONTROLLER {scalar_t__ is_frozen; int pending_device_reset_list; int request_pool; int sim; int fail_on_task_timeout; } ;
struct TYPE_3__ {int sci_object; } ;
typedef scalar_t__ SCI_TASK_STATUS ;
typedef int SCI_TASK_REQUEST_HANDLE_T ;
typedef int SCI_REMOTE_DEVICE_HANDLE_T ;
typedef int SCI_CONTROLLER_HANDLE_T ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*,...) ;
 int FUNC_1 (struct ISCI_REMOTE_DEVICE*) ;
 int FUNC_2 (struct ISCI_REMOTE_DEVICE*,union ccb*) ;
 struct ISCI_REMOTE_DEVICE* FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct ISCI_REQUEST*) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (union ccb*) ;
 int FUNC_8 (int ,scalar_t__) ;

void
FUNC_9(SCI_CONTROLLER_HANDLE_T VAR_4,
    SCI_REMOTE_DEVICE_HANDLE_T VAR_5,
    SCI_TASK_REQUEST_HANDLE_T VAR_6, SCI_TASK_STATUS VAR_7)
{
 struct ISCI_TASK_REQUEST *VAR_8 =
  (struct ISCI_TASK_REQUEST *)FUNC_4(VAR_6);
 struct ISCI_CONTROLLER *VAR_9 =
  (struct ISCI_CONTROLLER *)FUNC_4(VAR_4);
 struct ISCI_REMOTE_DEVICE *VAR_10 =
  (struct ISCI_REMOTE_DEVICE *)FUNC_4(VAR_5);
 struct ISCI_REMOTE_DEVICE *VAR_11;
 BOOL VAR_12 = VAR_2;
 union ccb *VAR_13 = VAR_8->ccb;

 VAR_10->is_resetting = VAR_2;

 switch ((int)VAR_7) {
 case 128:
 case 131:
  break;

 case 133:
  VAR_12 = VAR_3;
  FUNC_0(0, "ISCI",
      "task failure (invalid state) - retrying\n");
  break;

 case 135:
  VAR_12 = VAR_3;
  FUNC_0(0, "ISCI",
      "task failure (insufficient resources) - retrying\n");
  break;

 case 138:
  if (VAR_9->fail_on_task_timeout) {
   VAR_12 = VAR_2;
   FUNC_0(0, "ISCI",
       "task timeout - not retrying\n");
   FUNC_6(VAR_4,
       VAR_10->domain->sci_object,
       VAR_5);
  } else {
   VAR_12 = VAR_3;
   FUNC_0(0, "ISCI",
       "task timeout - retrying\n");
  }
  break;

 case 137:
 case 129:
 case 132:
 case 136:
 case 130:
 case 134:
  FUNC_0(0, "ISCI",
      "unhandled task completion code 0x%x\n", VAR_7);
  break;

 default:
  FUNC_0(0, "ISCI",
      "unhandled task completion code 0x%x\n", VAR_7);
  break;
 }

 if (VAR_9->is_frozen == VAR_3) {
  VAR_9->is_frozen = VAR_2;
  FUNC_8(VAR_9->sim, VAR_3);
 }

 FUNC_5(VAR_9->request_pool,
     (struct ISCI_REQUEST *)VAR_8);




 FUNC_1(VAR_10);

 if (VAR_12 == VAR_3)
  FUNC_2(VAR_10, VAR_13);
 else {
  VAR_11 = FUNC_3(
      &VAR_9->pending_device_reset_list);

  if (VAR_11 != ((void*)0)) {







   FUNC_2(VAR_11, ((void*)0));
  } else if (VAR_13 != ((void*)0)) {



   VAR_13->ccb_h.status &= ~VAR_1;
   VAR_13->ccb_h.status |= VAR_0;
   FUNC_7(VAR_13);
  }
 }
}
