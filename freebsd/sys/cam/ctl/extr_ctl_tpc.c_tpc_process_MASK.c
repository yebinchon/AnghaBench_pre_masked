
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ctl_io {int dummy; } ctl_io ;
typedef int uint8_t ;
struct tpc_list {scalar_t__ service_action; int error; size_t curseg; size_t nseg; int flags; int completed; int scsi_status; int sense_len; int sense_data; void* last_active; TYPE_1__* token; struct tpc_list* params; scalar_t__ stage; struct scsi_ec_segment** seg; struct ctl_scsiio* ctsio; struct ctl_lun* lun; } ;
struct scsi_ec_segment {int type_code; } ;
struct ctl_softc {int tpc_lock; } ;
struct ctl_scsiio {int scsi_status; int sense_len; int sense_data; } ;
struct ctl_lun {int lun_lock; int tpc_lists; struct ctl_softc* ctl_softc; } ;
typedef int csi ;
struct TYPE_2__ {scalar_t__ active; void* last_active; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,struct tpc_list*,int ) ;
 int FUNC_1 (union ctl_io*) ;
 int FUNC_2 (struct ctl_scsiio*,int,int ,int,int,int ,int,int *,int ) ;
 int FUNC_3 (struct ctl_scsiio*) ;
 int FUNC_4 (struct tpc_list*,int ) ;
 int VAR_10 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (size_t,int *) ;
 void* VAR_11 ;
 int FUNC_8 (struct tpc_list*) ;
 int FUNC_9 (struct tpc_list*) ;
 int FUNC_10 (struct tpc_list*) ;
 int FUNC_11 (struct tpc_list*) ;
 int FUNC_12 (struct tpc_list*) ;

__attribute__((used)) static void
FUNC_13(struct tpc_list *VAR_12)
{
 struct ctl_lun *VAR_13 = VAR_12->lun;
 struct ctl_softc *VAR_14 = VAR_13->ctl_softc;
 struct scsi_ec_segment *VAR_15;
 struct ctl_scsiio *VAR_16 = VAR_12->ctsio;
 int VAR_17 = VAR_0;
 uint8_t VAR_18[4];

 if (VAR_12->service_action == VAR_5) {
  if (VAR_12->token != ((void*)0))
   VAR_17 = FUNC_11(VAR_12);
  else
   VAR_17 = FUNC_12(VAR_12);
  if (VAR_17 == VAR_2)
   return;
  if (VAR_17 == VAR_1) {
   VAR_12->error = 1;
   goto done;
  }
 } else {

  while (VAR_12->curseg < VAR_12->nseg) {
   VAR_15 = VAR_12->seg[VAR_12->curseg];
   switch (VAR_15->type_code) {
   case 130:
    VAR_17 = FUNC_8(VAR_12);
    break;
   case 128:
    VAR_17 = FUNC_10(VAR_12);
    break;
   case 129:
    VAR_17 = FUNC_9(VAR_12);
    break;
   default:
    FUNC_7(VAR_12->curseg, VAR_18);
    FUNC_2(VAR_16, 1,
                      VAR_9,
                0x26, 0x09,
        VAR_7, sizeof(VAR_18), VAR_18,
        VAR_8);
    goto done;
   }
   if (VAR_17 == VAR_2)
    return;
   if (VAR_17 == VAR_1) {
    VAR_12->error = 1;
    goto done;
   }
   VAR_12->curseg++;
   VAR_12->stage = 0;
  }
 }

 FUNC_3(VAR_16);

done:

 FUNC_4(VAR_12->params, VAR_6);
 VAR_12->params = ((void*)0);
 if (VAR_12->token) {
  FUNC_5(&VAR_14->tpc_lock);
  if (--VAR_12->token->active == 0)
   VAR_12->token->last_active = VAR_11;
  FUNC_6(&VAR_14->tpc_lock);
  VAR_12->token = ((void*)0);
 }
 FUNC_5(&VAR_13->lun_lock);
 if ((VAR_12->flags & VAR_3) == VAR_4) {
  FUNC_0(&VAR_13->tpc_lists, VAR_12, VAR_10);
  FUNC_4(VAR_12, VAR_6);
 } else {
  VAR_12->completed = 1;
  VAR_12->last_active = VAR_11;
  VAR_12->sense_data = VAR_16->sense_data;
  VAR_12->sense_len = VAR_16->sense_len;
  VAR_12->scsi_status = VAR_16->scsi_status;
 }
 FUNC_6(&VAR_13->lun_lock);

 FUNC_1((union ctl_io *)VAR_16);
}
