
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_req {int dummy; } ;
struct xbb_softc {scalar_t__ active_request_count; int request_free_stailq; int lock; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,struct xbb_xen_req*,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline void
FUNC_3(struct xbb_softc *VAR_2, struct xbb_xen_req *VAR_3)
{
 FUNC_2(&VAR_2->lock, VAR_0);

 FUNC_1(&VAR_2->request_free_stailq, VAR_3, VAR_1);
 VAR_2->active_request_count--;

 FUNC_0(VAR_2->active_request_count >= 0,
  ("xbb_release_req: negative active count"));
}
