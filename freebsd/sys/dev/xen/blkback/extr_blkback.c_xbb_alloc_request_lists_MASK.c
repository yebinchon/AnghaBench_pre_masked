
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_reqlist {int * gnt_handles; int * bounce; struct xbb_softc* xbb; } ;
struct xbb_softc {int max_requests; int max_reqlist_size; int max_reqlist_segments; int reqlist_free_stailq; int dev; struct xbb_xen_reqlist* request_lists; int reqlist_pending_stailq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct xbb_xen_reqlist*,int ) ;
 int VAR_5 ;
 void* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_4(struct xbb_softc *VAR_6)
{
 struct xbb_xen_reqlist *VAR_7;
 int VAR_8;





 VAR_6->request_lists = FUNC_2(VAR_6->max_requests *
  sizeof(*VAR_6->request_lists), VAR_3, VAR_2|VAR_4);
 if (VAR_6->request_lists == ((void*)0)) {
  FUNC_3(VAR_6->dev, VAR_0,
      "Unable to allocate request list structures");
  return (VAR_0);
 }

 FUNC_0(&VAR_6->reqlist_free_stailq);
 FUNC_0(&VAR_6->reqlist_pending_stailq);
 for (VAR_8 = 0; VAR_8 < VAR_6->max_requests; VAR_8++) {
  int VAR_9;

  VAR_7 = &VAR_6->request_lists[VAR_8];

  VAR_7->xbb = VAR_6;
  VAR_7->gnt_handles = FUNC_2(VAR_6->max_reqlist_segments *
           sizeof(*VAR_7->gnt_handles),
           VAR_3, VAR_2|VAR_4);
  if (VAR_7->gnt_handles == ((void*)0)) {
   FUNC_3(VAR_6->dev, VAR_0,
       "Unable to allocate request "
       "grant references");
   return (VAR_0);
  }

  for (VAR_9 = 0; VAR_9 < VAR_6->max_reqlist_segments; VAR_9++)
   VAR_7->gnt_handles[VAR_9] = VAR_1;

  FUNC_1(&VAR_6->reqlist_free_stailq, VAR_7, VAR_5);
 }
 return (0);
}
