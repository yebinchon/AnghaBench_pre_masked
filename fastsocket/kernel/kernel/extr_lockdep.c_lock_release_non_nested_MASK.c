
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct task_struct {unsigned int lockdep_depth; struct held_lock* held_locks; int curr_chain_key; } ;
struct lockdep_map {int dummy; } ;
struct held_lock {scalar_t__ irq_context; scalar_t__ references; int acquire_ip; int nest_lock; int hardirqs_off; int check; int read; int trylock; struct lockdep_map* instance; int prev_chain_key; } ;
struct TYPE_2__ {int subclass; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct lockdep_map*,int ,int ,int ,int ,int ,int ,int ,scalar_t__) ;
 TYPE_1__* FUNC_2 (struct held_lock*) ;
 int FUNC_3 (struct held_lock*) ;
 scalar_t__ FUNC_4 (struct held_lock*,struct lockdep_map*) ;
 int FUNC_5 (struct task_struct*,struct lockdep_map*,unsigned long) ;

__attribute__((used)) static int
FUNC_6(struct task_struct *VAR_0,
   struct lockdep_map *VAR_1, unsigned long VAR_2)
{
 struct held_lock *VAR_3, *VAR_4;
 unsigned int VAR_5;
 int VAR_6;





 VAR_5 = VAR_0->lockdep_depth;
 if (FUNC_0(!VAR_5))
  return 0;

 VAR_4 = ((void*)0);
 for (VAR_6 = VAR_5-1; VAR_6 >= 0; VAR_6--) {
  VAR_3 = VAR_0->held_locks + VAR_6;



  if (VAR_4 && VAR_4->irq_context != VAR_3->irq_context)
   break;
  if (FUNC_4(VAR_3, VAR_1))
   goto found_it;
  VAR_4 = VAR_3;
 }
 return FUNC_5(VAR_0, VAR_1, VAR_2);

found_it:
 if (VAR_3->instance == VAR_1)
  FUNC_3(VAR_3);

 if (VAR_3->references) {
  VAR_3->references--;
  if (VAR_3->references) {





   return 1;
  }
 }







 VAR_0->lockdep_depth = VAR_6;
 VAR_0->curr_chain_key = VAR_3->prev_chain_key;

 for (VAR_6++; VAR_6 < VAR_5; VAR_6++) {
  VAR_3 = VAR_0->held_locks + VAR_6;
  if (!FUNC_1(VAR_3->instance,
   FUNC_2(VAR_3)->subclass, VAR_3->trylock,
    VAR_3->read, VAR_3->check, VAR_3->hardirqs_off,
    VAR_3->nest_lock, VAR_3->acquire_ip,
    VAR_3->references))
   return 0;
 }

 if (FUNC_0(VAR_0->lockdep_depth != VAR_5 - 1))
  return 0;
 return 1;
}
