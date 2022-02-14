
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ms_load_cv; scalar_t__ ms_loading; scalar_t__ ms_loaded; int ms_lock; } ;
typedef TYPE_1__ metaslab_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;

int
FUNC_6(metaslab_t *VAR_2)
{
 FUNC_0(FUNC_1(&VAR_2->ms_lock));





 FUNC_5(VAR_2);
 if (VAR_2->ms_loaded)
  return (0);
 FUNC_2(!VAR_2->ms_loading);

 VAR_2->ms_loading = VAR_1;
 int VAR_3 = FUNC_4(VAR_2);
 VAR_2->ms_loading = VAR_0;
 FUNC_3(&VAR_2->ms_load_cv);

 return (VAR_3);
}
