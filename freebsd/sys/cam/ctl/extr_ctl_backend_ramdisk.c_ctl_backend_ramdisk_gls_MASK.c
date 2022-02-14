
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ kern_data_ptr; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int uint8_t ;
typedef int u_int ;
struct scsi_get_lba_status_data {TYPE_2__* descr; } ;
struct ctl_be_ramdisk_lun {scalar_t__ pblockmul; } ;
struct ctl_be_lun {int pblockexp; struct ctl_be_ramdisk_lun* be_lun; } ;
struct TYPE_6__ {int lba; } ;
struct TYPE_5__ {int status; int length; int addr; } ;


 TYPE_3__* FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (struct ctl_be_ramdisk_lun*,int,int ) ;
 int FUNC_3 (union ctl_io*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_6(union ctl_io *VAR_5)
{
 struct ctl_be_lun *VAR_6 = FUNC_1(VAR_5);
 struct ctl_be_ramdisk_lun *VAR_7 = VAR_6->be_lun;
 struct scsi_get_lba_status_data *VAR_8;
 uint8_t *VAR_9;
 u_int VAR_10;

 VAR_8 = (struct scsi_get_lba_status_data *)VAR_5->scsiio.kern_data_ptr;
 FUNC_4(FUNC_0(VAR_5)->lba, VAR_8->descr[0].addr);
 VAR_10 = FUNC_0(VAR_5)->lba & ~(VAR_4 << VAR_6->pblockexp);
 FUNC_5(VAR_7->pblockmul - VAR_10, VAR_8->descr[0].length);
 VAR_9 = FUNC_2(VAR_7,
     FUNC_0(VAR_5)->lba >> VAR_6->pblockexp, VAR_1);
 if (VAR_9 == VAR_3)
  VAR_8->descr[0].status = 1;
 else if (VAR_9 == VAR_2)
  VAR_8->descr[0].status = 2;
 else
  VAR_8->descr[0].status = 0;
 FUNC_3(VAR_5);
 return (VAR_0);
}
