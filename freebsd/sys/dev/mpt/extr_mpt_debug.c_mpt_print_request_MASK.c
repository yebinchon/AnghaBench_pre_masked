
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Function; } ;
typedef int PTR_MSG_TARGET_ASSIST_REQUEST ;
typedef int MSG_TARGET_STATUS_SEND_REQUEST ;
typedef int MSG_SCSI_TASK_MGMT ;
typedef int MSG_SCSI_IO_REQUEST ;
typedef TYPE_1__ MSG_REQUEST_HEADER ;







 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void
FUNC_5(void *VAR_0)
{
 MSG_REQUEST_HEADER *VAR_1 = VAR_0;

 switch (VAR_1->Function) {
 case 131:
 case 132:
  FUNC_1((MSG_SCSI_IO_REQUEST *)VAR_1);
  break;
 case 130:
  FUNC_4((MSG_SCSI_TASK_MGMT *)VAR_1);
  break;
 case 129:
  FUNC_2(
      (PTR_MSG_TARGET_ASSIST_REQUEST)VAR_1);
  break;
 case 128:
  FUNC_3(
      (MSG_TARGET_STATUS_SEND_REQUEST *)VAR_1);
  break;
 default:
  FUNC_0(VAR_1);
  break;
 }
}
