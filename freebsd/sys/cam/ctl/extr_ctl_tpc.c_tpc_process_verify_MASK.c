
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
struct tpc_list {size_t curseg; int stage; int tbdio; int allio; int ctsio; scalar_t__* seg; scalar_t__ error; scalar_t__ abort; } ;
struct tpc_io {scalar_t__ lun; TYPE_3__* io; int cscd; int target; struct tpc_list* list; int run; } ;
struct scsi_ec_segment_verify {int tur; int src_cscd; } ;
typedef int csi ;
struct TYPE_8__ {int retries; TYPE_1__* ctl_private; } ;
struct TYPE_9__ {TYPE_2__ io_hdr; } ;
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
 struct tpc_io* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tpc_io*,int ) ;
 int FUNC_3 (int *,struct tpc_io*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,int ) ;
 int FUNC_6 (int ,int,int ,int,int,int ,int,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tpc_io*,int ) ;
 int VAR_13 ;
 struct tpc_io* FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (size_t,int *) ;
 scalar_t__ FUNC_13 (struct tpc_list*,int ,int *,int *,int *) ;
 int FUNC_14 (struct tpc_list*) ;
 TYPE_3__* FUNC_15 () ;
 int FUNC_16 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_17(struct tpc_list *VAR_14)
{
 struct scsi_ec_segment_verify *VAR_15;
 struct tpc_io *VAR_16;
 uint64_t VAR_17;
 uint16_t VAR_18;
 uint8_t VAR_19[4];

 FUNC_12(VAR_14->curseg, VAR_19);
 if (VAR_14->stage == 1) {
  while ((VAR_16 = FUNC_0(&VAR_14->allio)) != ((void*)0)) {
   FUNC_3(&VAR_14->allio, VAR_16, VAR_13);
   FUNC_4(VAR_16->io);
   FUNC_8(VAR_16, VAR_5);
  }
  if (VAR_14->abort) {
   FUNC_7(VAR_14->ctsio);
   return (VAR_2);
  } else if (VAR_14->error) {
   FUNC_14(VAR_14);
   return (VAR_2);
  } else
   return (VAR_1);
 }

 FUNC_1(&VAR_14->allio);
 VAR_15 = (struct scsi_ec_segment_verify *)VAR_14->seg[VAR_14->curseg];
 VAR_18 = FUNC_11(VAR_15->src_cscd);
 VAR_17 = FUNC_13(VAR_14, VAR_18, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_17 == VAR_12) {
  FUNC_6(VAR_14->ctsio, 1,
                    VAR_11,
              0x08, 0x04,
      VAR_8, sizeof(VAR_19), VAR_19,
      VAR_9);
  return (VAR_2);
 }



 if ((VAR_15->tur & 0x01) == 0)
  return (VAR_1);

 VAR_14->tbdio = 1;
 VAR_16 = FUNC_9(sizeof(*VAR_16), VAR_5, VAR_6 | VAR_7);
 FUNC_1(&VAR_16->run);
 VAR_16->list = VAR_14;
 FUNC_2(&VAR_14->allio, VAR_16, VAR_13);
 VAR_16->io = FUNC_15();
 FUNC_5(VAR_16->io, VAR_4, 0);
 VAR_16->io->io_hdr.retries = 3;
 VAR_16->target = VAR_10;
 VAR_16->cscd = VAR_18;
 VAR_16->lun = VAR_17;
 VAR_16->io->io_hdr.ctl_private[VAR_0].ptr = VAR_16;
 VAR_14->stage++;
 if (FUNC_16(VAR_16->io, VAR_16->lun) != VAR_1)
  FUNC_10("tpcl_queue() error");
 return (VAR_3);
}
