
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rping_cb {int pd; int channel; int cq; int qp; } ;
struct rdma_cm_id {int verbs; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int,struct rping_cb*,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (struct rping_cb*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_11(struct rping_cb *VAR_3, struct rdma_cm_id *VAR_4)
{
 int VAR_5;

 VAR_3->pd = FUNC_2(VAR_4->verbs);
 if (!VAR_3->pd) {
  FUNC_1(VAR_2, "ibv_alloc_pd failed\n");
  return VAR_1;
 }
 FUNC_0("created pd %p\n", VAR_3->pd);

 VAR_3->channel = FUNC_3(VAR_4->verbs);
 if (!VAR_3->channel) {
  FUNC_1(VAR_2, "ibv_create_comp_channel failed\n");
  VAR_5 = VAR_1;
  goto err1;
 }
 FUNC_0("created channel %p\n", VAR_3->channel);

 VAR_3->cq = FUNC_4(VAR_4->verbs, VAR_0 * 2, VAR_3,
    VAR_3->channel, 0);
 if (!VAR_3->cq) {
  FUNC_1(VAR_2, "ibv_create_cq failed\n");
  VAR_5 = VAR_1;
  goto err2;
 }
 FUNC_0("created cq %p\n", VAR_3->cq);

 VAR_5 = FUNC_8(VAR_3->cq, 0);
 if (VAR_5) {
  FUNC_1(VAR_2, "ibv_create_cq failed\n");
  VAR_5 = VAR_1;
  goto err3;
 }

 VAR_5 = FUNC_10(VAR_3);
 if (VAR_5) {
  FUNC_9("rdma_create_qp");
  goto err3;
 }
 FUNC_0("created qp %p\n", VAR_3->qp);
 return 0;

err3:
 FUNC_7(VAR_3->cq);
err2:
 FUNC_6(VAR_3->channel);
err1:
 FUNC_5(VAR_3->pd);
 return VAR_5;
}
