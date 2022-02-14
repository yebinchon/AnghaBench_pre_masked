
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {scalar_t__ xbd_state; int xbd_flags; int xbd_max_request_segments; int xbd_callback; } ;
struct xbd_command {void* cm_operation; int cm_flags; scalar_t__ cm_sector_number; struct bio* cm_bp; int cm_gref_head; } ;
struct bio {int bio_cmd; int bio_flags; scalar_t__ bio_pblkno; } ;
typedef scalar_t__ blkif_sector_t ;



 int VAR_0 ;


 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int ,struct xbd_softc*,int ) ;
 int FUNC_3 (char*,...) ;
 struct bio* FUNC_4 (struct xbd_softc*) ;
 struct xbd_command* FUNC_5 (struct xbd_softc*,int ) ;
 int FUNC_6 (struct xbd_command*,int ) ;
 int FUNC_7 (struct xbd_softc*,int ) ;
 int FUNC_8 (struct xbd_softc*,int ) ;
 int FUNC_9 (struct xbd_softc*,struct bio*) ;
 int FUNC_10 (struct xbd_command*,int ) ;
 int VAR_15 ;

__attribute__((used)) static struct xbd_command *
FUNC_11(struct xbd_softc *VAR_16)
{
 struct xbd_command *VAR_17;
 struct bio *VAR_18;

 if (FUNC_0(VAR_16->xbd_state != VAR_14))
  return (((void*)0));

 VAR_18 = FUNC_4(VAR_16);
 if (VAR_18 == ((void*)0))
  return (((void*)0));

 if ((VAR_17 = FUNC_5(VAR_16, VAR_12)) == ((void*)0)) {
  FUNC_7(VAR_16, VAR_7);
  FUNC_9(VAR_16, VAR_18);
  return (((void*)0));
 }

 if (FUNC_1(VAR_16->xbd_max_request_segments,
     &VAR_17->cm_gref_head) != 0) {
  FUNC_2(&VAR_16->xbd_callback,
      VAR_15, VAR_16,
      VAR_16->xbd_max_request_segments);
  FUNC_7(VAR_16, VAR_9);
  FUNC_9(VAR_16, VAR_18);
  FUNC_6(VAR_17, VAR_12);
  return (((void*)0));
 }

 VAR_17->cm_bp = VAR_18;
 VAR_17->cm_sector_number = (blkif_sector_t)VAR_18->bio_pblkno;

 switch (VAR_18->bio_cmd) {
 case 129:
  VAR_17->cm_operation = VAR_2;
  break;
 case 128:
  VAR_17->cm_operation = VAR_3;
  if ((VAR_18->bio_flags & VAR_0) != 0) {
   if ((VAR_16->xbd_flags & VAR_6) != 0) {
    VAR_17->cm_operation = VAR_4;
   } else {



    VAR_17->cm_flags |= VAR_5;
    if (FUNC_8(VAR_16, VAR_11) != 0) {




     FUNC_7(VAR_16, VAR_10);
     FUNC_10(VAR_17, VAR_13);
     return (((void*)0));
    }
   }
  }
  break;
 case 130:
  if ((VAR_16->xbd_flags & VAR_8) != 0)
   VAR_17->cm_operation = VAR_1;
  else if ((VAR_16->xbd_flags & VAR_6) != 0)
   VAR_17->cm_operation = VAR_4;
  else
   FUNC_3("flush request, but no flush support available");
  break;
 default:
  FUNC_3("unknown bio command %d", VAR_18->bio_cmd);
 }

 return (VAR_17);
}
