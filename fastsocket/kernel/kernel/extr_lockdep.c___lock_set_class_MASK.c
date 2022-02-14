
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned int lockdep_depth; struct held_lock* held_locks; int curr_chain_key; } ;
struct lockdep_map {int dummy; } ;
struct lock_class_key {int dummy; } ;
struct lock_class {int dummy; } ;
struct held_lock {scalar_t__ irq_context; int class_idx; int references; int acquire_ip; int nest_lock; int hardirqs_off; int check; int read; int trylock; int instance; int prev_chain_key; } ;
struct TYPE_2__ {int subclass; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 struct task_struct* VAR_0 ;
 TYPE_1__* FUNC_2 (struct held_lock*) ;
 struct lock_class* VAR_1 ;
 int FUNC_3 (struct lockdep_map*,char const*,struct lock_class_key*,int ) ;
 scalar_t__ FUNC_4 (struct held_lock*,struct lockdep_map*) ;
 int FUNC_5 (struct task_struct*,struct lockdep_map*,unsigned long) ;
 struct lock_class* FUNC_6 (struct lockdep_map*,unsigned int,int ) ;

__attribute__((used)) static int
FUNC_7(struct lockdep_map *VAR_2, const char *VAR_3,
   struct lock_class_key *VAR_4, unsigned int VAR_5,
   unsigned long VAR_6)
{
 struct task_struct *VAR_7 = VAR_0;
 struct held_lock *VAR_8, *VAR_9;
 struct lock_class *VAR_10;
 unsigned int VAR_11;
 int VAR_12;

 VAR_11 = VAR_7->lockdep_depth;
 if (FUNC_0(!VAR_11))
  return 0;

 VAR_9 = ((void*)0);
 for (VAR_12 = VAR_11-1; VAR_12 >= 0; VAR_12--) {
  VAR_8 = VAR_7->held_locks + VAR_12;



  if (VAR_9 && VAR_9->irq_context != VAR_8->irq_context)
   break;
  if (FUNC_4(VAR_8, VAR_2))
   goto found_it;
  VAR_9 = VAR_8;
 }
 return FUNC_5(VAR_7, VAR_2, VAR_6);

found_it:
 FUNC_3(VAR_2, VAR_3, VAR_4, 0);
 VAR_10 = FUNC_6(VAR_2, VAR_5, 0);
 VAR_8->class_idx = VAR_10 - VAR_1 + 1;

 VAR_7->lockdep_depth = VAR_12;
 VAR_7->curr_chain_key = VAR_8->prev_chain_key;

 for (; VAR_12 < VAR_11; VAR_12++) {
  VAR_8 = VAR_7->held_locks + VAR_12;
  if (!FUNC_1(VAR_8->instance,
   FUNC_2(VAR_8)->subclass, VAR_8->trylock,
    VAR_8->read, VAR_8->check, VAR_8->hardirqs_off,
    VAR_8->nest_lock, VAR_8->acquire_ip,
    VAR_8->references))
   return 0;
 }

 if (FUNC_0(VAR_7->lockdep_depth != VAR_11))
  return 0;
 return 1;
}
