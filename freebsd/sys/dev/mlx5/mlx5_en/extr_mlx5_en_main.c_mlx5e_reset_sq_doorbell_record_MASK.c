
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ d64; void** d32; } ;
struct mlx5e_sq {int sqn; TYPE_1__ doorbell; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct mlx5e_sq*,void**,int ) ;

__attribute__((used)) static void
FUNC_2(struct mlx5e_sq *VAR_1)
{

 VAR_1->doorbell.d32[0] = FUNC_0(VAR_0);
 VAR_1->doorbell.d32[1] = FUNC_0(VAR_1->sqn << 8);
 FUNC_1(VAR_1, VAR_1->doorbell.d32, 0);
 VAR_1->doorbell.d64 = 0;
}
