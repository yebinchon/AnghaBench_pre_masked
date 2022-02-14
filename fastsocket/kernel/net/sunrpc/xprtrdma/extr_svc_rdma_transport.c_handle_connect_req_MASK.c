
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int xpt_flags; int xpt_server; } ;
struct svcxprt_rdma {size_t sc_ord; TYPE_3__ sc_xprt; int sc_lock; int sc_accept_q; struct rdma_cm_id* sc_cm_id; } ;
struct sockaddr {int dummy; } ;
struct TYPE_6__ {int src_addr; int dst_addr; } ;
struct TYPE_7__ {TYPE_1__ addr; } ;
struct rdma_cm_id {TYPE_2__ route; struct svcxprt_rdma* context; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int *) ;
 struct svcxprt_rdma* FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sockaddr*) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*,struct sockaddr*,int ) ;
 int FUNC_9 (TYPE_3__*,struct sockaddr*,int ) ;

__attribute__((used)) static void FUNC_10(struct rdma_cm_id *VAR_1, size_t VAR_2)
{
 struct svcxprt_rdma *VAR_3 = VAR_1->context;
 struct svcxprt_rdma *VAR_4;
 struct sockaddr *VAR_5;


 VAR_4 = FUNC_2(VAR_3->sc_xprt.xpt_server, 0);
 if (!VAR_4) {
  FUNC_0("svcrdma: failed to create new transport\n");
  return;
 }
 VAR_4->sc_cm_id = VAR_1;
 VAR_1->context = VAR_4;
 FUNC_0("svcrdma: Creating newxprt=%p, cm_id=%p, listenxprt=%p\n",
  VAR_4, VAR_4->sc_cm_id, VAR_3);


 VAR_4->sc_ord = VAR_2;


 VAR_5 = (struct sockaddr *)&VAR_4->sc_cm_id->route.addr.dst_addr;
 FUNC_9(&VAR_4->sc_xprt, VAR_5, FUNC_6(VAR_5));
 VAR_5 = (struct sockaddr *)&VAR_4->sc_cm_id->route.addr.src_addr;
 FUNC_8(&VAR_4->sc_xprt, VAR_5, FUNC_6(VAR_5));





 FUNC_4(&VAR_3->sc_lock);
 FUNC_1(&VAR_4->sc_accept_q, &VAR_3->sc_accept_q);
 FUNC_5(&VAR_3->sc_lock);





 FUNC_3(VAR_0, &VAR_3->sc_xprt.xpt_flags);
 FUNC_7(&VAR_3->sc_xprt);
}
