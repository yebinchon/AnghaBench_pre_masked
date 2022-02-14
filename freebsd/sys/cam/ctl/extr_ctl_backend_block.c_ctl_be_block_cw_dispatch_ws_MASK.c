
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int kern_data_ptr; } ;
union ctl_io {TYPE_2__ scsiio; } ;
typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct ctl_lba_len_flags {int flags; int lba; scalar_t__ len; } ;
struct ctl_be_lun {int blocksize; int pblockexp; int pblockoff; } ;
struct ctl_be_block_lun {int (* dispatch ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;int lun_zone; struct ctl_be_lun cbe_lun; int (* unmap ) (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;} ;
struct ctl_be_block_io {int io_offset; int io_len; int beio_cont; TYPE_1__* sg_segs; int num_segs; int ds_trans_type; int bio_cmd; int io; } ;
struct TYPE_6__ {scalar_t__ ptr; } ;
struct TYPE_4__ {int len; int * addr; } ;


 struct ctl_lba_len_flags* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int) ;
 int VAR_6 ;
 TYPE_3__* FUNC_3 (union ctl_io*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (union ctl_io*) ;
 int FUNC_5 (struct ctl_be_block_io*) ;
 int FUNC_6 (TYPE_2__*,int,int,int,int ,int ) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int,int *) ;
 int FUNC_10 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;
 int FUNC_11 (struct ctl_be_block_lun*,struct ctl_be_block_io*) ;
 int * FUNC_12 (int ,int ) ;

__attribute__((used)) static void
FUNC_13(struct ctl_be_block_lun *VAR_12,
       union ctl_io *VAR_13)
{
 struct ctl_be_lun *VAR_14 = &VAR_12->cbe_lun;
 struct ctl_be_block_io *VAR_15;
 struct ctl_lba_len_flags *VAR_16;
 uint64_t VAR_17, VAR_18;
 uint32_t VAR_19, VAR_20, VAR_21;
 int VAR_22, VAR_23;
 uint8_t *VAR_24, *VAR_25;

 FUNC_1("entered\n");

 VAR_15 = (struct ctl_be_block_io *)FUNC_3(VAR_13)->ptr;
 VAR_16 = FUNC_0(VAR_15->io);

 if (VAR_16->flags & ~(VAR_8 | VAR_10 | VAR_7 | VAR_9) ||
     (VAR_16->flags & (VAR_10 | VAR_7) && VAR_12->unmap == ((void*)0))) {
  FUNC_5(VAR_15);
  FUNC_6(&VAR_13->scsiio,
                        1,
                      1,
                    1,
                        0,
                  0);
  FUNC_4(VAR_13);
  return;
 }

 if (VAR_16->flags & (VAR_10 | VAR_7)) {
  VAR_15->io_offset = VAR_16->lba * VAR_14->blocksize;
  VAR_15->io_len = (uint64_t)VAR_16->len * VAR_14->blocksize;
  VAR_15->bio_cmd = VAR_0;
  VAR_15->ds_trans_type = VAR_4;

  VAR_12->unmap(VAR_12, VAR_15);
  return;
 }

 VAR_15->bio_cmd = VAR_1;
 VAR_15->ds_trans_type = VAR_5;

 FUNC_1("WRITE SAME at LBA %jx len %u\n",
        (uintmax_t)VAR_16->lba, VAR_16->len);

 VAR_19 = VAR_14->blocksize << VAR_12->cbe_lun.pblockexp;
 if (VAR_12->cbe_lun.pblockoff > 0)
  VAR_20 = VAR_19 - VAR_14->blocksize * VAR_12->cbe_lun.pblockoff;
 else
  VAR_20 = 0;
 VAR_17 = (uint64_t)VAR_16->len * VAR_14->blocksize;
 for (VAR_22 = 0, VAR_18 = 0; VAR_22 < VAR_3 && VAR_17 > 0; VAR_22++) {




  VAR_23 = FUNC_2(VAR_2, VAR_17);
  if (VAR_19 > VAR_14->blocksize) {
   VAR_21 = ((VAR_16->lba + VAR_18) * VAR_14->blocksize +
       VAR_23 - VAR_20) % VAR_19;
   if (VAR_23 > VAR_21)
    VAR_23 -= VAR_21;
   else
    VAR_23 -= VAR_23 % VAR_14->blocksize;
  } else
   VAR_23 -= VAR_23 % VAR_14->blocksize;
  VAR_15->sg_segs[VAR_22].len = VAR_23;
  VAR_15->sg_segs[VAR_22].addr = FUNC_12(VAR_12->lun_zone, VAR_6);

  FUNC_1("segment %d addr %p len %zd\n", VAR_22,
   VAR_15->sg_segs[VAR_22].addr, VAR_15->sg_segs[VAR_22].len);

  VAR_15->num_segs++;
  VAR_17 -= VAR_23;

  VAR_24 = VAR_15->sg_segs[VAR_22].addr;
  VAR_25 = VAR_24 + VAR_23;
  for (; VAR_24 < VAR_25; VAR_24 += VAR_14->blocksize) {
   if (VAR_16->flags & VAR_9) {
    FUNC_8(VAR_24, 0, VAR_14->blocksize);
   } else {
    FUNC_7(VAR_24, VAR_13->scsiio.kern_data_ptr,
        VAR_14->blocksize);
   }
   if (VAR_16->flags & VAR_8)
    FUNC_9(VAR_16->lba + VAR_18, VAR_24);
   VAR_18++;
  }
 }

 VAR_15->io_offset = VAR_16->lba * VAR_14->blocksize;
 VAR_15->io_len = VAR_18 * VAR_14->blocksize;


 if (VAR_17 > 0) {
  VAR_16->lba += VAR_18;
  VAR_16->len -= VAR_18;
  VAR_15->beio_cont = VAR_11;
 }

 VAR_12->dispatch(VAR_12, VAR_15);
}
