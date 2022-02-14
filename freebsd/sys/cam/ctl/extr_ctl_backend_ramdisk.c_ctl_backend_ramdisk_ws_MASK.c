
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kern_data_ptr; } ;
union ctl_io {TYPE_1__ scsiio; } ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ u_int ;
struct ctl_lba_len_flags {int flags; scalar_t__ lba; scalar_t__ len; } ;
struct ctl_be_ramdisk_lun {int dummy; } ;
struct ctl_be_lun {scalar_t__ pblockexp; scalar_t__ blocksize; struct ctl_be_ramdisk_lun* be_lun; } ;


 struct ctl_lba_len_flags* FUNC_0 (union ctl_io*) ;
 struct ctl_be_lun* FUNC_1 (union ctl_io*) ;
 int VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct ctl_be_lun*,scalar_t__,scalar_t__,int) ;
 int * FUNC_3 (struct ctl_be_ramdisk_lun*,scalar_t__,int ) ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (union ctl_io*) ;
 int FUNC_6 (TYPE_1__*,int,int,int,int ,int ) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int *,int ,scalar_t__) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (scalar_t__,int *) ;

__attribute__((used)) static void
FUNC_12(union ctl_io *VAR_8)
{
 struct ctl_be_lun *VAR_9 = FUNC_1(VAR_8);
 struct ctl_be_ramdisk_lun *VAR_10 = VAR_9->be_lun;
 struct ctl_lba_len_flags *VAR_11 = FUNC_0(VAR_8);
 uint8_t *VAR_12;
 uint64_t VAR_13;
 u_int VAR_14, VAR_15;

 if (VAR_11->flags & ~(VAR_4 | VAR_6 | VAR_3 | VAR_5)) {
  FUNC_6(&VAR_8->scsiio,
                        1,
                      1,
                    1,
                        0,
                  0);
  FUNC_4(VAR_8);
  return;
 }
 if (VAR_11->flags & VAR_6) {
  FUNC_2(VAR_9, VAR_11->lba, VAR_11->len,
      (VAR_11->flags & VAR_3) != 0);
  FUNC_8(&VAR_8->scsiio);
  FUNC_4(VAR_8);
  return;
 }

 for (VAR_13 = VAR_11->lba, VAR_15 = VAR_11->len; VAR_15 > 0; VAR_13++, VAR_15--) {
  VAR_12 = FUNC_3(VAR_10,
      VAR_13 >> VAR_9->pblockexp, VAR_0);
  if (VAR_12 == VAR_2 || VAR_12 == VAR_1) {
   FUNC_7(&VAR_8->scsiio);
   FUNC_5(VAR_8);
   return;
  }
  VAR_14 = VAR_13 & ~(VAR_7 << VAR_9->pblockexp);
  VAR_12 += VAR_14 * VAR_9->blocksize;
  if (VAR_11->flags & VAR_5) {
   FUNC_10(VAR_12, 0, VAR_9->blocksize);
  } else {
   FUNC_9(VAR_12, VAR_8->scsiio.kern_data_ptr,
       VAR_9->blocksize);
  }
  if (VAR_11->flags & VAR_4)
   FUNC_11(VAR_13, VAR_12);
 }
 FUNC_8(&VAR_8->scsiio);
 FUNC_4(VAR_8);
}
