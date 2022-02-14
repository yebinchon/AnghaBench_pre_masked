
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
struct mlx4_db_page {unsigned long* free; TYPE_4__ buf; TYPE_2__* prev; struct mlx4_db_page* next; int use_cnt; } ;
struct TYPE_5__ {int device; } ;
struct mlx4_context {int db_list_mutex; struct mlx4_db_page** db_list; TYPE_1__ ibv_ctx; } ;
typedef enum mlx4_db_type { ____Placeholder_mlx4_db_type } mlx4_db_type ;
struct TYPE_7__ {uintptr_t page_size; } ;
struct TYPE_6__ {struct mlx4_db_page* next; } ;


 int* VAR_0 ;
 int FUNC_0 (struct mlx4_db_page*) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__* FUNC_4 (int ) ;

void FUNC_5(struct mlx4_context *VAR_1, enum mlx4_db_type VAR_2, uint32_t *VAR_3)
{
 struct mlx4_db_page *VAR_4;
 uintptr_t VAR_5 = FUNC_4(VAR_1->ibv_ctx.device)->page_size;
 int VAR_6;

 FUNC_2(&VAR_1->db_list_mutex);

 for (VAR_4 = VAR_1->db_list[VAR_2]; VAR_4; VAR_4 = VAR_4->next)
  if (((uintptr_t) VAR_3 & ~(VAR_5 - 1)) == (uintptr_t) VAR_4->buf.buf)
   break;

 if (!VAR_4)
  goto out;

 VAR_6 = ((void *) VAR_3 - VAR_4->buf.buf) / VAR_0[VAR_2];
 VAR_4->free[VAR_6 / (8 * sizeof (long))] |= 1UL << (VAR_6 % (8 * sizeof (long)));

 if (!--VAR_4->use_cnt) {
  if (VAR_4->prev)
   VAR_4->prev->next = VAR_4->next;
  else
   VAR_1->db_list[VAR_2] = VAR_4->next;
  if (VAR_4->next)
   VAR_4->next->prev = VAR_4->prev;

  FUNC_1(&VAR_4->buf);
  FUNC_0(VAR_4);
 }

out:
 FUNC_3(&VAR_1->db_list_mutex);
}
