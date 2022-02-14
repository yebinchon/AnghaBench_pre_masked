
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct mlx5_uuar_info*) ;

__attribute__((used)) static int FUNC_3(struct mlx5_uuar_info *VAR_0)
{
 int VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_1 = FUNC_2(VAR_0);
 for (VAR_3 = 0, VAR_2 = FUNC_0();; VAR_2 = FUNC_1(VAR_2)) {
  VAR_3++;
  if (VAR_3 == VAR_1)
   return FUNC_1(VAR_2);
 }

 return 0;
}
