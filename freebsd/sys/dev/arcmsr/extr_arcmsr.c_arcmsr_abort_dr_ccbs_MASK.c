
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct CommandControlBlock {scalar_t__ srb_state; TYPE_2__* pccb; } ;
struct AdapterControlBlock {int pci_unit; struct CommandControlBlock** psrb_pool; } ;
struct TYPE_3__ {int target_id; int target_lun; int status; } ;
struct TYPE_4__ {TYPE_1__ ccb_h; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*,int ) ;
 int FUNC_2 (struct CommandControlBlock*,int) ;
 int FUNC_3 (char*,int,int,int,struct CommandControlBlock*) ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_4, int VAR_5, int VAR_6)
{
 struct CommandControlBlock *VAR_7;
 u_int32_t VAR_8;
 int VAR_9;


 VAR_8 = FUNC_0(VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
 {
  VAR_7 = VAR_4->psrb_pool[VAR_9];
  if (VAR_7->srb_state == VAR_2)
  {
   if((VAR_5 == VAR_7->pccb->ccb_h.target_id) && (VAR_6 == VAR_7->pccb->ccb_h.target_lun))
   {
    VAR_7->srb_state = VAR_1;
    VAR_7->pccb->ccb_h.status |= VAR_3;
    FUNC_2(VAR_7, 1);
    FUNC_3("arcmsr%d: abort scsi id %d lun %d srb=%p \n", VAR_4->pci_unit, VAR_5, VAR_6, VAR_7);
   }
  }
 }

 FUNC_1(VAR_4, VAR_8);
}
