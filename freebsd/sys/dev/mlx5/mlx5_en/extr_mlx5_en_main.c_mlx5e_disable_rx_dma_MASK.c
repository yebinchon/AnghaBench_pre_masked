
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int (* comp ) (TYPE_2__*) ;} ;
struct TYPE_3__ {TYPE_2__ mcq; } ;
struct mlx5e_rq {int ifp; TYPE_1__ cq; int wq; int mtx; int watchdog; scalar_t__ enabled; } ;
struct mlx5e_channel {struct mlx5e_rq rq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct mlx5e_rq*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_8(struct mlx5e_channel *VAR_3)
{
 struct mlx5e_rq *VAR_4 = &VAR_3->rq;
 int VAR_5;

 FUNC_5(&VAR_4->mtx);
 VAR_4->enabled = 0;
 FUNC_0(&VAR_4->watchdog);
 FUNC_6(&VAR_4->mtx);

 VAR_5 = FUNC_3(VAR_4, VAR_1, VAR_0);
 if (VAR_5 != 0) {
  FUNC_1(VAR_4->ifp,
      "mlx5e_modify_rq() from RDY to RST failed: %d\n", VAR_5);
 }

 while (!FUNC_2(&VAR_4->wq)) {
  FUNC_4(1);
  VAR_4->cq.mcq.comp(&VAR_4->cq.mcq);
 }





 VAR_5 = FUNC_3(VAR_4, VAR_0, VAR_2);
 if (VAR_5 != 0) {
  FUNC_1(VAR_4->ifp,
      "mlx5e_modify_rq() from ERR to RST failed: %d\n", VAR_5);
 }
}
