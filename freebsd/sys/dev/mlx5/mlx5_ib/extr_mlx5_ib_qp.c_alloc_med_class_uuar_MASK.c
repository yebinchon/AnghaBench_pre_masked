
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {scalar_t__* count; } ;


 int FUNC_0 (struct mlx5_uuar_info*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct mlx5_uuar_info *VAR_0)
{
 int VAR_1 = FUNC_1();
 int VAR_2;

 for (VAR_2 = FUNC_1(); VAR_2 < FUNC_0(VAR_0); VAR_2 = FUNC_2(VAR_2)) {
  if (VAR_0->count[VAR_2] < VAR_0->count[VAR_1])
   VAR_1 = VAR_2;
 }

 VAR_0->count[VAR_1]++;
 return VAR_1;
}
