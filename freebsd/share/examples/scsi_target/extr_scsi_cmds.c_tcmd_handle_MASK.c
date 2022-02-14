
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
struct targ_cdb_handlers {scalar_t__ cmd; int (* start ) (struct ccb_accept_tio*,struct ccb_scsiio*) ;int (* done ) (struct ccb_accept_tio*,struct ccb_scsiio*,int ) ;} ;
struct initiator_state {scalar_t__ pending_ca; scalar_t__ pending_ua; scalar_t__ orig_ua; scalar_t__ orig_ca; } ;
struct ccb_scsiio {scalar_t__ dxfer_len; int init_id; } ;
struct TYPE_2__ {scalar_t__ targ_descr; int flags; } ;
struct ccb_accept_tio {int init_id; TYPE_1__ ccb_h; } ;
struct atio_descr {scalar_t__* cdb; int init_req; } ;
typedef int io_ops ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 () ;
 int FUNC_1 (scalar_t__*,char*,int ) ;
 struct targ_cdb_handlers* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_2 (union ccb*) ;
 int FUNC_3 (union ccb*,int) ;
 int FUNC_4 (struct ccb_accept_tio*,struct ccb_scsiio*,int ) ;
 int FUNC_5 (struct ccb_accept_tio*,struct ccb_scsiio*) ;
 struct initiator_state* FUNC_6 (int ) ;
 int FUNC_7 (struct ccb_accept_tio*,struct ccb_scsiio*) ;
 int FUNC_8 (struct ccb_accept_tio*,struct ccb_scsiio*) ;
 int FUNC_9 (int ,struct ccb_scsiio*,int ,int,int) ;
 int FUNC_10 (char*,scalar_t__,...) ;

int
FUNC_11(struct ccb_accept_tio *VAR_10, struct ccb_scsiio *VAR_11, io_ops VAR_12)
{
 static struct targ_cdb_handlers *VAR_13;
 struct initiator_state *VAR_14;
 struct atio_descr *VAR_15;
 int VAR_16;

 if (VAR_9) {
  FUNC_10("tcmd_handle atio %p ctio %p atioflags %#x", VAR_10, VAR_11,
        VAR_10->ccb_h.flags);
 }
 VAR_16 = 0;
 VAR_15 = (struct atio_descr *)VAR_10->ccb_h.targ_descr;


 if (VAR_13 == ((void*)0) || VAR_13->cmd != VAR_15->cdb[0]) {
  struct targ_cdb_handlers *VAR_17;

  for (VAR_17 = VAR_8; VAR_17->cmd != VAR_3; VAR_17++) {
   if (VAR_15->cdb[0] == VAR_17->cmd)
    break;
  }
  VAR_13 = VAR_17;
 }


 if (VAR_12 != VAR_0) {
  if (VAR_13->done != ((void*)0))
   VAR_13->done(VAR_10, VAR_11, VAR_12);
  else
   FUNC_2((union ccb *)VAR_11);
  return (1);
 }

 if (VAR_13->cmd == VAR_3) {
  if (VAR_12 != VAR_0) {
   FUNC_10("no done func for %#x???", VAR_15->cdb[0]);
   FUNC_0();
  }

  FUNC_10("cdb %#x not handled", VAR_15->cdb[0]);
  FUNC_7(VAR_10, VAR_11);
  FUNC_3((union ccb *)VAR_11, 1);
  return (0);
 }

 VAR_14 = FUNC_6(VAR_11->init_id);
 if (VAR_14 == ((void*)0)) {
  FUNC_7(VAR_10, VAR_11);
  FUNC_3((union ccb *)VAR_11, 1);
  return (0);
 }

 if (VAR_14->pending_ca == 0 && VAR_14->pending_ua != 0 &&
     VAR_15->cdb[0] != VAR_4) {
  FUNC_9(VAR_11->init_id, VAR_11, VAR_5,
      0x29, VAR_14->pending_ua == VAR_7 ? 1 : 2);
  VAR_14->pending_ca = VAR_2;
  if (VAR_9) {
   FUNC_1(VAR_15->cdb, "UA active for %u: ",
      VAR_10->init_id);
  }
  FUNC_3((union ccb *)VAR_11, 1);
  return (0);
 }


 VAR_14->orig_ua = VAR_14->pending_ua;
 VAR_14->orig_ca = VAR_14->pending_ca;
 VAR_14->pending_ca = VAR_1;
 if (VAR_14->orig_ca == VAR_2)
  VAR_14->pending_ua = VAR_6;


 if (VAR_13->cmd != VAR_3) {
  VAR_16 = VAR_13->start(VAR_10, VAR_11);

  if (VAR_13->start != FUNC_8) {
   VAR_15->init_req += VAR_11->dxfer_len;
   FUNC_3((union ccb *)VAR_11, 1);
  }
 }

 return (VAR_16);
}
