
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int uaw_robust; int uaw_dir; struct TYPE_6__* uaw_next; struct TYPE_6__* uaw_prev; int uaw_next_result; TYPE_2__* uaw_avl; } ;
typedef TYPE_1__ uu_avl_walk_t ;
struct TYPE_7__ {TYPE_1__ ua_null_walk; scalar_t__ ua_debug; int ua_tree; } ;
typedef TYPE_2__ uu_avl_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_3(uu_avl_walk_t *VAR_2, uu_avl_t *VAR_3, uint32_t VAR_4)
{
 uu_avl_walk_t *VAR_5, *VAR_6;

 int VAR_7 = (VAR_4 & VAR_1);
 int VAR_8 = (VAR_4 & VAR_0)? -1 : 1;

 (void) FUNC_2(VAR_2, 0, sizeof (*VAR_2));
 VAR_2->uaw_avl = VAR_3;
 VAR_2->uaw_robust = VAR_7;
 VAR_2->uaw_dir = VAR_8;

 if (VAR_8 > 0)
  VAR_2->uaw_next_result = FUNC_0(&VAR_3->ua_tree);
 else
  VAR_2->uaw_next_result = FUNC_1(&VAR_3->ua_tree);

 if (VAR_3->ua_debug || VAR_7) {
  VAR_2->uaw_next = VAR_5 = &VAR_3->ua_null_walk;
  VAR_2->uaw_prev = VAR_6 = VAR_5->uaw_prev;
  VAR_5->uaw_prev = VAR_2;
  VAR_6->uaw_next = VAR_2;
 }
}
