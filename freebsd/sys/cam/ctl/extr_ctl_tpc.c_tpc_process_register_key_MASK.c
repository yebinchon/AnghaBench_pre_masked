
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
struct tpc_io {scalar_t__ lun; TYPE_3__* io; int cscd; int target; struct tpc_io* buf; struct tpc_list* list; int run; } ;
struct scsi_per_res_out_parms {int dummy; } ;
struct scsi_ec_segment_register_key {int sa_res_key; int res_key; int dst_cscd; } ;
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
 int VAR_12 ;
 struct tpc_io* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct tpc_io*,int ) ;
 int FUNC_3 (int *,struct tpc_io*,int ) ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,struct tpc_io*,int,int ,int,int ,int ,int ,int ) ;
 int FUNC_6 (int ,int,int ,int,int,int ,int,int *,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct tpc_io*,int ) ;
 int VAR_14 ;
 void* FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (size_t,int *) ;
 scalar_t__ FUNC_14 (struct tpc_list*,int ,int *,int *,int *) ;
 int FUNC_15 (struct tpc_list*) ;
 TYPE_3__* FUNC_16 () ;
 int FUNC_17 (TYPE_3__*,scalar_t__) ;

__attribute__((used)) static int
FUNC_18(struct tpc_list *VAR_15)
{
 struct scsi_ec_segment_register_key *VAR_16;
 struct tpc_io *VAR_17;
 uint64_t VAR_18;
 int VAR_19;
 uint16_t VAR_20;
 uint8_t VAR_21[4];

 FUNC_13(VAR_15->curseg, VAR_21);
 if (VAR_15->stage == 1) {
  while ((VAR_17 = FUNC_0(&VAR_15->allio)) != ((void*)0)) {
   FUNC_3(&VAR_15->allio, VAR_17, VAR_14);
   FUNC_4(VAR_17->io);
   FUNC_8(VAR_17->buf, VAR_5);
   FUNC_8(VAR_17, VAR_5);
  }
  if (VAR_15->abort) {
   FUNC_7(VAR_15->ctsio);
   return (VAR_2);
  } else if (VAR_15->error) {
   FUNC_15(VAR_15);
   return (VAR_2);
  } else
   return (VAR_1);
 }

 FUNC_1(&VAR_15->allio);
 VAR_16 = (struct scsi_ec_segment_register_key *)VAR_15->seg[VAR_15->curseg];
 VAR_20 = FUNC_11(VAR_16->dst_cscd);
 VAR_18 = FUNC_14(VAR_15, VAR_20, ((void*)0), ((void*)0), ((void*)0));
 if (VAR_18 == VAR_13) {
  FUNC_6(VAR_15->ctsio, 1,
                    VAR_12,
              0x08, 0x04,
      VAR_9, sizeof(VAR_21), VAR_21,
      VAR_10);
  return (VAR_2);
 }



 VAR_15->tbdio = 1;
 VAR_17 = FUNC_9(sizeof(*VAR_17), VAR_5, VAR_6 | VAR_7);
 FUNC_1(&VAR_17->run);
 VAR_17->list = VAR_15;
 FUNC_2(&VAR_15->allio, VAR_17, VAR_14);
 VAR_17->io = FUNC_16();
 VAR_19 = sizeof(struct scsi_per_res_out_parms);
 VAR_17->buf = FUNC_9(VAR_19, VAR_5, VAR_6);
 FUNC_5(VAR_17->io,
     VAR_17->buf, VAR_19, VAR_8, -1,
     FUNC_12(VAR_16->res_key), FUNC_12(VAR_16->sa_res_key),
                  VAR_4, 0);
 VAR_17->io->io_hdr.retries = 3;
 VAR_17->target = VAR_11;
 VAR_17->cscd = VAR_20;
 VAR_17->lun = VAR_18;
 VAR_17->io->io_hdr.ctl_private[VAR_0].ptr = VAR_17;
 VAR_15->stage++;
 if (FUNC_17(VAR_17->io, VAR_17->lun) != VAR_1)
  FUNC_10("tpcl_queue() error");
 return (VAR_3);
}
