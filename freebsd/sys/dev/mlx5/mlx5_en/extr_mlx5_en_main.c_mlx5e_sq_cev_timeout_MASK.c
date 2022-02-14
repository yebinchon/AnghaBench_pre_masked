
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5e_sq {int cev_next_state; int cev_callout; int cev_counter; int lock; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (int *,int ,void (*) (void*),struct mlx5e_sq*) ;
 int VAR_2 ;
 int FUNC_1 (struct mlx5e_sq*,int ) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(void *VAR_3)
{
 struct mlx5e_sq *VAR_4 = VAR_3;

 FUNC_2(&VAR_4->lock, VAR_0);


 switch (VAR_4->cev_next_state) {
 case 128:

  FUNC_1(VAR_4, 0);


  if (VAR_4->cev_counter == 0) {
   VAR_4->cev_next_state = VAR_1;
   return;
  }
  break;
 default:

  VAR_4->cev_next_state = 128;
  break;
 }


 FUNC_0(&VAR_4->cev_callout, VAR_2, FUNC_3, VAR_4);
}
