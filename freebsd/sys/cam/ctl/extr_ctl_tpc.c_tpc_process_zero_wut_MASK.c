
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct runl {int dummy; } ;
struct tpc_list {scalar_t__ stage; scalar_t__ cursectors; scalar_t__ segsectors; int tbdio; int nrange; scalar_t__ segbytes; TYPE_4__* lun; TYPE_3__* range; struct runl allio; scalar_t__ curbytes; TYPE_9__* ctsio; int fwd_sense_len; int fwd_sense_data; scalar_t__ fwd_scsi_status; scalar_t__ error; scalar_t__ abort; } ;
struct tpc_io {int lun; TYPE_7__* io; struct runl run; struct tpc_list* list; } ;
struct TYPE_13__ {int status; } ;
struct TYPE_20__ {int sense_len; int sense_data; scalar_t__ scsi_status; TYPE_1__ io_hdr; } ;
struct TYPE_18__ {int retries; TYPE_5__* ctl_private; } ;
struct TYPE_19__ {TYPE_6__ io_hdr; } ;
struct TYPE_17__ {struct tpc_io* ptr; } ;
struct TYPE_16__ {int lun; TYPE_2__* be_lun; } ;
struct TYPE_15__ {int lba; int length; } ;
struct TYPE_14__ {scalar_t__ blocksize; } ;


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
 int VAR_10 ;
 scalar_t__ FUNC_0 (struct runl*) ;
 struct tpc_io* FUNC_1 (struct runl*) ;
 int FUNC_2 (struct runl*) ;
 int FUNC_3 (struct runl*,struct tpc_io*,int ) ;
 int FUNC_4 (struct runl*,struct tpc_io*,int ) ;
 int FUNC_5 (TYPE_7__*) ;
 int FUNC_6 (TYPE_7__*,int *,int ,int ,int ,scalar_t__,int ,int ) ;
 int FUNC_7 (TYPE_9__*,int ,int ,int ,int ,int ) ;
 int FUNC_8 (TYPE_9__*) ;
 int FUNC_9 (struct tpc_io*,int ) ;
 int VAR_11 ;
 struct tpc_io* FUNC_10 (int,int ,int) ;
 int FUNC_11 (char*) ;
 int VAR_12 ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 TYPE_7__* FUNC_14 () ;
 int FUNC_15 (TYPE_7__*,int ) ;

__attribute__((used)) static int
FUNC_16(struct tpc_list *VAR_13)
{
 struct tpc_io *VAR_14, *VAR_15;
 struct runl VAR_16, *VAR_17;
 int VAR_18;
 uint32_t VAR_19, VAR_20;

 if (VAR_13->stage > 0) {
complete:

  while ((VAR_14 = FUNC_1(&VAR_13->allio)) != ((void*)0)) {
   FUNC_4(&VAR_13->allio, VAR_14, VAR_11);
   FUNC_5(VAR_14->io);
   FUNC_9(VAR_14, VAR_7);
  }
  if (VAR_13->abort) {
   FUNC_8(VAR_13->ctsio);
   return (VAR_3);
  } else if (VAR_13->error) {
   if (VAR_13->fwd_scsi_status) {
    VAR_13->ctsio->io_hdr.status =
        VAR_5 | VAR_0;
    VAR_13->ctsio->scsi_status = VAR_13->fwd_scsi_status;
    VAR_13->ctsio->sense_data = VAR_13->fwd_sense_data;
    VAR_13->ctsio->sense_len = VAR_13->fwd_sense_len;
   } else {
    FUNC_7(VAR_13->ctsio,
                      0, 0,
                  0, 0, 0);
   }
   return (VAR_3);
  }
  VAR_13->cursectors += VAR_13->segsectors;
  VAR_13->curbytes += VAR_13->segbytes;
  return (VAR_2);
 }

 VAR_19 = VAR_13->lun->be_lun->blocksize;
 FUNC_2(&VAR_16);
 VAR_17 = &VAR_16;
 VAR_13->tbdio = 1;
 FUNC_2(&VAR_13->allio);
 VAR_13->segsectors = 0;
 for (VAR_18 = 0; VAR_18 < VAR_13->nrange; VAR_18++) {
  VAR_20 = FUNC_12(VAR_13->range[VAR_18].length);
  if (VAR_20 == 0)
   continue;

  VAR_15 = FUNC_10(sizeof(*VAR_15), VAR_7, VAR_8 | VAR_9);
  FUNC_2(&VAR_15->run);
  VAR_15->list = VAR_13;
  FUNC_3(&VAR_13->allio, VAR_15, VAR_11);
  VAR_15->io = FUNC_14();
  FUNC_6(VAR_15->io,
                     ((void*)0),
                     0,
                  VAR_10,
                FUNC_13(VAR_13->range[VAR_18].lba),
                       VAR_20,
                     VAR_6,
                    0);
  VAR_15->io->io_hdr.retries = 3;
  VAR_15->lun = VAR_13->lun->lun;
  VAR_15->io->io_hdr.ctl_private[VAR_1].ptr = VAR_15;

  FUNC_3(VAR_17, VAR_15, VAR_12);
  VAR_17 = &VAR_15->run;
  VAR_13->segsectors += VAR_20;
 }
 VAR_13->segbytes = VAR_13->segsectors * VAR_19;

 if (FUNC_0(&VAR_16))
  goto complete;

 while ((VAR_15 = FUNC_1(&VAR_16)) != ((void*)0)) {
  FUNC_4(&VAR_16, VAR_15, VAR_12);
  if (FUNC_15(VAR_15->io, VAR_15->lun) != VAR_2)
   FUNC_11("tpcl_queue() error");
 }

 VAR_13->stage++;
 return (VAR_4);
}
