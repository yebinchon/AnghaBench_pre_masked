
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ ms_initializing; int ms_lock; TYPE_2__* ms_group; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_5__ {int mg_ms_initialize_lock; int mg_ms_initialize_cv; int mg_ms_initializing; } ;
typedef TYPE_2__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void
FUNC_5(metaslab_t *VAR_0)
{
 FUNC_0(!FUNC_1(&VAR_0->ms_lock));
 metaslab_group_t *VAR_1 = VAR_0->ms_group;
 FUNC_3(&VAR_1->mg_ms_initialize_lock);
 FUNC_3(&VAR_0->ms_lock);
 if (--VAR_0->ms_initializing == 0) {
  VAR_1->mg_ms_initializing--;
  FUNC_2(&VAR_1->mg_ms_initialize_cv);
 }
 FUNC_4(&VAR_0->ms_lock);
 FUNC_4(&VAR_1->mg_ms_initialize_lock);
}
