
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_cmd {int alloc_lock; int bitmask; int * ent_mode; int ** ent_arr; } ;


 int VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct mlx5_cmd *VAR_1, int VAR_2)
{
 unsigned long VAR_3;

 FUNC_1(&VAR_1->alloc_lock, VAR_3);
 VAR_1->ent_arr[VAR_2] = ((void*)0);
 VAR_1->ent_mode[VAR_2] = VAR_0;
 FUNC_0(VAR_2, &VAR_1->bitmask);
 FUNC_2(&VAR_1->alloc_lock, VAR_3);
}
