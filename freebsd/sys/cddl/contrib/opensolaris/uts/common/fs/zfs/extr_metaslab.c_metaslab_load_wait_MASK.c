
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ms_lock; int ms_load_cv; int ms_loaded; scalar_t__ ms_loading; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void
FUNC_3(metaslab_t *VAR_0)
{
 FUNC_0(FUNC_1(&VAR_0->ms_lock));

 while (VAR_0->ms_loading) {
  FUNC_0(!VAR_0->ms_loaded);
  FUNC_2(&VAR_0->ms_load_cv, &VAR_0->ms_lock);
 }
}
