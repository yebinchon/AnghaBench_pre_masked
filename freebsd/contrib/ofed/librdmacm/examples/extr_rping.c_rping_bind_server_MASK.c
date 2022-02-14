
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr_in6 {int sin6_port; } ;
struct sockaddr_in {int sin_port; } ;
struct sockaddr {int dummy; } ;
struct TYPE_2__ {scalar_t__ ss_family; } ;
struct rping_cb {int cm_id; TYPE_1__ sin; int port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,struct sockaddr*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int FUNC_4(struct rping_cb *VAR_1)
{
 int VAR_2;

 if (VAR_1->sin.ss_family == VAR_0)
  ((struct sockaddr_in *) &VAR_1->sin)->sin_port = VAR_1->port;
 else
  ((struct sockaddr_in6 *) &VAR_1->sin)->sin6_port = VAR_1->port;

 VAR_2 = FUNC_2(VAR_1->cm_id, (struct sockaddr *) &VAR_1->sin);
 if (VAR_2) {
  FUNC_1("rdma_bind_addr");
  return VAR_2;
 }
 FUNC_0("rdma_bind_addr successful\n");

 FUNC_0("rdma_listen\n");
 VAR_2 = FUNC_3(VAR_1->cm_id, 3);
 if (VAR_2) {
  FUNC_1("rdma_listen");
  return VAR_2;
 }

 return 0;
}
