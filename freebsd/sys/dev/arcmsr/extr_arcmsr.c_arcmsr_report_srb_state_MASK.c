
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u_int16_t ;
struct TYPE_4__ {int DeviceStatus; } ;
struct CommandControlBlock {TYPE_3__* pccb; TYPE_1__ arcmsr_cdb; } ;
struct AdapterControlBlock {scalar_t__** devstate; int pci_unit; } ;
struct TYPE_5__ {int target_id; int target_lun; int status; } ;
struct TYPE_6__ {TYPE_2__ ccb_h; } ;





 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

 int FUNC_0 (struct CommandControlBlock*) ;
 int FUNC_1 (struct CommandControlBlock*,int) ;
 int FUNC_2 (char*,int,int,int,...) ;

__attribute__((used)) static void FUNC_3(struct AdapterControlBlock *VAR_6, struct CommandControlBlock *VAR_7, u_int16_t VAR_8)
{
 int VAR_9, VAR_10;

 VAR_9 = VAR_7->pccb->ccb_h.target_id;
 VAR_10 = VAR_7->pccb->ccb_h.target_lun;
 if(VAR_8 == VAR_5) {
  if(VAR_6->devstate[VAR_9][VAR_10] == VAR_0) {
   VAR_6->devstate[VAR_9][VAR_10] = VAR_1;
  }
  VAR_7->pccb->ccb_h.status |= VAR_3;
  FUNC_1(VAR_7, 1);
 } else {
  switch(VAR_7->arcmsr_cdb.DeviceStatus) {
  case 129: {
    if(VAR_6->devstate[VAR_9][VAR_10] == VAR_1) {
     FUNC_2( "arcmsr%d: Target=%x, Lun=%x, selection timeout, raid volume was lost\n", VAR_6->pci_unit, VAR_9, VAR_10);
    }
    VAR_6->devstate[VAR_9][VAR_10] = VAR_0;
    VAR_7->pccb->ccb_h.status |= VAR_2;
    FUNC_1(VAR_7, 1);
   }
   break;
  case 131:
  case 130: {
    VAR_6->devstate[VAR_9][VAR_10] = VAR_0;
    VAR_7->pccb->ccb_h.status |= VAR_2;
    FUNC_1(VAR_7, 1);
   }
   break;
  case 128: {
    VAR_6->devstate[VAR_9][VAR_10] = VAR_1;
    FUNC_0(VAR_7);
    FUNC_1(VAR_7, 1);
   }
   break;
  default:
   FUNC_2("arcmsr%d: scsi id=%d lun=%d isr got command error done,but got unknown DeviceStatus=0x%x \n"
     , VAR_6->pci_unit, VAR_9, VAR_10 ,VAR_7->arcmsr_cdb.DeviceStatus);
   VAR_6->devstate[VAR_9][VAR_10] = VAR_0;
   VAR_7->pccb->ccb_h.status |= VAR_4;

   FUNC_1(VAR_7, 1);
   break;
  }
 }
}
