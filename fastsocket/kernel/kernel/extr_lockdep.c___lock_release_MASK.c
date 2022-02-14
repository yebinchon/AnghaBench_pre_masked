
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int dummy; } ;
struct lockdep_map {int dummy; } ;


 int FUNC_0 (struct task_struct*) ;
 int FUNC_1 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 struct task_struct* VAR_0 ;
 int FUNC_2 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 int FUNC_3 (struct task_struct*,struct lockdep_map*,unsigned long) ;

__attribute__((used)) static void
FUNC_4(struct lockdep_map *VAR_1, int VAR_2, unsigned long VAR_3)
{
 struct task_struct *VAR_4 = VAR_0;

 if (!FUNC_1(VAR_4, VAR_1, VAR_3))
  return;

 if (VAR_2) {
  if (!FUNC_2(VAR_4, VAR_1, VAR_3))
   return;
 } else {
  if (!FUNC_3(VAR_4, VAR_1, VAR_3))
   return;
 }

 FUNC_0(VAR_4);
}
