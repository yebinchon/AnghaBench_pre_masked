
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ nr_segments; int operation; int id; int sector_number; } ;
struct xbb_xen_reqlist {int nr_segments; int num_children; int contig_req_list; int ds_t0; TYPE_1__* ring_req; TYPE_1__ ring_req_storage; int operation; int id; int req_ring_idx; struct xbb_xen_reqlist* reqlist; int starting_sector_number; } ;
struct xbb_xen_req {int nr_segments; int num_children; int contig_req_list; int ds_t0; TYPE_1__* ring_req; TYPE_1__ ring_req_storage; int operation; int id; int req_ring_idx; struct xbb_xen_req* reqlist; int starting_sector_number; } ;
struct xbb_softc {int flags; scalar_t__ abi; int lock; int request_shortages; int xbb_stats_in; int reqlist_pending_stailq; } ;
typedef TYPE_1__ blkif_request_t ;
typedef int RING_IDX ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct xbb_xen_reqlist*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct xbb_xen_reqlist* FUNC_6 (struct xbb_softc*) ;
 struct xbb_xen_reqlist* FUNC_7 (struct xbb_softc*) ;
 int FUNC_8 (struct xbb_softc*,struct xbb_xen_reqlist*) ;
 int FUNC_9 (struct xbb_softc*,struct xbb_xen_reqlist*,int ) ;

__attribute__((used)) static int
FUNC_10(struct xbb_softc *VAR_4, struct xbb_xen_reqlist **VAR_5,
    blkif_request_t *VAR_6, RING_IDX VAR_7)
{
 struct xbb_xen_reqlist *VAR_8;
 struct xbb_xen_req *VAR_9;

 VAR_8 = ((void*)0);
 VAR_9 = ((void*)0);

 FUNC_4(&VAR_4->lock);





 if ((VAR_4->flags & VAR_2) != 0) {
  FUNC_5(&VAR_4->lock);
  return (1);
 }




 if (*VAR_5 == ((void*)0)) {
  VAR_8 = FUNC_7(VAR_4);
  if (VAR_8 == ((void*)0))
   goto bailout_error;
 }


 VAR_9 = FUNC_6(VAR_4);
 if (VAR_9 == ((void*)0))
  goto bailout_error;

 FUNC_5(&VAR_4->lock);

 if (*VAR_5 == ((void*)0)) {
  *VAR_5 = VAR_8;
  VAR_8->operation = VAR_6->operation;
  VAR_8->starting_sector_number = VAR_6->sector_number;
  FUNC_0(&VAR_4->reqlist_pending_stailq, VAR_8,
       VAR_3);
 }

 VAR_9->reqlist = *VAR_5;
 VAR_9->req_ring_idx = VAR_7;
 VAR_9->id = VAR_6->id;
 VAR_9->operation = VAR_6->operation;

 if (VAR_4->abi != VAR_0) {
  FUNC_1(VAR_6, &VAR_9->ring_req_storage, sizeof(*VAR_6));
  VAR_9->ring_req = &VAR_9->ring_req_storage;
 } else {
  VAR_9->ring_req = VAR_6;
 }

 FUNC_2(&VAR_9->ds_t0);
 FUNC_3(VAR_4->xbb_stats_in, &VAR_9->ds_t0);
 FUNC_0(&(*VAR_5)->contig_req_list, VAR_9, VAR_3);
 (*VAR_5)->num_children++;
 (*VAR_5)->nr_segments += VAR_6->nr_segments;

 return (0);

bailout_error:






 VAR_4->flags |= VAR_1;
 VAR_4->request_shortages++;

 if (VAR_9 != ((void*)0))
  FUNC_8(VAR_4, VAR_9);

 if (VAR_8 != ((void*)0))
  FUNC_9(VAR_4, VAR_8, 0);

 FUNC_5(&VAR_4->lock);

 return (1);
}
