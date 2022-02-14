
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx5_db_pgdir {scalar_t__ db_dma; scalar_t__* db_page; int bitmap; } ;
struct TYPE_2__ {struct mlx5_db_pgdir* pgdir; } ;
struct mlx5_db {int index; scalar_t__* db; scalar_t__ dma; TYPE_1__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(struct mlx5_db_pgdir *VAR_3,
        struct mlx5_db *VAR_4)
{
 int VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(VAR_3->bitmap, VAR_2);
 if (VAR_6 >= VAR_2)
  return -VAR_0;

 FUNC_0(VAR_6, VAR_3->bitmap);

 VAR_4->u.pgdir = VAR_3;
 VAR_4->index = VAR_6;
 VAR_5 = VAR_4->index * VAR_1;
 VAR_4->db = VAR_3->db_page + VAR_5 / sizeof(*VAR_3->db_page);
 VAR_4->dma = VAR_3->db_dma + VAR_5;

 VAR_4->db[0] = 0;
 VAR_4->db[1] = 0;

 return 0;
}
