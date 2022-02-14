
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_inquiry {int byte2; scalar_t__ page_code; } ;
struct ctl_scsiio {scalar_t__ cdb; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;

int
FUNC_5(struct ctl_scsiio *VAR_2)
{
 struct scsi_inquiry *VAR_3;
 int VAR_4;

 FUNC_0(("ctl_inquiry\n"));

 VAR_3 = (struct scsi_inquiry *)VAR_2->cdb;
 if (VAR_3->byte2 & VAR_1)
  VAR_4 = FUNC_2(VAR_2);
 else if (VAR_3->page_code == 0)
  VAR_4 = FUNC_3(VAR_2);
 else {
  FUNC_4(VAR_2,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_1((union ctl_io *)VAR_2);
  return (VAR_0);
 }

 return (VAR_4);
}
