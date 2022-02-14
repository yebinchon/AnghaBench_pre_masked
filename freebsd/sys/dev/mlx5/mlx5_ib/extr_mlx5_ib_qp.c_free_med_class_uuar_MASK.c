
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_uuar_info {int * count; int bitmap; } ;


 int FUNC_0 (int,int ) ;

__attribute__((used)) static void FUNC_1(struct mlx5_uuar_info *VAR_0, int VAR_1)
{
 FUNC_0(VAR_1, VAR_0->bitmap);
 --VAR_0->count[VAR_1];
}
