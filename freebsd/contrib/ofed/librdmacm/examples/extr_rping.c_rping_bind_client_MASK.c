
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_4__ {scalar_t__ ss_family; } ;
struct TYPE_3__ {scalar_t__ ss_family; } ;
struct rping_cb {scalar_t__ state; int sem; TYPE_2__ sin; int cm_id; TYPE_1__ ssource; int port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct rping_cb *VAR_3)
{
 int VAR_4;

 if (VAR_3->sin.ss_family == VAR_0)
  ((struct sockaddr_in *) &VAR_3->sin)->sin_port = VAR_3->port;
 else
  ((struct sockaddr_in6 *) &VAR_3->sin)->sin6_port = VAR_3->port;

 if (VAR_3->ssource.ss_family)
  VAR_4 = FUNC_3(VAR_3->cm_id, (struct sockaddr *) &VAR_3->ssource,
     (struct sockaddr *) &VAR_3->sin, 2000);
 else
  VAR_4 = FUNC_3(VAR_3->cm_id, ((void*)0), (struct sockaddr *) &VAR_3->sin, 2000);

 if (VAR_4) {
  FUNC_2("rdma_resolve_addr");
  return VAR_4;
 }

 FUNC_4(&VAR_3->sem);
 if (VAR_3->state != VAR_1) {
  FUNC_1(VAR_2, "waiting for addr/route resolution state %ld\n",
   VAR_3->state);
  return -1;
 }

 FUNC_0("rdma_resolve_addr - rdma_resolve_route successful\n");
 return 0;
}
