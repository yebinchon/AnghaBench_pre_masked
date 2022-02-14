
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ d64; int d32; } ;
struct mlx5e_sq {scalar_t__ cev_next_state; int cev_factor; TYPE_1__ doorbell; int running; } ;
struct mbuf {int dummy; } ;
struct ifnet {int if_drv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mbuf*) ;
 int FUNC_3 (struct mlx5e_sq*) ;
 scalar_t__ FUNC_4 (struct mlx5e_sq*,struct mbuf**) ;
 int FUNC_5 (struct mlx5e_sq*,int ,int ) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct ifnet *VAR_5, struct mlx5e_sq *VAR_6, struct mbuf *VAR_7)
{
 int VAR_8 = 0;

 if (FUNC_6((VAR_5->if_drv_flags & VAR_2) == 0 ||
     FUNC_0(VAR_6->running) == 0)) {
  FUNC_2(VAR_7);
  return (VAR_0);
 }


 if (FUNC_4(VAR_6, &VAR_7) != 0) {

  FUNC_2(VAR_7);
  VAR_8 = VAR_1;
 }


 if (FUNC_1(VAR_6->doorbell.d64 != 0)) {
  FUNC_5(VAR_6, VAR_6->doorbell.d32, 0);
  VAR_6->doorbell.d64 = 0;
 }





 if (FUNC_6(VAR_6->cev_next_state == VAR_4 &&
     VAR_6->cev_factor != 1)) {

  FUNC_3(VAR_6);
 } else {

  VAR_6->cev_next_state = VAR_3;
 }
 return (VAR_8);
}
