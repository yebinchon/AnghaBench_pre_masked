
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ dp_dirty_total; int dp_lock; } ;
typedef TYPE_1__ dsl_pool_t ;
typedef int boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

boolean_t
FUNC_3(dsl_pool_t *VAR_3)
{
 uint64_t VAR_4 =
     VAR_1 * VAR_0 / 100;
 uint64_t VAR_5 =
     VAR_1 * VAR_2 / 100;
 boolean_t VAR_6;

 FUNC_0(&VAR_3->dp_lock);
 if (VAR_3->dp_dirty_total > VAR_5)
  FUNC_2(VAR_3);
 VAR_6 = (VAR_3->dp_dirty_total > VAR_4);
 FUNC_1(&VAR_3->dp_lock);
 return (VAR_6);
}
