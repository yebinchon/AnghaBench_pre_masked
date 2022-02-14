
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ d64; int d32; } ;
struct mlx5e_sq {scalar_t__ cev_counter; TYPE_1__ doorbell; int lock; } ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct mlx5e_sq*,int) ;
 int FUNC_3 (struct mlx5e_sq*,int) ;
 int FUNC_4 (struct mlx5e_sq*,int ,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void
FUNC_8(struct mlx5e_sq *VAR_0, int VAR_1)
{

 while (VAR_0->cev_counter != 0) {
  while (!FUNC_3(VAR_0, 1)) {
   if (VAR_1 != 0) {
    FUNC_7(&VAR_0->lock);
    FUNC_5(4);
    FUNC_6(&VAR_0->lock);
   } else {
    goto done;
   }
  }

  FUNC_2(VAR_0, 1);
  FUNC_0();
 }
done:

 if (FUNC_1(VAR_0->doorbell.d64 != 0)) {
  FUNC_4(VAR_0, VAR_0->doorbell.d32, 0);
  VAR_0->doorbell.d64 = 0;
 }
}
