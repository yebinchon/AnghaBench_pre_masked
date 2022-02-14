
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int target_id; scalar_t__ target_lun; scalar_t__ arcmsr_ccbacb_ptr; } ;
union ccb {TYPE_1__ ccb_h; } ;
typedef int uintmax_t ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct CommandControlBlock {scalar_t__ srb_state; union ccb* pccb; } ;
struct AdapterControlBlock {scalar_t__ srboutstandingcount; int pci_unit; struct CommandControlBlock** psrb_pool; int num_aborts; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct AdapterControlBlock*) ;
 int FUNC_1 (struct AdapterControlBlock*,int ) ;
 int FUNC_2 (struct AdapterControlBlock*,struct CommandControlBlock*) ;
 int FUNC_3 (char*,int,int,int ,struct CommandControlBlock*) ;

__attribute__((used)) static u_int8_t FUNC_4(union ccb *VAR_5)
{
 struct CommandControlBlock *VAR_6;
 struct AdapterControlBlock *VAR_7 = (struct AdapterControlBlock *) VAR_5->ccb_h.arcmsr_ccbacb_ptr;
 u_int32_t VAR_8;
 int VAR_9 = 0;

 VAR_7->num_aborts++;
 if(VAR_7->srboutstandingcount != 0) {

  VAR_8 = FUNC_0(VAR_7);
  for(VAR_9=0; VAR_9 < VAR_0; VAR_9++) {
   VAR_6 = VAR_7->psrb_pool[VAR_9];
   if(VAR_6->srb_state == VAR_2) {
    if(VAR_6->pccb == VAR_5) {
     VAR_6->srb_state = VAR_1;
     FUNC_3("arcmsr%d:scsi id=%d lun=%jx abort srb '%p'"
      "outstanding command \n"
      , VAR_7->pci_unit, VAR_5->ccb_h.target_id
      , (uintmax_t)VAR_5->ccb_h.target_lun, VAR_6);
     FUNC_2(VAR_7, VAR_6);

     FUNC_1(VAR_7, VAR_8);
     return (VAR_4);
    }
   }
  }

  FUNC_1(VAR_7, VAR_8);
 }
 return(VAR_3);
}
