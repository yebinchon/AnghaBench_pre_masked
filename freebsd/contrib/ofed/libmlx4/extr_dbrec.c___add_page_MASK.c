
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_db_page {int num_db; struct mlx4_db_page* prev; struct mlx4_db_page* next; int * free; scalar_t__ use_cnt; int buf; } ;
struct TYPE_3__ {int device; } ;
struct mlx4_context {struct mlx4_db_page** db_list; TYPE_1__ ibv_ctx; } ;
typedef enum mlx4_db_type { ____Placeholder_mlx4_db_type } mlx4_db_type ;
struct TYPE_4__ {int page_size; } ;


 int* VAR_0 ;
 int FUNC_0 (struct mlx4_db_page*) ;
 struct mlx4_db_page* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static struct mlx4_db_page *FUNC_4(struct mlx4_context *VAR_1,
           enum mlx4_db_type VAR_2)
{
 struct mlx4_db_page *VAR_3;
 int VAR_4 = FUNC_3(VAR_1->ibv_ctx.device)->page_size;
 int VAR_5;
 int VAR_6;

 VAR_5 = VAR_4 / VAR_0[VAR_2];

 VAR_3 = FUNC_1(sizeof *VAR_3 + VAR_5 / 8);
 if (!VAR_3)
  return ((void*)0);

 if (FUNC_2(&VAR_3->buf, VAR_4, VAR_4)) {
  FUNC_0(VAR_3);
  return ((void*)0);
 }

 VAR_3->num_db = VAR_5;
 VAR_3->use_cnt = 0;
 for (VAR_6 = 0; VAR_6 < VAR_5 / (sizeof (long) * 8); ++VAR_6)
  VAR_3->free[VAR_6] = ~0;

 VAR_3->prev = ((void*)0);
 VAR_3->next = VAR_1->db_list[VAR_2];
 VAR_1->db_list[VAR_2] = VAR_3;
 if (VAR_3->next)
  VAR_3->next->prev = VAR_3;

 return VAR_3;
}
