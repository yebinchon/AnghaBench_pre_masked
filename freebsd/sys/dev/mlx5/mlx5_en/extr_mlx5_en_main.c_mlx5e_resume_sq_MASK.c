
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq {int running; int cev_next_state; int ifp; scalar_t__ pc; scalar_t__ cc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct mlx5e_sq*,int ,int ) ;
 int FUNC_4 (struct mlx5e_sq*) ;

void
FUNC_5(struct mlx5e_sq *VAR_4)
{
 int VAR_5;


 if (FUNC_0(VAR_4->running) != 0)
  return;

 VAR_5 = FUNC_3(VAR_4, VAR_1,
     VAR_3);
 if (VAR_5 != 0) {
  FUNC_2(VAR_4->ifp,
      "mlx5e_modify_sq() from ERR to RST failed: %d\n", VAR_5);
 }

 VAR_4->cc = 0;
 VAR_4->pc = 0;


 FUNC_4(VAR_4);

 VAR_5 = FUNC_3(VAR_4, VAR_3,
     VAR_2);
 if (VAR_5 != 0) {
  FUNC_2(VAR_4->ifp,
      "mlx5e_modify_sq() from RST to RDY failed: %d\n", VAR_5);
 }

 VAR_4->cev_next_state = VAR_0;
 FUNC_1(VAR_4->running, 1);
}
