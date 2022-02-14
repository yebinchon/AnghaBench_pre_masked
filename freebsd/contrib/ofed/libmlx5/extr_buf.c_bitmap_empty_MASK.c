
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_bitmap {scalar_t__ avail; scalar_t__ max; } ;



__attribute__((used)) static int FUNC_0(struct mlx5_bitmap *VAR_0)
{
 return (VAR_0->avail == VAR_0->max) ? 1 : 0;
}
