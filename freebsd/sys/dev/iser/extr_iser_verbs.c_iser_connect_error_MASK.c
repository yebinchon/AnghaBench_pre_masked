
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cm_id {struct iser_conn* context; } ;
struct iser_conn {int up_cv; int state; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct iser_conn*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct rdma_cm_id *VAR_1)
{
 struct iser_conn *VAR_2;

 VAR_2 = VAR_1->context;

 FUNC_0("conn %p", VAR_2);

 VAR_2->state = VAR_0;

 FUNC_1(&VAR_2->up_cv);
}
