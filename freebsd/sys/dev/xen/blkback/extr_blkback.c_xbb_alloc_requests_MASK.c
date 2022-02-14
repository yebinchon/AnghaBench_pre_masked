
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xbb_xen_req {int dummy; } ;
struct xbb_softc {int max_requests; int request_free_stailq; struct xbb_xen_req* requests; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct xbb_xen_req*,int ) ;
 int VAR_4 ;
 struct xbb_xen_req* FUNC_2 (int,int ,int) ;
 int FUNC_3 (int ,int,char*) ;

__attribute__((used)) static int
FUNC_4(struct xbb_softc *VAR_5)
{
 struct xbb_xen_req *VAR_6;
 struct xbb_xen_req *VAR_7;




 VAR_5->requests = FUNC_2(VAR_5->max_requests * sizeof(*VAR_5->requests),
          VAR_2, VAR_1|VAR_3);
 if (VAR_5->requests == ((void*)0)) {
  FUNC_3(VAR_5->dev, VAR_0,
      "Unable to allocate request structures");
  return (VAR_0);
 }

 VAR_6 = VAR_5->requests;
 VAR_7 = &VAR_5->requests[VAR_5->max_requests - 1];
 FUNC_0(&VAR_5->request_free_stailq);
 while (VAR_6 <= VAR_7) {
  FUNC_1(&VAR_5->request_free_stailq, VAR_6, VAR_4);
  VAR_6++;
 }
 return (0);
}
