
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct xbb_xen_reqlist {scalar_t__ next_contig_sector; int operation; scalar_t__ nr_segments; } ;
struct TYPE_12__ {scalar_t__ req_cons; TYPE_1__* sring; } ;
struct TYPE_11__ {TYPE_8__ common; int x86_64; int x86_32; int native; } ;
struct xbb_softc {int abi; scalar_t__ no_coalesce_reqs; scalar_t__ max_reqlist_segments; int total_dispatch; int normal_dispatch; int forced_dispatch; int reqlist_pending_stailq; int reqs_received; TYPE_3__ rings; } ;
struct blkif_x86_64_request {int dummy; } ;
struct blkif_x86_32_request {int dummy; } ;
struct TYPE_10__ {scalar_t__ sector_number; int operation; scalar_t__ nr_segments; } ;
typedef TYPE_2__ blkif_request_t ;
typedef TYPE_3__ blkif_back_rings_t ;
struct TYPE_9__ {scalar_t__ req_prod; } ;
typedef scalar_t__ RING_IDX ;





 void* FUNC_0 (int *,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_8__*,scalar_t__) ;
 struct xbb_xen_reqlist* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct xbb_xen_reqlist*,int ) ;
 struct xbb_xen_reqlist* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_2__*,struct blkif_x86_32_request*) ;
 int FUNC_7 (TYPE_2__*,struct blkif_x86_64_request*) ;
 int VAR_0 ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 int FUNC_11 (struct xbb_softc*,struct xbb_xen_reqlist*) ;
 int FUNC_12 (struct xbb_softc*,struct xbb_xen_reqlist**,TYPE_2__*,scalar_t__) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_13(void *VAR_2, int VAR_3)
{
 struct xbb_softc *VAR_4;
 blkif_back_rings_t *VAR_5;
 RING_IDX VAR_6;
 uint64_t VAR_7;
 int VAR_8;
 struct xbb_xen_reqlist *VAR_9;


 VAR_4 = (struct xbb_softc *)VAR_2;
 VAR_5 = &VAR_4->rings;
 for (;;) {
  int VAR_10;






  VAR_9 = FUNC_4(&VAR_4->reqlist_pending_stailq,
          VAR_1, VAR_0);
  if (VAR_9 != ((void*)0)) {
   VAR_7 = VAR_9->next_contig_sector;
   VAR_8 = VAR_9->operation;
  } else {
   VAR_8 = 0;
   VAR_7 = 0;
  }





  VAR_6 = VAR_5->common.sring->req_prod;


  FUNC_9();
  while (VAR_5->common.req_cons != VAR_6
      && FUNC_1(&VAR_5->common,
        VAR_5->common.req_cons) == 0){
   blkif_request_t VAR_11;
   blkif_request_t *VAR_12;
   int VAR_13;

   switch (VAR_4->abi) {
   case 130:
    VAR_12 = FUNC_0(&VAR_4->rings.native,
        VAR_5->common.req_cons);
    break;
   case 129:
   {
    struct blkif_x86_32_request *VAR_14;

    VAR_14 = FUNC_0(
        &VAR_4->rings.x86_32, VAR_5->common.req_cons);
    FUNC_6(&VAR_11,
           VAR_14);
    VAR_12 = &VAR_11;
    break;
   }
   case 128:
   {
    struct blkif_x86_64_request *VAR_15;

    VAR_15 =FUNC_0(&VAR_4->rings.x86_64,
        VAR_5->common.req_cons);
    FUNC_7(&VAR_11,
           VAR_15);
    VAR_12 = &VAR_11;
    break;
   }
   default:
    FUNC_8("Unexpected blkif protocol ABI.");

   }
   if ((VAR_9 != ((void*)0))
    && ((VAR_4->no_coalesce_reqs != 0)
     || ((VAR_4->no_coalesce_reqs == 0)
      && ((VAR_12->sector_number != VAR_7)
       || (VAR_12->operation != VAR_8)
       || ((VAR_12->nr_segments + VAR_9->nr_segments) >
            VAR_4->max_reqlist_segments))))) {
    VAR_9 = ((void*)0);
   }







   VAR_10 = FUNC_12(VAR_4, &VAR_9, VAR_12,
         VAR_4->rings.common.req_cons);

   if (VAR_10 != 0) {





    break;
   }
   VAR_4->rings.common.req_cons++;
   VAR_4->reqs_received++;

   VAR_13 = FUNC_10(VAR_12);
   VAR_7 = VAR_12->sector_number + VAR_13;
   VAR_9->next_contig_sector = VAR_7;
   VAR_8 = VAR_12->operation;
  }


  VAR_9 = FUNC_2(&VAR_4->reqlist_pending_stailq);
  if (VAR_9 == ((void*)0)) {




   break;
  }





  FUNC_5(&VAR_4->reqlist_pending_stailq, VAR_0);

  VAR_10 = FUNC_11(VAR_4, VAR_9);
  if (VAR_10 != 0) {







   FUNC_3(&VAR_4->reqlist_pending_stailq,
        VAR_9, VAR_0);
   break;
  } else {
   VAR_9 = FUNC_2(&VAR_4->reqlist_pending_stailq);

   if (VAR_9 != ((void*)0))
    VAR_4->forced_dispatch++;
   else
    VAR_4->normal_dispatch++;

   VAR_4->total_dispatch++;
  }
 }
}
