
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lockdep_map {int dummy; } ;
struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (struct lockdep_map*) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int) ;

int FUNC_5(struct lockdep_map *VAR_1)
{
 unsigned long VAR_2;
 int VAR_3 = 0;

 if (FUNC_4(VAR_0->lockdep_recursion))
  return VAR_3;

 FUNC_3(VAR_2);
 FUNC_1(VAR_2);

 VAR_0->lockdep_recursion = 1;
 VAR_3 = FUNC_0(VAR_1);
 VAR_0->lockdep_recursion = 0;
 FUNC_2(VAR_2);

 return VAR_3;
}
