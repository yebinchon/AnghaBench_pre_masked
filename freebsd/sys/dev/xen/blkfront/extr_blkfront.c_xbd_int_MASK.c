
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ rsp_cons; scalar_t__ req_prod_pvt; TYPE_1__* sring; } ;
struct xbd_softc {scalar_t__ xbd_state; int xbd_io_lock; int * xbd_cm_q; TYPE_4__ xbd_ring; int xbd_io_dmat; struct xbd_command* xbd_shadow; } ;
struct xbd_command {scalar_t__ cm_operation; int (* cm_complete ) (struct xbd_command*) ;scalar_t__ cm_bp; int cm_status; int cm_map; int cm_sg_refs; int cm_nseg; } ;
struct TYPE_7__ {size_t id; int status; } ;
typedef TYPE_2__ blkif_response_t ;
struct TYPE_6__ {scalar_t__ rsp_prod; scalar_t__ rsp_event; } ;
typedef scalar_t__ RING_IDX ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_1 (TYPE_4__*,scalar_t__) ;
 int VAR_5 ;
 size_t VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct xbd_command*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct xbd_softc*,struct xbd_command*) ;
 int FUNC_12 (struct xbd_softc*,struct xbd_command*) ;
 int FUNC_13 (struct xbd_command*) ;
 scalar_t__ FUNC_14 (struct xbd_softc*,size_t) ;
 int FUNC_15 (struct xbd_command*,size_t) ;
 int FUNC_16 (struct xbd_softc*) ;
 int FUNC_17 (struct xbd_softc*,int ) ;

__attribute__((used)) static void
FUNC_18(void *VAR_9)
{
 struct xbd_softc *VAR_10 = VAR_9;
 struct xbd_command *VAR_11;
 blkif_response_t *VAR_12;
 RING_IDX VAR_13, VAR_14;
 int VAR_15;

 FUNC_6(&VAR_10->xbd_io_lock);

 if (FUNC_2(VAR_10->xbd_state == VAR_7)) {
  FUNC_7(&VAR_10->xbd_io_lock);
  return;
 }

 again:
 VAR_14 = VAR_10->xbd_ring.sring->rsp_prod;
 FUNC_8();

 for (VAR_13 = VAR_10->xbd_ring.rsp_cons; VAR_13 != VAR_14;) {
  VAR_12 = FUNC_1(&VAR_10->xbd_ring, VAR_13);
  VAR_11 = &VAR_10->xbd_shadow[VAR_12->id];

  FUNC_15(VAR_11, VAR_6);
  FUNC_5(VAR_11->cm_nseg,
      VAR_11->cm_sg_refs);
  VAR_13++;

  if (VAR_11->cm_operation == VAR_0)
   VAR_15 = VAR_3;
  else if (VAR_11->cm_operation == VAR_1 ||
      VAR_11->cm_operation == VAR_2)
   VAR_15 = VAR_4;
  else
   VAR_15 = 0;
  FUNC_3(VAR_10->xbd_io_dmat, VAR_11->cm_map, VAR_15);
  FUNC_4(VAR_10->xbd_io_dmat, VAR_11->cm_map);





  FUNC_12(VAR_10, VAR_11);





  VAR_11->cm_status = VAR_12->status;
  if (VAR_11->cm_bp)
   FUNC_11(VAR_10, VAR_11);
  else if (VAR_11->cm_complete != ((void*)0))
   VAR_11->cm_complete(VAR_11);
  else
   FUNC_13(VAR_11);
 }

 VAR_10->xbd_ring.rsp_cons = VAR_13;

 if (VAR_13 != VAR_10->xbd_ring.req_prod_pvt) {
  int VAR_16;
  FUNC_0(&VAR_10->xbd_ring, VAR_16);
  if (VAR_16)
   goto again;
 } else {
  VAR_10->xbd_ring.sring->rsp_event = VAR_13 + 1;
 }

 if (FUNC_14(VAR_10, VAR_6) == 0)
  FUNC_17(VAR_10, VAR_5);

 FUNC_16(VAR_10);

 if (FUNC_2(VAR_10->xbd_state == VAR_8))
  FUNC_10(&VAR_10->xbd_cm_q[VAR_6]);

 FUNC_7(&VAR_10->xbd_io_lock);
}
