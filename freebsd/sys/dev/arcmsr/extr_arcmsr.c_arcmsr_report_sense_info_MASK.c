
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int status; } ;
struct TYPE_5__ {int sense_data; scalar_t__ sense_len; int scsi_status; } ;
union ccb {TYPE_3__ ccb_h; TYPE_2__ csio; } ;
typedef int u_int8_t ;
struct SENSE_DATA {int dummy; } ;
struct TYPE_4__ {int SenseData; } ;
struct CommandControlBlock {TYPE_1__ arcmsr_cdb; union ccb* pccb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static void FUNC_3(struct CommandControlBlock *VAR_3)
{
 union ccb *VAR_4 = VAR_3->pccb;

 VAR_4->ccb_h.status |= VAR_1;
 VAR_4->csio.scsi_status = VAR_2;
 if(VAR_4->csio.sense_len) {
  FUNC_2(&VAR_4->csio.sense_data, 0, sizeof(VAR_4->csio.sense_data));
  FUNC_1(&VAR_4->csio.sense_data, VAR_3->arcmsr_cdb.SenseData,
  FUNC_0(sizeof(struct SENSE_DATA), sizeof(VAR_4->csio.sense_data)));
  ((u_int8_t *)&VAR_4->csio.sense_data)[0] = (0x1 << 7 | 0x70);
  VAR_4->ccb_h.status |= VAR_0;
 }
}
