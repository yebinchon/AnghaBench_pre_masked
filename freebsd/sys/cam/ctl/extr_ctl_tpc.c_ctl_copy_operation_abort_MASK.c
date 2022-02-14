
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint32_t ;
struct tpc_list {int abort; } ;
struct scsi_copy_operation_abort {int list_identifier; } ;
struct TYPE_2__ {int nexus; } ;
struct ctl_scsiio {TYPE_1__ io_hdr; scalar_t__ cdb; } ;
struct ctl_lun {int lun_lock; } ;


 int FUNC_0 (char*) ;
 struct ctl_lun* FUNC_1 (struct ctl_scsiio*) ;
 int VAR_0 ;
 int FUNC_2 (union ctl_io*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ctl_scsiio*,int,int,int,int ,int ) ;
 int FUNC_5 (struct ctl_scsiio*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 struct tpc_list* FUNC_9 (struct ctl_lun*,int ,int ) ;

int
FUNC_10(struct ctl_scsiio *VAR_1)
{
 struct ctl_lun *VAR_2 = FUNC_1(VAR_1);
 struct scsi_copy_operation_abort *VAR_3;
 struct tpc_list *VAR_4;
 int VAR_5;
 uint32_t VAR_6;

 FUNC_0(("ctl_copy_operation_abort\n"));

 VAR_3 = (struct scsi_copy_operation_abort *)VAR_1->cdb;
 VAR_5 = VAR_0;

 VAR_6 = FUNC_8(VAR_3->list_identifier);
 FUNC_6(&VAR_2->lun_lock);
 VAR_4 = FUNC_9(VAR_2, VAR_6,
     FUNC_3(&VAR_1->io_hdr.nexus));
 if (VAR_4 == ((void*)0)) {
  FUNC_7(&VAR_2->lun_lock);
  FUNC_4(VAR_1, 1,
                  1, 2, 0,
              0);
  FUNC_2((union ctl_io *)VAR_1);
  return (VAR_5);
 }
 VAR_4->abort = 1;
 FUNC_7(&VAR_2->lun_lock);

 FUNC_5(VAR_1);
 FUNC_2((union ctl_io *)VAR_1);
 return (VAR_5);
}
