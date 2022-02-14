
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_req {int dummy; } ;
struct xbb_softc {int active_request_count; int request_free_stailq; int lock; } ;


 int VAR_0 ;
 struct xbb_xen_req* FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline struct xbb_xen_req *
FUNC_3(struct xbb_softc *VAR_2)
{
 struct xbb_xen_req *VAR_3;

 VAR_3 = ((void*)0);

 FUNC_2(&VAR_2->lock, VAR_0);

 if ((VAR_3 = FUNC_0(&VAR_2->request_free_stailq)) != ((void*)0)) {
  FUNC_1(&VAR_2->request_free_stailq, VAR_1);
  VAR_2->active_request_count++;
 }

 return (VAR_3);
}
