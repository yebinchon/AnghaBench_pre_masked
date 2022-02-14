
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx4_ib_ucontext {int db_page_mutex; } ;
struct TYPE_3__ {TYPE_2__* user_page; } ;
struct mlx4_db {TYPE_1__ u; } ;
struct TYPE_4__ {int umem; int list; int refcnt; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct mlx4_ib_ucontext *VAR_0, struct mlx4_db *VAR_1)
{
 FUNC_3(&VAR_0->db_page_mutex);

 if (!--VAR_1->u.user_page->refcnt) {
  FUNC_2(&VAR_1->u.user_page->list);
  FUNC_0(VAR_1->u.user_page->umem);
  FUNC_1(VAR_1->u.user_page);
 }

 FUNC_4(&VAR_0->db_page_mutex);
}
