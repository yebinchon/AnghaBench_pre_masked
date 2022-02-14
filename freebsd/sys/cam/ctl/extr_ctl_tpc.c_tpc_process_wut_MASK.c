
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint32_t ;
struct runl {int dummy; } ;
struct tpc_list {scalar_t__ stage; int cursectors; int segsectors; int curbytes; int segbytes; int offset_into_rod; scalar_t__ tbdio; TYPE_6__* lun; struct runl allio; TYPE_1__* token; TYPE_9__* ctsio; TYPE_8__* range; int nrange; int fwd_sense_len; int fwd_sense_data; scalar_t__ fwd_scsi_status; scalar_t__ error; scalar_t__ abort; } ;
struct tpc_io {int lun; TYPE_7__* io; struct runl run; struct tpc_io* buf; struct tpc_list* list; } ;
typedef int off_t ;
struct TYPE_16__ {int status; } ;
struct TYPE_21__ {int sense_len; int sense_data; scalar_t__ scsi_status; TYPE_4__ io_hdr; } ;
struct TYPE_20__ {int length; int lba; } ;
struct TYPE_15__ {int retries; TYPE_2__* ctl_private; } ;
struct TYPE_19__ {TYPE_3__ io_hdr; } ;
struct TYPE_18__ {int lun; TYPE_5__* be_lun; } ;
struct TYPE_17__ {int blocksize; int pblockexp; int pblockoff; } ;
struct TYPE_14__ {struct tpc_io* ptr; } ;
struct TYPE_13__ {int blocksize; int lun; TYPE_8__* range; int nrange; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct tpc_io* FUNC_0 (struct runl*) ;
 int FUNC_1 (struct runl*) ;
 int FUNC_2 (struct runl*,struct tpc_io*,int ) ;
 int FUNC_3 (struct runl*,struct tpc_io*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (TYPE_7__*,struct tpc_io*,int,int,int ,int ,int,int,int ,int ) ;
 int FUNC_6 (TYPE_9__*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (TYPE_9__*) ;
 int FUNC_8 (struct tpc_io*,int ) ;
 int VAR_12 ;
 void* FUNC_9 (int,int ,int) ;
 int FUNC_10 (int,int) ;
 int FUNC_11 (char*) ;
 int VAR_13 ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (TYPE_8__*,int ,int,int*,int*) ;
 void* FUNC_15 () ;
 int FUNC_16 (TYPE_7__*,int ) ;

__attribute__((used)) static int
FUNC_17(struct tpc_list *VAR_14)
{
 struct tpc_io *VAR_15, *VAR_16, *VAR_17;
 struct runl VAR_18;
 int VAR_19, VAR_20;
 off_t VAR_21, VAR_22;
 off_t VAR_23, VAR_24, VAR_25, VAR_26, VAR_27;
 uint32_t VAR_28, VAR_29, VAR_30, VAR_31, VAR_32;

 if (VAR_14->stage > 0) {

  while ((VAR_15 = FUNC_0(&VAR_14->allio)) != ((void*)0)) {
   FUNC_3(&VAR_14->allio, VAR_15, VAR_12);
   FUNC_4(VAR_15->io);
   FUNC_8(VAR_15->buf, VAR_7);
   FUNC_8(VAR_15, VAR_7);
  }
  if (VAR_14->abort) {
   FUNC_7(VAR_14->ctsio);
   return (VAR_3);
  } else if (VAR_14->error) {
   if (VAR_14->fwd_scsi_status) {
    VAR_14->ctsio->io_hdr.status =
        VAR_5 | VAR_0;
    VAR_14->ctsio->scsi_status = VAR_14->fwd_scsi_status;
    VAR_14->ctsio->sense_data = VAR_14->fwd_sense_data;
    VAR_14->ctsio->sense_len = VAR_14->fwd_sense_len;
   } else {
    FUNC_6(VAR_14->ctsio,
                      0, 0,
                  0, 0, 0);
   }
   return (VAR_3);
  }
  VAR_14->cursectors += VAR_14->segsectors;
  VAR_14->curbytes += VAR_14->segbytes;
 }


 if (FUNC_14(VAR_14->range, VAR_14->nrange, VAR_14->cursectors,
     &VAR_19, &VAR_21) != 0)
  return (VAR_2);
 VAR_29 = VAR_14->lun->be_lun->blocksize;
 VAR_30 = VAR_29 << VAR_14->lun->be_lun->pblockexp;
 if (VAR_14->lun->be_lun->pblockoff > 0)
  VAR_31 = VAR_30 - VAR_29 * VAR_14->lun->be_lun->pblockoff;
 else
  VAR_31 = 0;


 VAR_28 = VAR_14->token->blocksize;
 if (FUNC_14(VAR_14->token->range, VAR_14->token->nrange,
     VAR_14->offset_into_rod + VAR_14->cursectors * VAR_29 / VAR_28,
     &VAR_20, &VAR_22) != 0) {
  FUNC_6(VAR_14->ctsio, 0,
                  0, 0, 0, 0);
  return (VAR_3);
 }

 VAR_23 = FUNC_13(VAR_14->token->range[VAR_20].lba) + VAR_22;
 VAR_24 = FUNC_13(VAR_14->range[VAR_19].lba) + VAR_21;
 VAR_25 = VAR_28 *
     (FUNC_12(VAR_14->token->range[VAR_20].length) - VAR_22);
 VAR_25 = FUNC_10(VAR_25, VAR_29 *
     (FUNC_12(VAR_14->range[VAR_19].length) - VAR_21));
 if (VAR_25 > VAR_10) {
  VAR_25 = VAR_10;
  VAR_25 -= VAR_25 % VAR_29;
  if (VAR_30 > VAR_29) {
   VAR_32 = (VAR_24 * VAR_29 + VAR_25 - VAR_31) % VAR_30;
   if (VAR_25 > VAR_32)
    VAR_25 -= VAR_32;
  }
 }

 if (VAR_25 % VAR_28 != 0 || VAR_25 % VAR_29 != 0) {
  FUNC_6(VAR_14->ctsio, 0,
                  0, 0, 0, 0);
  return (VAR_3);
 }

 VAR_14->segbytes = VAR_25;
 VAR_14->segsectors = VAR_25 / VAR_29;


 VAR_26 = 0;
 FUNC_1(&VAR_18);
 VAR_14->tbdio = 0;
 FUNC_1(&VAR_14->allio);
 while (VAR_26 < VAR_25) {
  VAR_27 = VAR_25 - VAR_26;
  if (VAR_27 > VAR_11) {
   VAR_27 = VAR_11;
   VAR_27 -= VAR_27 % VAR_29;
   if (VAR_30 > VAR_29) {
    VAR_32 = (VAR_24 * VAR_29 + VAR_27 - VAR_31) % VAR_30;
    if (VAR_27 > VAR_32)
     VAR_27 -= VAR_32;
   }
  }

  VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_7, VAR_8 | VAR_9);
  FUNC_1(&VAR_16->run);
  VAR_16->buf = FUNC_9(VAR_27, VAR_7, VAR_8);
  VAR_16->list = VAR_14;
  FUNC_2(&VAR_14->allio, VAR_16, VAR_12);
  VAR_16->io = FUNC_15();
  FUNC_5(VAR_16->io,
                     VAR_16->buf,
                     VAR_27,
                    1,
                  0,
                             0,
                VAR_23,
                       VAR_27 / VAR_28,
                     VAR_6,
                    0);
  VAR_16->io->io_hdr.retries = 3;
  VAR_16->lun = VAR_14->token->lun;
  VAR_16->io->io_hdr.ctl_private[VAR_1].ptr = VAR_16;

  VAR_17 = FUNC_9(sizeof(*VAR_17), VAR_7, VAR_8 | VAR_9);
  FUNC_1(&VAR_17->run);
  VAR_17->list = VAR_14;
  FUNC_2(&VAR_14->allio, VAR_17, VAR_12);
  VAR_17->io = FUNC_15();
  FUNC_5(VAR_17->io,
                     VAR_16->buf,
                     VAR_27,
                    0,
                  0,
                             0,
                VAR_24,
                       VAR_27 / VAR_29,
                     VAR_6,
                    0);
  VAR_17->io->io_hdr.retries = 3;
  VAR_17->lun = VAR_14->lun->lun;
  VAR_17->io->io_hdr.ctl_private[VAR_1].ptr = VAR_17;

  FUNC_2(&VAR_16->run, VAR_17, VAR_13);
  FUNC_2(&VAR_18, VAR_16, VAR_13);
  VAR_14->tbdio++;
  VAR_26 += VAR_27;
  VAR_23 += VAR_27 / VAR_28;
  VAR_24 += VAR_27 / VAR_29;
 }

 while ((VAR_16 = FUNC_0(&VAR_18)) != ((void*)0)) {
  FUNC_3(&VAR_18, VAR_16, VAR_13);
  if (FUNC_16(VAR_16->io, VAR_16->lun) != VAR_2)
   FUNC_11("tpcl_queue() error");
 }

 VAR_14->stage++;
 return (VAR_4);
}
