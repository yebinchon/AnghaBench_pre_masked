
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_8__ {void* buf; } ;
struct mlx5_db_page {unsigned long* free; TYPE_4__ buf; TYPE_2__* prev; struct mlx5_db_page* next; int use_cnt; } ;
struct TYPE_5__ {int device; } ;
struct mlx5_context {int cache_line_size; int db_list_mutex; struct mlx5_db_page* db_list; TYPE_1__ ibv_ctx; } ;
struct TYPE_7__ {uintptr_t page_size; } ;
struct TYPE_6__ {struct mlx5_db_page* next; } ;


 int FUNC_0 (struct mlx5_db_page*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ) ;

void FUNC_5(struct mlx5_context *VAR_0, uint32_t *VAR_1)
{
 struct mlx5_db_page *VAR_2;
 uintptr_t VAR_3 = FUNC_4(VAR_0->ibv_ctx.device)->page_size;
 int VAR_4;

 FUNC_2(&VAR_0->db_list_mutex);

 for (VAR_2 = VAR_0->db_list; VAR_2; VAR_2 = VAR_2->next)
  if (((uintptr_t) VAR_1 & ~(VAR_3 - 1)) == (uintptr_t) VAR_2->buf.buf)
   break;

 if (!VAR_2)
  goto out;

 VAR_4 = ((void *) VAR_1 - VAR_2->buf.buf) / VAR_0->cache_line_size;
 VAR_2->free[VAR_4 / (8 * sizeof(long))] |= 1UL << (VAR_4 % (8 * sizeof(long)));

 if (!--VAR_2->use_cnt) {
  if (VAR_2->prev)
   VAR_2->prev->next = VAR_2->next;
  else
   VAR_0->db_list = VAR_2->next;
  if (VAR_2->next)
   VAR_2->next->prev = VAR_2->prev;

  FUNC_1(&VAR_2->buf);
  FUNC_0(VAR_2);
 }

out:
 FUNC_3(&VAR_0->db_list_mutex);
}
