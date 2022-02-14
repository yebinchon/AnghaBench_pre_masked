
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ms_initializing; int ms_lock; TYPE_2__* ms_group; } ;
typedef TYPE_1__ metaslab_t ;
struct TYPE_7__ {int mg_ms_initialize_lock; int mg_ms_initialize_cv; int mg_initialize_updating; } ;
typedef TYPE_2__ metaslab_group_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_7(metaslab_t *VAR_2)
{
 FUNC_0(!FUNC_1(&VAR_2->ms_lock));
 metaslab_group_t *VAR_3 = VAR_2->ms_group;

 FUNC_3(&VAR_3->mg_ms_initialize_lock);
 FUNC_6(VAR_3);
 VAR_3->mg_initialize_updating = VAR_1;
 if (VAR_2->ms_initializing == 0) {
  FUNC_5(VAR_3);
 }
 FUNC_3(&VAR_2->ms_lock);
 VAR_2->ms_initializing++;
 FUNC_4(&VAR_2->ms_lock);

 VAR_3->mg_initialize_updating = VAR_0;
 FUNC_2(&VAR_3->mg_ms_initialize_cv);
 FUNC_4(&VAR_3->mg_ms_initialize_lock);
}
