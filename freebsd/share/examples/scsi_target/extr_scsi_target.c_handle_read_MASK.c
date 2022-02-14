
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int func_code; } ;
struct TYPE_10__ {scalar_t__ targ_descr; } ;
struct ccb_scsiio {TYPE_3__ ccb_h; } ;
struct TYPE_9__ {int cdb_ptr; int cdb_bytes; } ;
struct TYPE_8__ {int flags; scalar_t__ targ_descr; } ;
struct ccb_accept_tio {TYPE_2__ cdb_io; TYPE_1__ ccb_h; } ;
union ccb {TYPE_5__ ccb_h; struct ccb_scsiio ctio; struct ccb_accept_tio atio; } ;
struct ctio_descr {int atio; int event; } ;
struct atio_descr {int flags; int cdb; int cmplt_io; } ;
typedef int ccb_array ;
struct TYPE_11__ {int tqe; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_5__*,int ) ;
 int FUNC_2 (int *,TYPE_5__*,int ) ;
 int FUNC_3 (int *,TYPE_5__*,int ) ;



 int FUNC_4 (struct atio_descr*,int) ;
 int VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_5 (struct ccb_scsiio*) ;
 int FUNC_6 (int ,union ccb**,int) ;
 int FUNC_7 (int ) ;
 int VAR_7 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,...) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_10()
{
 union ccb *VAR_9[VAR_4], *VAR_10;
 int VAR_11, VAR_12, VAR_13;

 VAR_11 = FUNC_6(VAR_7, VAR_9, sizeof(VAR_9));
 if (VAR_11 <= 0) {
  FUNC_8("read ccb ptrs");
  return;
 }
 VAR_11 /= sizeof(union ccb *);
 if (VAR_11 < 1) {
  FUNC_9("truncated read ccb ptr?");
  return;
 }

 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_10 = VAR_9[VAR_12];
  FUNC_3(&VAR_5, &VAR_10->ccb_h, VAR_6.tqe);

  switch (VAR_10->ccb_h.func_code) {
  case 130:
  {
   struct ccb_accept_tio *VAR_14;
   struct atio_descr *VAR_15;


   VAR_14 = &VAR_10->atio;
   VAR_15 = (struct atio_descr *)VAR_14->ccb_h.targ_descr;
   FUNC_4(VAR_15, sizeof(*VAR_15));
   FUNC_0(&VAR_15->cmplt_io);
   VAR_15->flags = VAR_14->ccb_h.flags &
    (VAR_1 | VAR_2);

   if ((VAR_14->ccb_h.flags & VAR_0) == 0)
    VAR_15->cdb = VAR_14->cdb_io.cdb_bytes;
   else
    VAR_15->cdb = VAR_14->cdb_io.cdb_ptr;


   FUNC_2(&VAR_8, &VAR_10->ccb_h,
       VAR_6.tqe);
   break;
  }
  case 129:
  {
   struct ccb_scsiio *VAR_16;
   struct ctio_descr *VAR_17;

   VAR_16 = &VAR_10->ctio;
   VAR_17 = (struct ctio_descr *)VAR_16->ccb_h.targ_descr;
   VAR_17->event = VAR_3;

   FUNC_5(VAR_16);

   VAR_13 += FUNC_7(VAR_17->atio);
   break;
  }
  case 128:

   FUNC_1(&VAR_8, &VAR_10->ccb_h,
       VAR_6.tqe);
   break;
  default:
   FUNC_9("Unhandled ccb type %#x in handle_read",
         VAR_10->ccb_h.func_code);
   break;
  }
 }
}
