
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lockdep_map {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct TYPE_3__ {int lockdep_recursion; } ;


 scalar_t__ FUNC_0 (struct lockdep_map*,char const*,struct lock_class_key*,unsigned int,unsigned long) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (unsigned long) ;
 TYPE_1__* VAR_0 ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (unsigned long) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct lockdep_map *VAR_1, const char *VAR_2,
      struct lock_class_key *VAR_3, unsigned int VAR_4,
      unsigned long VAR_5)
{
 unsigned long VAR_6;

 if (FUNC_5(VAR_0->lockdep_recursion))
  return;

 FUNC_4(VAR_6);
 VAR_0->lockdep_recursion = 1;
 FUNC_2(VAR_6);
 if (FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
  FUNC_1(VAR_0);
 VAR_0->lockdep_recursion = 0;
 FUNC_3(VAR_6);
}
