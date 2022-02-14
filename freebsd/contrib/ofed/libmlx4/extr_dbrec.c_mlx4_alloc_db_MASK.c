
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int * buf; } ;
struct mlx4_db_page {scalar_t__ use_cnt; scalar_t__ num_db; unsigned long* free; TYPE_1__ buf; struct mlx4_db_page* next; } ;
struct mlx4_context {int db_list_mutex; struct mlx4_db_page** db_list; } ;
typedef enum mlx4_db_type { ____Placeholder_mlx4_db_type } mlx4_db_type ;


 struct mlx4_db_page* FUNC_0 (struct mlx4_context*,int) ;
 int* VAR_0 ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

uint32_t *FUNC_4(struct mlx4_context *VAR_1, enum mlx4_db_type VAR_2)
{
 struct mlx4_db_page *VAR_3;
 uint32_t *VAR_4 = ((void*)0);
 int VAR_5, VAR_6;

 FUNC_2(&VAR_1->db_list_mutex);

 for (VAR_3 = VAR_1->db_list[VAR_2]; VAR_3; VAR_3 = VAR_3->next)
  if (VAR_3->use_cnt < VAR_3->num_db)
   goto found;

 VAR_3 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_3)
  goto out;

found:
 ++VAR_3->use_cnt;

 for (VAR_5 = 0; !VAR_3->free[VAR_5]; ++VAR_5)
               ;

 VAR_6 = FUNC_1(VAR_3->free[VAR_5]);
 VAR_3->free[VAR_5] &= ~(1UL << (VAR_6 - 1));
 VAR_4 = VAR_3->buf.buf + (VAR_5 * 8 * sizeof (long) + (VAR_6 - 1)) * VAR_0[VAR_2];

out:
 FUNC_3(&VAR_1->db_list_mutex);

 return VAR_4;
}
