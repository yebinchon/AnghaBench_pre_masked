
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int timestruc_t ;
struct TYPE_3__ {int dd_lock; int dd_snap_cmtime; } ;
typedef TYPE_1__ dsl_dir_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(dsl_dir_t *VAR_0)
{
 timestruc_t VAR_1;

 FUNC_0(&VAR_1);
 FUNC_1(&VAR_0->dd_lock);
 VAR_0->dd_snap_cmtime = VAR_1;
 FUNC_2(&VAR_0->dd_lock);
}
