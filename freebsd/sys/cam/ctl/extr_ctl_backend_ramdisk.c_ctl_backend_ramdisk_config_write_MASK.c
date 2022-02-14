
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* cdb; } ;
union ctl_io {TYPE_1__ scsiio; } ;
struct scsi_start_stop_unit {int how; } ;
struct ctl_be_lun {int dummy; } ;


 struct ctl_be_lun* FUNC_0 (union ctl_io*) ;
 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (struct ctl_be_lun*) ;
 int FUNC_5 (struct ctl_be_lun*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (struct ctl_be_lun*) ;
 int FUNC_9 (struct ctl_be_lun*) ;

__attribute__((used)) static int
FUNC_10(union ctl_io *VAR_4)
{
 struct ctl_be_lun *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;

 switch (VAR_4->scsiio.cdb[0]) {
 case 132:
 case 131:

  FUNC_7(&VAR_4->scsiio);
  FUNC_3(VAR_4);
  break;
 case 133: {
  struct scsi_start_stop_unit *VAR_7;

  VAR_7 = (struct scsi_start_stop_unit *)VAR_4->scsiio.cdb;
  if ((VAR_7->how & VAR_2) != 0) {
   FUNC_7(&VAR_4->scsiio);
   FUNC_3(VAR_4);
   break;
  }
  if (VAR_7->how & VAR_3) {
   if (VAR_7->how & VAR_1)
    FUNC_5(VAR_5);
   FUNC_8(VAR_5);
  } else {
   FUNC_9(VAR_5);
   if (VAR_7->how & VAR_1)
    FUNC_4(VAR_5);
  }
  FUNC_7(&VAR_4->scsiio);
  FUNC_3(VAR_4);
  break;
 }
 case 134:
  FUNC_7(&VAR_4->scsiio);
  FUNC_3(VAR_4);
  break;
 case 129:
 case 128:
  FUNC_2(VAR_4);
  break;
 case 130:
  FUNC_1(VAR_4);
  break;
 default:
  FUNC_6(&VAR_4->scsiio);
  FUNC_3(VAR_4);
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
