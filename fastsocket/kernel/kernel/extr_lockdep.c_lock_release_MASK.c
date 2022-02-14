
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lockdep_map {int dummy; } ;
struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (struct lockdep_map*,int,unsigned long) ;
 int FUNC_1 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct lockdep_map *VAR_1, int VAR_2,
     unsigned long VAR_3)
{
 unsigned long VAR_4;

 FUNC_4(VAR_1, VAR_3);

 if (FUNC_5(VAR_0->lockdep_recursion))
  return;

 FUNC_3(VAR_4);
 FUNC_1(VAR_4);
 VAR_0->lockdep_recursion = 1;
 FUNC_0(VAR_1, VAR_2, VAR_3);
 VAR_0->lockdep_recursion = 0;
 FUNC_2(VAR_4);
}
