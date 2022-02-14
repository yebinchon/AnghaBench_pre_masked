
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int lockdep_depth; struct held_lock* held_locks; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {int dummy; } ;


 struct task_struct* VAR_0 ;
 scalar_t__ FUNC_0 (struct held_lock*,struct lockdep_map*) ;

__attribute__((used)) static int FUNC_1(struct lockdep_map *VAR_1)
{
 struct task_struct *VAR_2 = VAR_0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2->lockdep_depth; VAR_3++) {
  struct held_lock *VAR_4 = VAR_2->held_locks + VAR_3;

  if (FUNC_0(VAR_4, VAR_1))
   return 1;
 }

 return 0;
}
