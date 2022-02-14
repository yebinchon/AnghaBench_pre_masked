
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_cq {scalar_t__ cqn; int lock; } ;
struct ibv_qp {int recv_cq; int send_cq; } ;


 int FUNC_0 (int *) ;
 struct mlx4_cq* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ibv_qp *VAR_0)
{
 struct mlx4_cq *VAR_1 = FUNC_1(VAR_0->send_cq);
 struct mlx4_cq *VAR_2 = FUNC_1(VAR_0->recv_cq);

 if (!VAR_0->send_cq || !VAR_0->recv_cq) {
  if (VAR_0->send_cq)
   FUNC_0(&VAR_1->lock);
  else if (VAR_0->recv_cq)
   FUNC_0(&VAR_2->lock);
 } else if (VAR_1 == VAR_2) {
  FUNC_0(&VAR_1->lock);
 } else if (VAR_1->cqn < VAR_2->cqn) {
  FUNC_0(&VAR_1->lock);
  FUNC_0(&VAR_2->lock);
 } else {
  FUNC_0(&VAR_2->lock);
  FUNC_0(&VAR_1->lock);
 }
}
