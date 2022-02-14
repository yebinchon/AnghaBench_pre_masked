
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct iser_conn* context; } ;
struct iser_device {int dummy; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {struct ib_conn ib_conn; } ;


 int FUNC_0 (char*,struct iser_conn*,...) ;
 int FUNC_1 (struct rdma_cm_id*) ;
 struct iser_device* FUNC_2 (struct rdma_cm_id*) ;
 int FUNC_3 (struct rdma_cm_id*,int) ;

__attribute__((used)) static void
FUNC_4(struct rdma_cm_id *VAR_0)
{
 struct iser_device *VAR_1;
 struct iser_conn *VAR_2;
 struct ib_conn *VAR_3;
 int VAR_4;

 VAR_2 = VAR_0->context;

 VAR_3 = &VAR_2->ib_conn;
 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1) {
  FUNC_0("conn %p device lookup/creation failed",
    VAR_2);
  FUNC_1(VAR_0);
  return;
 }

 VAR_3->device = VAR_1;

 VAR_4 = FUNC_3(VAR_0, 1000);
 if (VAR_4) {
  FUNC_0("conn %p resolve route failed: %d", VAR_2, VAR_4);
  FUNC_1(VAR_0);
  return;
 }
}
