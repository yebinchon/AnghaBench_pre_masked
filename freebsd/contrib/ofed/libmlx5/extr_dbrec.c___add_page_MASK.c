
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_db_page {int num_db; struct mlx5_db_page* prev; struct mlx5_db_page* next; int * free; scalar_t__ use_cnt; int buf; } ;
struct TYPE_3__ {int device; } ;
struct mlx5_context {int cache_line_size; struct mlx5_db_page* db_list; TYPE_1__ ibv_ctx; } ;
struct TYPE_4__ {int page_size; } ;


 int FUNC_0 (struct mlx5_db_page*) ;
 struct mlx5_db_page* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 TYPE_2__* FUNC_3 (int ) ;

__attribute__((used)) static struct mlx5_db_page *FUNC_4(struct mlx5_context *VAR_0)
{
 struct mlx5_db_page *VAR_1;
 int VAR_2 = FUNC_3(VAR_0->ibv_ctx.device)->page_size;
 int VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_3 = VAR_2 / VAR_0->cache_line_size;
 VAR_5 = (VAR_3 + 8 * sizeof(long) - 1) / (8 * sizeof(long));

 VAR_1 = FUNC_1(sizeof *VAR_1 + VAR_5 * sizeof(long));
 if (!VAR_1)
  return ((void*)0);

 if (FUNC_2(&VAR_1->buf, VAR_2, VAR_2)) {
  FUNC_0(VAR_1);
  return ((void*)0);
 }

 VAR_1->num_db = VAR_3;
 VAR_1->use_cnt = 0;
 for (VAR_4 = 0; VAR_4 < VAR_5; ++VAR_4)
  VAR_1->free[VAR_4] = ~0;

 VAR_1->prev = ((void*)0);
 VAR_1->next = VAR_0->db_list;
 VAR_0->db_list = VAR_1;
 if (VAR_1->next)
  VAR_1->next->prev = VAR_1;

 return VAR_1;
}
