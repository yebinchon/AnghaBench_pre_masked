
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbd_softc {int xbd_ring_pages; int xbd_max_request_size; int xbd_max_request_segments; int xbd_max_requests; int xbd_dev; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,struct xbd_softc*,int ,int ,char*,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int,int *,int,char*) ;
 struct sysctl_oid_list* FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(struct xbd_softc *VAR_4)
{
 struct sysctl_ctx_list *VAR_5 = ((void*)0);
 struct sysctl_oid *VAR_6 = ((void*)0);
 struct sysctl_oid_list *VAR_7;

 VAR_5 = FUNC_3(VAR_4->xbd_dev);
 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = FUNC_4(VAR_4->xbd_dev);
 if (VAR_6 == ((void*)0))
  return;

 VAR_7 = FUNC_2(VAR_6);
 FUNC_1(VAR_5, VAR_7, VAR_2,
     "max_requests", VAR_0, &VAR_4->xbd_max_requests, -1,
     "maximum outstanding requests (negotiated)");

 FUNC_1(VAR_5, VAR_7, VAR_2,
     "max_request_segments", VAR_0,
     &VAR_4->xbd_max_request_segments, 0,
     "maximum number of pages per requests (negotiated)");

 FUNC_1(VAR_5, VAR_7, VAR_2,
     "max_request_size", VAR_0, &VAR_4->xbd_max_request_size, 0,
     "maximum size in bytes of a request (negotiated)");

 FUNC_1(VAR_5, VAR_7, VAR_2,
     "ring_pages", VAR_0, &VAR_4->xbd_ring_pages, 0,
     "communication channel pages (negotiated)");

 FUNC_0(VAR_5, VAR_7, VAR_2,
     "features", VAR_1|VAR_0, VAR_4, 0,
     VAR_3, "A", "protocol features (negotiated)");
}
