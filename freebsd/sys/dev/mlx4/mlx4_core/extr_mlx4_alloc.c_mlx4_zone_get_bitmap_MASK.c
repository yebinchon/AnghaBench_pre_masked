
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx4_zone_entry {struct mlx4_bitmap* bitmap; } ;
struct mlx4_zone_allocator {int lock; } ;
struct mlx4_bitmap {int dummy; } ;


 struct mlx4_zone_entry* FUNC_0 (struct mlx4_zone_allocator*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct mlx4_bitmap *FUNC_3(struct mlx4_zone_allocator *VAR_0, u32 VAR_1)
{
 struct mlx4_zone_entry *VAR_2;
 struct mlx4_bitmap *VAR_3;

 FUNC_1(&VAR_0->lock);

 VAR_2 = FUNC_0(VAR_0, VAR_1);

 VAR_3 = VAR_2 == ((void*)0) ? ((void*)0) : VAR_2->bitmap;

 FUNC_2(&VAR_0->lock);

 return VAR_3;
}
