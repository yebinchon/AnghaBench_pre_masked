
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int (* comp ) (TYPE_2__*) ;} ;
struct TYPE_4__ {TYPE_2__ mcq; } ;
struct TYPE_6__ {scalar_t__ wqe_ctr; } ;
struct mlx5e_rq {int enabled; TYPE_1__ cq; int ifp; TYPE_3__ wq; } ;
struct mlx5e_channel {struct mlx5e_rq rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (struct mlx5e_rq*,int ,int ) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_4(struct mlx5e_channel *VAR_2)
{
 struct mlx5e_rq *VAR_3 = &VAR_2->rq;
 int VAR_4;

 VAR_3->wq.wqe_ctr = 0;
 FUNC_1(&VAR_3->wq);
 VAR_4 = FUNC_2(VAR_3, VAR_1, VAR_0);
 if (VAR_4 != 0) {
  FUNC_0(VAR_3->ifp,
      "mlx5e_modify_rq() from RST to RDY failed: %d\n", VAR_4);
        }

 VAR_3->enabled = 1;

 VAR_3->cq.mcq.comp(&VAR_3->cq.mcq);
}
