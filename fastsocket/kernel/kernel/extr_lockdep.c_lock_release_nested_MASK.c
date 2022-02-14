
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct task_struct {int lockdep_depth; scalar_t__ curr_chain_key; struct held_lock* held_locks; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {scalar_t__ prev_chain_key; scalar_t__ irq_context; scalar_t__ acquire_ip; scalar_t__ class_idx; scalar_t__ references; struct lockdep_map* instance; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct held_lock*) ;
 int FUNC_2 (struct task_struct*,struct lockdep_map*,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct task_struct *VAR_0,
          struct lockdep_map *VAR_1, unsigned long VAR_2)
{
 struct held_lock *VAR_3;
 unsigned int VAR_4;




 VAR_4 = VAR_0->lockdep_depth - 1;
 VAR_3 = VAR_0->held_locks + VAR_4;




 if (VAR_3->instance != VAR_1 || VAR_3->references)
  return FUNC_2(VAR_0, VAR_1, VAR_2);
 VAR_0->lockdep_depth--;

 if (FUNC_0(!VAR_4 && (VAR_3->prev_chain_key != 0)))
  return 0;

 VAR_0->curr_chain_key = VAR_3->prev_chain_key;

 FUNC_1(VAR_3);







 return 1;
}
