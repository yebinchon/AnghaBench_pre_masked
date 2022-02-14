
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int cc; } ;
struct TYPE_5__ {TYPE_2__ wq; int tasklet; } ;
struct mlx5_fpga_conn {TYPE_1__ cq; int fdev; } ;
struct mlx5_cqe64 {int dummy; } ;


 struct mlx5_cqe64* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (struct mlx5_fpga_conn*) ;
 int FUNC_4 (struct mlx5_fpga_conn*,struct mlx5_cqe64*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;

__attribute__((used)) static inline void FUNC_8(struct mlx5_fpga_conn *VAR_0,
           unsigned int VAR_1)
{
 struct mlx5_cqe64 *VAR_2;

 while (VAR_1) {
  VAR_2 = FUNC_0(&VAR_0->cq.wq);
  if (!VAR_2)
   break;

  VAR_1--;
  FUNC_1(&VAR_0->cq.wq);
  FUNC_4(VAR_0, VAR_2);
  FUNC_2(&VAR_0->cq.wq);
 }
 if (!VAR_1) {
  FUNC_6(&VAR_0->cq.tasklet);
  return;
 }

 FUNC_5(VAR_0->fdev, "Re-arming CQ with cc# %u\n", VAR_0->cq.wq.cc);

 FUNC_7();
 FUNC_3(VAR_0);
}
