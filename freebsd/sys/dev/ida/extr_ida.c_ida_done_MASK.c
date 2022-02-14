
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ida_softc {int flags; int ch; scalar_t__ qactive; int dev; int hwqcb_dmamap; int hwqcb_dmat; int buffer_dmat; int lock; } ;
struct ida_qcb {scalar_t__ state; int flags; char* error; TYPE_3__* buf; TYPE_2__* hwqcb; int dmamap; } ;
typedef int bus_dmasync_op_t ;
struct TYPE_6__ {scalar_t__ bio_cmd; int bio_flags; } ;
struct TYPE_4__ {int error; } ;
struct TYPE_5__ {TYPE_1__ req; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int const VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int,char*) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *,int,int ,struct ida_softc*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*,...) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_6 (struct ida_softc*,struct ida_qcb*) ;
 int VAR_15 ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (struct ida_qcb*) ;

__attribute__((used)) static void
FUNC_10(struct ida_softc *VAR_16, struct ida_qcb *VAR_17)
{
 bus_dmasync_op_t VAR_18;
 int VAR_19, VAR_20 = 0;




 if (!VAR_13)
  FUNC_8(&VAR_16->lock, VAR_9);
 VAR_19 = (VAR_17->state != VAR_10);
 if (VAR_17->flags & 128 && VAR_19) {
  switch (VAR_17->flags & 128) {
  case 128:
   VAR_18 = VAR_2 | VAR_3;
   break;
  case 129:
   VAR_18 = VAR_2;
   break;
  default:
   FUNC_0((VAR_17->flags & 128) ==
       VAR_5, ("bad DMA data flags"));
   VAR_18 = VAR_3;
   break;
  }
  FUNC_1(VAR_16->buffer_dmat, VAR_17->dmamap, VAR_18);
  FUNC_2(VAR_16->buffer_dmat, VAR_17->dmamap);
 }
 if (VAR_19)
  FUNC_1(VAR_16->hwqcb_dmat, VAR_16->hwqcb_dmamap,
      VAR_2 | VAR_3);

 if (VAR_17->hwqcb->req.error & VAR_12) {
  if (VAR_17->buf)
   FUNC_5(VAR_16->dev, "soft %s error\n",
    VAR_17->buf->bio_cmd == VAR_1 ?
     "read" : "write");
  else
   FUNC_5(VAR_16->dev, "soft error\n");
 }
 if (VAR_17->hwqcb->req.error & VAR_6) {
  VAR_20 = 1;
  if (VAR_17->buf)
   FUNC_5(VAR_16->dev, "hard %s error\n",
    VAR_17->buf->bio_cmd == VAR_1 ?
     "read" : "write");
  else
   FUNC_5(VAR_16->dev, "hard error\n");
 }
 if (VAR_17->hwqcb->req.error & VAR_4) {
  VAR_20 = 1;
  FUNC_5(VAR_16->dev, "invalid request\n");
 }
 if (VAR_17->error) {
  VAR_20 = 1;
  FUNC_5(VAR_16->dev, "request failed to map: %d\n", VAR_17->error);
 }

 if (VAR_17->flags & VAR_7) {
  if (VAR_16->flags & VAR_8)
   FUNC_9(VAR_17);
  if (VAR_17->state == VAR_11)
   FUNC_6(VAR_16, VAR_17);
 } else {
  FUNC_0(VAR_17->buf != ((void*)0), ("ida_done(): qcb->buf is NULL!"));
  if (VAR_20)
   VAR_17->buf->bio_flags |= VAR_0;
  FUNC_7(VAR_17->buf);
  FUNC_6(VAR_16, VAR_17);
 }

 if (!VAR_19)
  return;

 VAR_16->qactive--;

 if (VAR_16->qactive)
  FUNC_3(&VAR_16->ch, VAR_14 * 5, VAR_15, VAR_16);
 else
  FUNC_4(&VAR_16->ch);
}
