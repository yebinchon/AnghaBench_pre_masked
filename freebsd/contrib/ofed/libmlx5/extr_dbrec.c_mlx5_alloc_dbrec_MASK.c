
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * buf; } ;
struct mlx5_db_page {scalar_t__ use_cnt; scalar_t__ num_db; unsigned long* free; TYPE_1__ buf; struct mlx5_db_page* next; } ;
struct mlx5_context {int cache_line_size; int db_list_mutex; struct mlx5_db_page* db_list; } ;


 struct mlx5_db_page* FUNC_0 (struct mlx5_context*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

uint32_t *FUNC_4(struct mlx5_context *VAR_0)
{
 struct mlx5_db_page *VAR_1;
 uint32_t *VAR_2 = ((void*)0);
 int VAR_3, VAR_4;

 FUNC_2(&VAR_0->db_list_mutex);

 for (VAR_1 = VAR_0->db_list; VAR_1; VAR_1 = VAR_1->next)
  if (VAR_1->use_cnt < VAR_1->num_db)
   goto found;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  goto out;

found:
 ++VAR_1->use_cnt;

 for (VAR_3 = 0; !VAR_1->free[VAR_3]; ++VAR_3)
               ;

 VAR_4 = FUNC_1(VAR_1->free[VAR_3]);
 --VAR_4;
 VAR_1->free[VAR_3] &= ~(1UL << VAR_4);
 VAR_2 = VAR_1->buf.buf + (VAR_3 * 8 * sizeof(long) + VAR_4) * VAR_0->cache_line_size;

out:
 FUNC_3(&VAR_0->db_list_mutex);

 return VAR_2;
}
