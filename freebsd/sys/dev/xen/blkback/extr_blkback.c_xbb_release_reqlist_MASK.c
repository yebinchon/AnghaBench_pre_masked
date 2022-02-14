
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_reqlist {int num_children; int contig_req_list; int nr_segments; int * kva; } ;
struct xbb_softc {int flags; int io_task; int io_taskqueue; int reqlist_free_stailq; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct xbb_xen_reqlist*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct xbb_softc*,int *,int ) ;
 int FUNC_4 (struct xbb_softc*,int *,int ) ;
 int FUNC_5 (struct xbb_softc*) ;

__attribute__((used)) static inline void
FUNC_6(struct xbb_softc *VAR_4, struct xbb_xen_reqlist *VAR_5,
      int VAR_6)
{

 FUNC_1(&VAR_4->lock, VAR_0);

 if (VAR_6) {
  VAR_6 = VAR_4->flags & VAR_1;
  VAR_4->flags &= ~VAR_1;
 }

 if (VAR_5->kva != ((void*)0))
  FUNC_3(VAR_4, VAR_5->kva, VAR_5->nr_segments);

 FUNC_4(VAR_4, &VAR_5->contig_req_list, VAR_5->num_children);

 FUNC_0(&VAR_4->reqlist_free_stailq, VAR_5, VAR_3);

 if ((VAR_4->flags & VAR_2) != 0) {






  FUNC_5(VAR_4);
 }

 if (VAR_6 != 0)
  FUNC_2(VAR_4->io_taskqueue, &VAR_4->io_task);
}
