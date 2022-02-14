
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {scalar_t__ lockdep_depth; } ;
struct lockdep_map {int dummy; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct task_struct *VAR_1, struct lockdep_map *VAR_2,
   unsigned long VAR_3)
{
 if (FUNC_3(!VAR_0))
  return 0;
 if (FUNC_0(!FUNC_1()))
  return 0;

 if (VAR_1->lockdep_depth <= 0)
  return FUNC_2(VAR_1, VAR_2, VAR_3);

 return 1;
}
