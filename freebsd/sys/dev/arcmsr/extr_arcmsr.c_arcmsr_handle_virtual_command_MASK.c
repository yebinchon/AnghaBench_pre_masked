
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* data_ptr; int scsi_status; } ;
struct TYPE_3__ {int status; scalar_t__ target_lun; } ;
union ccb {TYPE_2__ csio; TYPE_1__ ccb_h; } ;
struct AdapterControlBlock {int dummy; } ;
typedef int inqdata ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 int VAR_3 ;
 unsigned char VAR_4 ;

 int FUNC_0 (struct AdapterControlBlock*,union ccb*) ;
 int FUNC_1 (char*,unsigned char*,int) ;
 int* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (unsigned char*,char*,int) ;
 int FUNC_4 (union ccb*) ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_5,
  union ccb *VAR_6)
{
 if (VAR_6->ccb_h.target_lun) {
  VAR_6->ccb_h.status |= VAR_0;
  FUNC_4(VAR_6);
  return;
 }
 VAR_6->ccb_h.status |= VAR_1;
 switch (FUNC_2(&VAR_6->csio)[0]) {
 case 130: {
  unsigned char VAR_7[36];
  char *VAR_8 = VAR_6->csio.data_ptr;

  VAR_7[0] = VAR_4;
  VAR_7[1] = 0;
  VAR_7[2] = 0;
  VAR_7[3] = 0;
  VAR_7[4] = 31;
  VAR_7[5] = 0;
  VAR_7[6] = 0;
  VAR_7[7] = 0;
  FUNC_3(&VAR_7[8], "Areca   ", 8);
  FUNC_3(&VAR_7[16], "RAID controller ", 16);
  FUNC_3(&VAR_7[32], "R001", 4);
  FUNC_1(VAR_8, VAR_7, sizeof(VAR_7));
  FUNC_4(VAR_6);
 }
 break;
 case 128:
 case 129: {
  if (FUNC_0(VAR_5, VAR_6)) {
   VAR_6->ccb_h.status |= VAR_2;
   VAR_6->csio.scsi_status = VAR_3;
  }
  FUNC_4(VAR_6);
 }
 break;
 default:
  FUNC_4(VAR_6);
 }
}
