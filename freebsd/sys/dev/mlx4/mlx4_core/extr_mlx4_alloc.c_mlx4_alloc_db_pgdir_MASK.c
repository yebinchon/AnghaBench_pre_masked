
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx4_db_pgdir {int db_page; int db_dma; int order1; int * bits; int order0; } ;
struct device {int dummy; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct device*,int ,int *,int ) ;
 int FUNC_2 (struct mlx4_db_pgdir*) ;
 struct mlx4_db_pgdir* FUNC_3 (int,int ) ;

__attribute__((used)) static struct mlx4_db_pgdir *FUNC_4(struct device *VAR_2,
       gfp_t VAR_3)
{
 struct mlx4_db_pgdir *VAR_4;

 VAR_4 = FUNC_3(sizeof *VAR_4, VAR_3);
 if (!VAR_4)
  return ((void*)0);

 FUNC_0(VAR_4->order1, VAR_0 / 2);
 VAR_4->bits[0] = VAR_4->order0;
 VAR_4->bits[1] = VAR_4->order1;
 VAR_4->db_page = FUNC_1(VAR_2, VAR_1,
         &VAR_4->db_dma, VAR_3);
 if (!VAR_4->db_page) {
  FUNC_2(VAR_4);
  return ((void*)0);
 }

 return VAR_4;
}
