
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct runl {int dummy; } ;
struct tpc_list {size_t curseg; int stage; int cursectors; int segsectors; int curbytes; int segbytes; scalar_t__ tbdio; struct runl allio; int ctsio; TYPE_3__* cscd; scalar_t__* seg; scalar_t__ error; scalar_t__ abort; } ;
struct tpc_io {size_t cscd; scalar_t__ lun; TYPE_4__* io; struct runl run; int target; struct tpc_io* buf; struct tpc_list* list; } ;
struct scsi_ec_segment_b2b {int flags; int dst_lba; int src_lba; int number_of_blocks; int dst_cscd; int src_cscd; } ;
struct scsi_ec_cscd_dtsp {int block_length; } ;
typedef int off_t ;
typedef int csi ;
struct TYPE_8__ {int retries; TYPE_1__* ctl_private; } ;
struct TYPE_10__ {TYPE_2__ io_hdr; } ;
struct TYPE_9__ {struct scsi_ec_cscd_dtsp dtsp; } ;
struct TYPE_7__ {struct tpc_io* ptr; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct tpc_io* FUNC_0 (struct runl*) ;
 int FUNC_1 (struct runl*) ;
 int FUNC_2 (struct runl*,struct tpc_io*,int ) ;
 int FUNC_3 (struct runl*,struct tpc_io*,int ) ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_4__*,struct tpc_io*,int,int,int ,int ,int,int,int ,int ) ;
 int FUNC_6 (int ,int,int ,int,int,int ,int,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tpc_io*,int ) ;
 int VAR_16 ;
 void* FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*) ;
 int VAR_17 ;
 void* FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (size_t,int *) ;
 scalar_t__ FUNC_15 (struct tpc_list*,size_t,int*,int*,int*) ;
 int FUNC_16 (struct tpc_list*) ;
 void* FUNC_17 () ;
 int FUNC_18 (TYPE_4__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_19(struct tpc_list *VAR_18)
{
 struct scsi_ec_segment_b2b *VAR_19;
 struct scsi_ec_cscd_dtsp *VAR_20, *VAR_21;
 struct tpc_io *VAR_22, *VAR_23;
 struct runl VAR_24;
 uint64_t VAR_25, VAR_26;
 off_t VAR_27, VAR_28, VAR_29, VAR_30, VAR_31;
 int VAR_32;
 uint32_t VAR_33, VAR_34, VAR_35, VAR_36, VAR_37;
 uint16_t VAR_38, VAR_39;
 uint8_t VAR_40[4];

 FUNC_14(VAR_18->curseg, VAR_40);
 if (VAR_18->stage == 1) {
  while ((VAR_22 = FUNC_0(&VAR_18->allio)) != ((void*)0)) {
   FUNC_3(&VAR_18->allio, VAR_22, VAR_16);
   FUNC_4(VAR_22->io);
   FUNC_8(VAR_22->buf, VAR_6);
   FUNC_8(VAR_22, VAR_6);
  }
  if (VAR_18->abort) {
   FUNC_7(VAR_18->ctsio);
   return (VAR_2);
  } else if (VAR_18->error) {
   FUNC_16(VAR_18);
   return (VAR_2);
  }
  VAR_18->cursectors += VAR_18->segsectors;
  VAR_18->curbytes += VAR_18->segbytes;
  return (VAR_1);
 }

 FUNC_1(&VAR_18->allio);
 VAR_19 = (struct scsi_ec_segment_b2b *)VAR_18->seg[VAR_18->curseg];
 VAR_38 = FUNC_11(VAR_19->src_cscd);
 VAR_39 = FUNC_11(VAR_19->dst_cscd);
 VAR_25 = FUNC_15(VAR_18, VAR_38, &VAR_33, ((void*)0), ((void*)0));
 VAR_26 = FUNC_15(VAR_18, VAR_39, &VAR_34, &VAR_35, &VAR_36);
 if (VAR_25 == VAR_15 || VAR_26 == VAR_15) {
  FUNC_6(VAR_18->ctsio, 1,
                    VAR_13,
              0x08, 0x04,
      VAR_9, sizeof(VAR_40), VAR_40,
      VAR_10);
  return (VAR_2);
 }
 if (VAR_36 > 0)
  VAR_36 = VAR_35 - VAR_36;
 VAR_20 = &VAR_18->cscd[VAR_38].dtsp;
 if (FUNC_12(VAR_20->block_length) != 0)
  VAR_33 = FUNC_12(VAR_20->block_length);
 VAR_21 = &VAR_18->cscd[VAR_39].dtsp;
 if (FUNC_12(VAR_21->block_length) != 0)
  VAR_34 = FUNC_12(VAR_21->block_length);
 VAR_32 = FUNC_11(VAR_19->number_of_blocks);
 if (VAR_19->flags & VAR_5)
  VAR_29 = (off_t)VAR_32 * VAR_34;
 else
  VAR_29 = (off_t)VAR_32 * VAR_33;
 VAR_27 = FUNC_13(VAR_19->src_lba);
 VAR_28 = FUNC_13(VAR_19->dst_lba);





 if (VAR_29 == 0)
  return (VAR_1);

 if (VAR_29 % VAR_33 != 0 || VAR_29 % VAR_34 != 0) {
  FUNC_6(VAR_18->ctsio, 1,
                    VAR_13,
              0x26, 0x0A,
      VAR_9, sizeof(VAR_40), VAR_40,
      VAR_10);
  return (VAR_2);
 }

 VAR_18->segbytes = VAR_29;
 VAR_18->segsectors = VAR_29 / VAR_34;
 VAR_30 = 0;
 FUNC_1(&VAR_24);
 VAR_18->tbdio = 0;
 while (VAR_30 < VAR_29) {
  VAR_31 = VAR_29 - VAR_30;
  if (VAR_31 > VAR_14) {
   VAR_31 = VAR_14;
   VAR_31 -= VAR_31 % VAR_34;
   if (VAR_35 > VAR_34) {
    VAR_37 = (VAR_28 * VAR_34 + VAR_31 - VAR_36) % VAR_35;
    if (VAR_31 > VAR_37)
     VAR_31 -= VAR_37;
   }
  }

  VAR_22 = FUNC_9(sizeof(*VAR_22), VAR_6, VAR_7 | VAR_8);
  FUNC_1(&VAR_22->run);
  VAR_22->buf = FUNC_9(VAR_31, VAR_6, VAR_7);
  VAR_22->list = VAR_18;
  FUNC_2(&VAR_18->allio, VAR_22, VAR_16);
  VAR_22->io = FUNC_17();
  FUNC_5(VAR_22->io,
                     VAR_22->buf,
                     VAR_31,
                    1,
                  0,
                             0,
                VAR_27,
                       VAR_31 / VAR_33,
                     VAR_4,
                    0);
  VAR_22->io->io_hdr.retries = 3;
  VAR_22->target = VAR_12;
  VAR_22->cscd = VAR_38;
  VAR_22->lun = VAR_25;
  VAR_22->io->io_hdr.ctl_private[VAR_0].ptr = VAR_22;

  VAR_23 = FUNC_9(sizeof(*VAR_22), VAR_6, VAR_7 | VAR_8);
  FUNC_1(&VAR_23->run);
  VAR_23->list = VAR_18;
  FUNC_2(&VAR_18->allio, VAR_23, VAR_16);
  VAR_23->io = FUNC_17();
  FUNC_5(VAR_23->io,
                     VAR_22->buf,
                     VAR_31,
                    0,
                  0,
                             0,
                VAR_28,
                       VAR_31 / VAR_34,
                     VAR_4,
                    0);
  VAR_23->io->io_hdr.retries = 3;
  VAR_23->target = VAR_11;
  VAR_23->cscd = VAR_39;
  VAR_23->lun = VAR_26;
  VAR_23->io->io_hdr.ctl_private[VAR_0].ptr = VAR_23;

  FUNC_2(&VAR_22->run, VAR_23, VAR_17);
  FUNC_2(&VAR_24, VAR_22, VAR_17);
  VAR_18->tbdio++;
  VAR_30 += VAR_31;
  VAR_27 += VAR_31 / VAR_33;
  VAR_28 += VAR_31 / VAR_34;
 }

 while ((VAR_22 = FUNC_0(&VAR_24)) != ((void*)0)) {
  FUNC_3(&VAR_24, VAR_22, VAR_17);
  if (FUNC_18(VAR_22->io, VAR_22->lun) != VAR_1)
   FUNC_10("tpcl_queue() error");
 }

 VAR_18->stage++;
 return (VAR_3);
}
