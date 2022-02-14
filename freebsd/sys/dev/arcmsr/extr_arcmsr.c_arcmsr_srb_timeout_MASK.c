
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int8_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; struct AdapterControlBlock* acb; } ;
struct AdapterControlBlock {int pci_unit; int isr_lock; } ;
struct TYPE_3__ {int target_id; int target_lun; int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; int csio; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct AdapterControlBlock*) ;
 int FUNC_3 (struct CommandControlBlock*,int) ;
 int FUNC_4 (char*,int,int,int,int,struct CommandControlBlock*) ;
 int* FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(void *VAR_3)
{
 struct CommandControlBlock *VAR_4 = (struct CommandControlBlock *)VAR_3;
 struct AdapterControlBlock *VAR_5;
 int VAR_6, VAR_7;
 u_int8_t VAR_8;

 VAR_6 = VAR_4->pccb->ccb_h.target_id;
 VAR_7 = VAR_4->pccb->ccb_h.target_lun;
 VAR_5 = VAR_4->acb;
 FUNC_0(&VAR_5->isr_lock);
 if(VAR_4->srb_state == VAR_0)
 {
  VAR_8 = FUNC_5(&VAR_4->pccb->csio)[0];
  VAR_4->srb_state = VAR_1;
  VAR_4->pccb->ccb_h.status |= VAR_2;
  FUNC_3(VAR_4, 1);
  FUNC_4("arcmsr%d: scsi id %d lun %d cmd=0x%x srb='%p' ccb command time out!\n",
     VAR_5->pci_unit, VAR_6, VAR_7, VAR_8, VAR_4);
 }
 FUNC_1(&VAR_5->isr_lock);



}
