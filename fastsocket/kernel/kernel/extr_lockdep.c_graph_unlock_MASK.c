
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lockdep_recursion; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline int FUNC_3(void)
{
 if (VAR_1 && !FUNC_1(&VAR_2))
  return FUNC_0(1);

 VAR_0->lockdep_recursion--;
 FUNC_2(&VAR_2);
 return 0;
}
