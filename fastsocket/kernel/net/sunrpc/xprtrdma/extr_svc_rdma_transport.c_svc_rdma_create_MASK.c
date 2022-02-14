
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct svc_xprt {int dummy; } ;
struct svcxprt_rdma {struct svc_xprt sc_xprt; struct rdma_cm_id* sc_cm_id; } ;
struct svc_serv {int dummy; } ;
struct sockaddr {scalar_t__ sa_family; } ;
struct TYPE_3__ {int src_addr; } ;
struct TYPE_4__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; } ;
struct net {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct svc_xprt* FUNC_0 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct rdma_cm_id*) ;
 int FUNC_2 (struct rdma_cm_id*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct svcxprt_rdma*) ;
 int FUNC_5 (struct rdma_cm_id*,struct sockaddr*) ;
 struct rdma_cm_id* FUNC_6 (int ,struct svcxprt_rdma*,int ,int ) ;
 struct svcxprt_rdma* FUNC_7 (struct svc_serv*,int) ;
 int FUNC_8 (struct rdma_cm_id*) ;
 int FUNC_9 (struct rdma_cm_id*,int ) ;
 int VAR_6 ;
 int FUNC_10 (struct svc_xprt*,struct sockaddr*,int) ;

__attribute__((used)) static struct svc_xprt *FUNC_11(struct svc_serv *VAR_7,
     struct net *VAR_8,
     struct sockaddr *VAR_9, int VAR_10,
     int VAR_11)
{
 struct rdma_cm_id *VAR_12;
 struct svcxprt_rdma *VAR_13;
 struct svc_xprt *VAR_14;
 int VAR_15;

 FUNC_3("svcrdma: Creating RDMA socket\n");
 if (VAR_9->sa_family != VAR_0) {
  FUNC_3("svcrdma: Address family %d is not supported.\n", VAR_9->sa_family);
  return FUNC_0(-VAR_1);
 }
 VAR_13 = FUNC_7(VAR_7, 1);
 if (!VAR_13)
  return FUNC_0(-VAR_2);
 VAR_14 = &VAR_13->sc_xprt;

 VAR_12 = FUNC_6(VAR_6, VAR_13, VAR_4,
       VAR_3);
 if (FUNC_1(VAR_12)) {
  VAR_15 = FUNC_2(VAR_12);
  FUNC_3("svcrdma: rdma_create_id failed = %d\n", VAR_15);
  goto err0;
 }

 VAR_15 = FUNC_5(VAR_12, VAR_9);
 if (VAR_15) {
  FUNC_3("svcrdma: rdma_bind_addr failed = %d\n", VAR_15);
  goto err1;
 }
 VAR_13->sc_cm_id = VAR_12;

 VAR_15 = FUNC_9(VAR_12, VAR_5);
 if (VAR_15) {
  FUNC_3("svcrdma: rdma_listen failed = %d\n", VAR_15);
  goto err1;
 }





 VAR_9 = (struct sockaddr *)&VAR_13->sc_cm_id->route.addr.src_addr;
 FUNC_10(&VAR_13->sc_xprt, VAR_9, VAR_10);

 return &VAR_13->sc_xprt;

 err1:
 FUNC_8(VAR_12);
 err0:
 FUNC_4(VAR_13);
 return FUNC_0(VAR_15);
}
