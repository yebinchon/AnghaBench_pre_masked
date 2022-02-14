
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dd_myname; int dd_lock; struct TYPE_3__* dd_parent; } ;
typedef TYPE_1__ dsl_dir_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ) ;

int
FUNC_4(dsl_dir_t *VAR_0)
{
 int VAR_1 = 0;

 if (VAR_0->dd_parent) {

  VAR_1 = FUNC_4(VAR_0->dd_parent) + 1;
 }

 if (!FUNC_0(&VAR_0->dd_lock)) {

  FUNC_1(&VAR_0->dd_lock);
  VAR_1 += FUNC_3(VAR_0->dd_myname);
  FUNC_2(&VAR_0->dd_lock);
 } else {
  VAR_1 += FUNC_3(VAR_0->dd_myname);
 }

 return (VAR_1);
}
