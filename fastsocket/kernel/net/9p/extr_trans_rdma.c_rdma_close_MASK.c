
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct p9_trans_rdma {int cm_id; } ;
struct p9_client {int status; struct p9_trans_rdma* trans; } ;


 int VAR_0 ;
 int FUNC_0 (struct p9_trans_rdma*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct p9_client *VAR_1)
{
 struct p9_trans_rdma *VAR_2;

 if (!VAR_1)
  return;

 VAR_2 = VAR_1->trans;
 if (!VAR_2)
  return;

 VAR_1->status = VAR_0;
 FUNC_1(VAR_2->cm_id);
 FUNC_0(VAR_2);
}
