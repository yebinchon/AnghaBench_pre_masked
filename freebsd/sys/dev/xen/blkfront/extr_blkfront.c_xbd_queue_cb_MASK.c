
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int req_prod_pvt; } ;
struct xbd_softc {int xbd_max_request_segments; int xbd_max_request_indirectpages; int xbd_io_dmat; int xbd_dev; scalar_t__ xbd_disk; TYPE_4__ xbd_ring; } ;
struct xbd_command {scalar_t__ cm_operation; int cm_nseg; int cm_flags; int cm_gref_head; int cm_map; int cm_indirectionrefs; int cm_indirectionpages; int cm_sg_refs; int cm_sector_number; int cm_id; TYPE_3__* cm_bp; struct xbd_softc* cm_sc; } ;
typedef int grant_ref_t ;
typedef int bus_dma_segment_t ;
typedef void* blkif_vdev_t ;
struct TYPE_5__ {scalar_t__ operation; int nr_segments; int seg; void* handle; int sector_number; int id; } ;
typedef TYPE_1__ blkif_request_t ;
struct TYPE_6__ {scalar_t__ indirect_op; int nr_segments; int indirect_grefs; void* handle; int sector_number; int operation; int id; } ;
typedef TYPE_2__ blkif_request_indirect_t ;
struct TYPE_7__ {int bio_error; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ FUNC_1 (TYPE_4__*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct xbd_command*,int ) ;
 int FUNC_7 (struct xbd_softc*) ;
 int FUNC_8 (struct xbd_command*) ;
 int FUNC_9 (int *,int,int *,int ,int,int ,int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void
FUNC_11(void *VAR_9, bus_dma_segment_t *VAR_10, int VAR_11, int VAR_12)
{
 struct xbd_softc *VAR_13;
 struct xbd_command *VAR_14;
 int VAR_15;

 VAR_14 = VAR_9;
 VAR_13 = VAR_14->cm_sc;

 if (VAR_12) {
  VAR_14->cm_bp->bio_error = VAR_6;
  FUNC_2(VAR_14->cm_bp);
  FUNC_8(VAR_14);
  return;
 }

 FUNC_0(VAR_11 <= VAR_13->xbd_max_request_segments,
     ("Too many segments in a blkfront I/O"));

 if (VAR_11 <= VAR_0) {
  blkif_request_t *VAR_16;


  VAR_16 = (blkif_request_t *)
      FUNC_1(&VAR_13->xbd_ring, VAR_13->xbd_ring.req_prod_pvt);
  VAR_13->xbd_ring.req_prod_pvt++;
  VAR_16->id = VAR_14->cm_id;
  VAR_16->operation = VAR_14->cm_operation;
  VAR_16->sector_number = VAR_14->cm_sector_number;
  VAR_16->handle = (blkif_vdev_t)(uintptr_t)VAR_13->xbd_disk;
  VAR_16->nr_segments = VAR_11;
  VAR_14->cm_nseg = VAR_11;
  FUNC_9(VAR_10, VAR_11, &VAR_14->cm_gref_head,
      FUNC_10(VAR_13->xbd_dev),
      VAR_14->cm_operation == VAR_3,
      VAR_14->cm_sg_refs, VAR_16->seg);
 } else {
  blkif_request_indirect_t *VAR_17;


  VAR_17 = (blkif_request_indirect_t *)
      FUNC_1(&VAR_13->xbd_ring, VAR_13->xbd_ring.req_prod_pvt);
  VAR_13->xbd_ring.req_prod_pvt++;
  VAR_17->id = VAR_14->cm_id;
  VAR_17->operation = VAR_1;
  VAR_17->indirect_op = VAR_14->cm_operation;
  VAR_17->sector_number = VAR_14->cm_sector_number;
  VAR_17->handle = (blkif_vdev_t)(uintptr_t)VAR_13->xbd_disk;
  VAR_17->nr_segments = VAR_11;
  VAR_14->cm_nseg = VAR_11;
  FUNC_9(VAR_10, VAR_11, &VAR_14->cm_gref_head,
      FUNC_10(VAR_13->xbd_dev),
      VAR_14->cm_operation == VAR_3,
      VAR_14->cm_sg_refs, VAR_14->cm_indirectionpages);
  FUNC_5(VAR_17->indirect_grefs, &VAR_14->cm_indirectionrefs,
      sizeof(grant_ref_t) * VAR_13->xbd_max_request_indirectpages);
 }

 if (VAR_14->cm_operation == VAR_2)
  VAR_15 = VAR_4;
 else if (VAR_14->cm_operation == VAR_3)
  VAR_15 = VAR_5;
 else
  VAR_15 = 0;
 FUNC_3(VAR_13->xbd_io_dmat, VAR_14->cm_map, VAR_15);

 FUNC_4(VAR_14->cm_gref_head);

 FUNC_6(VAR_14, VAR_8);
 if ((VAR_14->cm_flags & VAR_7) != 0)
  FUNC_7(VAR_13);

 return;
}
