
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
struct scsi_inquiry {int page_code; int length; } ;
struct ctl_scsiio {scalar_t__ cdb; } ;
struct ctl_lun {TYPE_1__* be_lun; } ;
struct TYPE_2__ {int lun_type; } ;


 struct ctl_lun* FUNC_0 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*,int) ;
 int FUNC_3 (struct ctl_scsiio*,int) ;
 int FUNC_4 (struct ctl_scsiio*,int) ;
 int FUNC_5 (struct ctl_scsiio*,int) ;
 int FUNC_6 (struct ctl_scsiio*,int) ;
 int FUNC_7 (struct ctl_scsiio*,int) ;
 int FUNC_8 (struct ctl_scsiio*,int) ;
 int FUNC_9 (struct ctl_scsiio*,int) ;
 int FUNC_10 (struct ctl_scsiio*,int) ;
 int FUNC_11 (struct ctl_scsiio*,int) ;
 int FUNC_12 (struct ctl_scsiio*,int) ;
 int FUNC_13 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int
FUNC_15(struct ctl_scsiio *VAR_2)
{
 struct ctl_lun *VAR_3 = FUNC_0(VAR_2);
 struct scsi_inquiry *VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = (struct scsi_inquiry *)VAR_2->cdb;
 VAR_5 = FUNC_14(VAR_4->length);

 switch (VAR_4->page_code) {
 case 129:
  VAR_6 = FUNC_11(VAR_2, VAR_5);
  break;
 case 128:
  VAR_6 = FUNC_9(VAR_2, VAR_5);
  break;
 case 136:
  VAR_6 = FUNC_4(VAR_2, VAR_5);
  break;
 case 135:
  VAR_6 = FUNC_5(VAR_2, VAR_5);
  break;
 case 133:
  VAR_6 = FUNC_7(VAR_2, VAR_5);
  break;
 case 132:
  VAR_6 = FUNC_8(VAR_2, VAR_5);
  break;
 case 130:
  VAR_6 = FUNC_12(VAR_2, VAR_5);
  break;
 case 131:
  VAR_6 = FUNC_10(VAR_2, VAR_5);
  break;
 case 137:
  if (VAR_3 == ((void*)0) || VAR_3->be_lun->lun_type != VAR_1)
   goto err;
  VAR_6 = FUNC_3(VAR_2, VAR_5);
  break;
 case 138:
  if (VAR_3 == ((void*)0) || VAR_3->be_lun->lun_type != VAR_1)
   goto err;
  VAR_6 = FUNC_2(VAR_2, VAR_5);
  break;
 case 134:
  if (VAR_3 == ((void*)0) || VAR_3->be_lun->lun_type != VAR_1)
   goto err;
  VAR_6 = FUNC_6(VAR_2, VAR_5);
  break;
 default:
err:
  FUNC_13(VAR_2,
                        1,
                      1,
                    2,
                        0,
                  0);
  FUNC_1((union ctl_io *)VAR_2);
  VAR_6 = VAR_0;
  break;
 }

 return (VAR_6);
}
