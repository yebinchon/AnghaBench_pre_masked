
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct xbb_xen_reqlist {struct xbb_xen_reqlist* gnt_handles; struct xbb_xen_reqlist* bounce; } ;
struct TYPE_2__ {size_t ring_pages; int * handle; int * bus_addr; scalar_t__ gnt_addr; } ;
struct xbb_softc {int flags; scalar_t__ active_request_count; int max_requests; struct xbb_xen_reqlist* request_lists; struct xbb_xen_reqlist* requests; TYPE_1__ ring_config; int lock; int io_task; int io_taskqueue; int xen_intr_handle; } ;
struct gnttab_unmap_grant_ref {int handle; int dev_bus_addr; scalar_t__ host_addr; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,struct gnttab_unmap_grant_ref*,size_t) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct xbb_xen_reqlist*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (struct xbb_softc*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(struct xbb_softc *VAR_6)
{
 struct gnttab_unmap_grant_ref VAR_7[VAR_5];
 struct gnttab_unmap_grant_ref *VAR_8;
 u_int VAR_9;
 int VAR_10;

 FUNC_0("\n");

 if ((VAR_6->flags & VAR_4) == 0)
  return (0);

 FUNC_4(&VAR_6->lock);
 FUNC_8(&VAR_6->xen_intr_handle);
 FUNC_6(VAR_6->io_taskqueue, &VAR_6->io_task);
 FUNC_3(&VAR_6->lock);





 if (VAR_6->active_request_count != 0)
  return (VAR_0);

 for (VAR_9 = 0, VAR_8 = VAR_7;
      VAR_9 < VAR_6->ring_config.ring_pages;
      VAR_9++, VAR_8++) {

  VAR_8->host_addr = VAR_6->ring_config.gnt_addr
            + (VAR_9 * VAR_3);
  VAR_8->dev_bus_addr = VAR_6->ring_config.bus_addr[VAR_9];
  VAR_8->handle = VAR_6->ring_config.handle[VAR_9];
 }

 VAR_10 = FUNC_1(VAR_1, VAR_7,
       VAR_6->ring_config.ring_pages);
 if (VAR_10 != 0)
  FUNC_5("Grant table op failed (%d)", VAR_10);

 FUNC_7(VAR_6);

 if (VAR_6->requests != ((void*)0)) {
  FUNC_2(VAR_6->requests, VAR_2);
  VAR_6->requests = ((void*)0);
 }

 if (VAR_6->request_lists != ((void*)0)) {
  struct xbb_xen_reqlist *VAR_11;
  int VAR_12;


  for (VAR_12 = 0, VAR_11 = VAR_6->request_lists;
       VAR_12 < VAR_6->max_requests; VAR_12++, VAR_11++){






   if (VAR_11->gnt_handles != ((void*)0)) {
    FUNC_2(VAR_11->gnt_handles, VAR_2);
    VAR_11->gnt_handles = ((void*)0);
   }
  }
  FUNC_2(VAR_6->request_lists, VAR_2);
  VAR_6->request_lists = ((void*)0);
 }

 VAR_6->flags &= ~VAR_4;
 return (0);
}
