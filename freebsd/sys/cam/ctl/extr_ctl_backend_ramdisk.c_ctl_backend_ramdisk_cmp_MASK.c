
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kern_data_len; int kern_data_ptr; int kern_rel_offset; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int u_int ;
struct ctl_be_ramdisk_lun {int dummy; } ;
struct ctl_be_lun {int blocksize; int pblockexp; struct ctl_be_ramdisk_lun* be_lun; } ;
typedef int info ;
struct TYPE_6__ {int lba; } ;
struct TYPE_5__ {int len; } ;


 TYPE_3__* FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_2 (union ctl_io*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int,int *,int) ;
 int * FUNC_4 (struct ctl_be_ramdisk_lun*,int,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ,int,int,int ,int,int **,int ) ;
 int FUNC_6 (int,int *) ;

__attribute__((used)) static int
FUNC_7(union ctl_io *VAR_5)
{
 struct ctl_be_lun *VAR_6 = FUNC_1(VAR_5);
 struct ctl_be_ramdisk_lun *VAR_7 = VAR_6->be_lun;
 uint8_t *VAR_8;
 uint8_t VAR_9[8];
 uint64_t VAR_10;
 u_int VAR_11, VAR_12, VAR_13, VAR_14;

 VAR_12 = VAR_5->scsiio.kern_data_len / VAR_6->blocksize;
 VAR_10 = FUNC_0(VAR_5)->lba + FUNC_2(VAR_5)->len - VAR_12;
 VAR_14 = 0;
 for (; VAR_12 > 0; VAR_12--, VAR_10++) {
  VAR_8 = FUNC_4(VAR_7,
      VAR_10 >> VAR_6->pblockexp, VAR_0);
  VAR_11 = VAR_10 & ~(VAR_4 << VAR_6->pblockexp);
  VAR_8 += VAR_11 * VAR_6->blocksize;
  VAR_13 = FUNC_3(VAR_5->scsiio.kern_data_ptr + VAR_14, VAR_8,
      VAR_6->blocksize);
  VAR_14 += VAR_13;
  if (VAR_13 < VAR_6->blocksize)
   break;
 }
 if (VAR_12 > 0) {
  VAR_14 += VAR_5->scsiio.kern_rel_offset - VAR_5->scsiio.kern_data_len;
  FUNC_6(VAR_14, VAR_9);
  FUNC_5(&VAR_5->scsiio, 1,
                    VAR_3,
              0x1D, 0x00,
               VAR_1,
               sizeof(VAR_9), &VAR_9,
               VAR_2);
  return (1);
 }
 return (0);
}
