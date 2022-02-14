
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_reqlist {int contig_req_list; scalar_t__ nr_segments; scalar_t__ num_children; scalar_t__ residual_512b_sectors; int status; int * kva; int flags; } ;
struct xbb_softc {int reqlist_free_stailq; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct xbb_xen_reqlist* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int *,int ) ;

__attribute__((used)) static inline struct xbb_xen_reqlist *
FUNC_4(struct xbb_softc *VAR_4)
{
 struct xbb_xen_reqlist *VAR_5;

 VAR_5 = ((void*)0);

 FUNC_3(&VAR_4->lock, VAR_1);

 if ((VAR_5 = FUNC_0(&VAR_4->reqlist_free_stailq)) != ((void*)0)) {

  FUNC_2(&VAR_4->reqlist_free_stailq, VAR_3);
  VAR_5->flags = VAR_2;
  VAR_5->kva = ((void*)0);
  VAR_5->status = VAR_0;
  VAR_5->residual_512b_sectors = 0;
  VAR_5->num_children = 0;
  VAR_5->nr_segments = 0;
  FUNC_1(&VAR_5->contig_req_list);
 }

 return (VAR_5);
}
