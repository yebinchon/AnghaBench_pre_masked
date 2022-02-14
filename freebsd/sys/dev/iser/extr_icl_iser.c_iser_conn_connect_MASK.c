
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct ib_conn {int * cma_id; int * device; } ;
struct iser_conn {int handoff_done; scalar_t__ state; int state_mutex; int conn_list; int up_cv; struct ib_conn ib_conn; } ;
struct icl_conn {int dummy; } ;
struct TYPE_2__ {int connlist_mutex; int connlist; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct iser_conn*) ;
 int FUNC_1 (char*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;
 int FUNC_4 (int *,int *) ;
 struct iser_conn* FUNC_5 (struct icl_conn*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (struct iser_conn*) ;
 int VAR_7 ;
 int FUNC_7 (struct icl_conn*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (int *,int ,void*,int ,int ) ;
 int FUNC_12 (int *,struct sockaddr*,struct sockaddr*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

int
FUNC_15(struct icl_conn *VAR_8, int VAR_9, int VAR_10,
  int VAR_11, struct sockaddr *VAR_12, struct sockaddr *VAR_13)
{
 struct iser_conn *VAR_14 = FUNC_5(VAR_8);
 struct ib_conn *VAR_15 = &VAR_14->ib_conn;
 int VAR_16 = 0;

 FUNC_7(VAR_8);

 FUNC_13(&VAR_14->state_mutex);

 VAR_15->device = ((void*)0);
 VAR_14->handoff_done = 0;

 VAR_14->state = VAR_2;

 VAR_15->cma_id = FUNC_11(&VAR_6, VAR_7, (void *)VAR_14,
   VAR_4, VAR_1);
 if (FUNC_2(VAR_15->cma_id)) {
  VAR_16 = -FUNC_3(VAR_15->cma_id);
  FUNC_1("rdma_create_id failed: %d", VAR_16);
  goto id_failure;
 }

 VAR_16 = FUNC_12(VAR_15->cma_id, VAR_12, VAR_13, 1000);
 if (VAR_16) {
  FUNC_1("rdma_resolve_addr failed: %d", VAR_16);
  if (VAR_16 < 0)
   VAR_16 = -VAR_16;
  goto addr_failure;
 }

 FUNC_0("before cv_wait: %p", VAR_14);
 FUNC_4(&VAR_14->up_cv, &VAR_14->state_mutex);
 FUNC_0("after cv_wait: %p", VAR_14);

 if (VAR_14->state != VAR_3) {
  VAR_16 = VAR_0;
  goto addr_failure;
 }

 VAR_16 = FUNC_6(VAR_14);
 if (VAR_16)
  goto addr_failure;
 FUNC_14(&VAR_14->state_mutex);

 FUNC_9(&VAR_5.connlist_mutex);
 FUNC_8(&VAR_14->conn_list, &VAR_5.connlist);
 FUNC_10(&VAR_5.connlist_mutex);

 return (0);

id_failure:
 VAR_15->cma_id = ((void*)0);
addr_failure:
 FUNC_14(&VAR_14->state_mutex);
 return (VAR_16);
}
