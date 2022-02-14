
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int Function; } ;
typedef int MSG_SCSI_IO_REPLY ;
typedef int MSG_PORT_ENABLE_REPLY ;
typedef int MSG_IOC_INIT_REPLY ;
typedef int MSG_IOC_FACTS_REPLY ;
typedef int MSG_EVENT_NOTIFY_REPLY ;
typedef TYPE_1__ MSG_DEFAULT_REPLY ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int *) ;

void
FUNC_6(void *VAR_0)
{
 MSG_DEFAULT_REPLY *VAR_1 = VAR_0;

 switch (VAR_1->Function) {
 case 133:
  FUNC_1((MSG_EVENT_NOTIFY_REPLY *)VAR_1);
  break;
 case 130:
  FUNC_0((MSG_PORT_ENABLE_REPLY *)VAR_1);
  break;
 case 132:
  FUNC_3((MSG_IOC_FACTS_REPLY *)VAR_1);
  break;
 case 131:
  FUNC_2((MSG_IOC_INIT_REPLY *)VAR_1);
  break;
 case 128:
 case 129:
  FUNC_5((MSG_SCSI_IO_REPLY *)VAR_1);
  break;
 default:
  FUNC_4((MSG_DEFAULT_REPLY *)VAR_1);
  break;
 }
}
