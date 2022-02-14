
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_9__ {int sa_num_attrs; int sa_lock; } ;
typedef TYPE_2__ sa_os_t ;
struct TYPE_10__ {struct TYPE_10__* sa_idx_tab; int sa_refcount; TYPE_1__* sa_layout; struct TYPE_10__* sa_variable_lengths; } ;
typedef TYPE_3__ sa_idx_tab_t ;
struct TYPE_11__ {TYPE_2__* os_sa; } ;
typedef TYPE_4__ objset_t ;
struct TYPE_8__ {int lot_var_sizes; int lot_idx_tab; } ;


 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int *,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;

__attribute__((used)) static void
FUNC_6(objset_t *VAR_0, void *VAR_1)
{
 sa_os_t *VAR_2 = VAR_0->os_sa;
 sa_idx_tab_t *VAR_3 = VAR_1;

 if (VAR_3 == ((void*)0))
  return;

 FUNC_2(&VAR_2->sa_lock);
 if (FUNC_5(&VAR_3->sa_refcount, ((void*)0)) == 0) {
  FUNC_1(&VAR_3->sa_layout->lot_idx_tab, VAR_3);
  if (VAR_3->sa_variable_lengths)
   FUNC_0(VAR_3->sa_variable_lengths,
       sizeof (uint16_t) *
       VAR_3->sa_layout->lot_var_sizes);
  FUNC_4(&VAR_3->sa_refcount);
  FUNC_0(VAR_3->sa_idx_tab,
      sizeof (uint32_t) * VAR_2->sa_num_attrs);
  FUNC_0(VAR_3, sizeof (sa_idx_tab_t));
 }
 FUNC_3(&VAR_2->sa_lock);
}
