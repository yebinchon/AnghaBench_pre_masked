
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct task_struct {unsigned int lockdep_depth; scalar_t__ curr_chain_key; struct held_lock* held_locks; } ;
struct lockdep_map {struct lock_class* class_cache; } ;
struct lock_class {int name_version; int name; int key; int ops; } ;
struct held_lock {int class_idx; int references; unsigned long acquire_ip; int trylock; int read; int check; int hardirqs_off; scalar_t__ prev_chain_key; int holdtime_stamp; scalar_t__ waittime_stamp; struct lockdep_map* nest_lock; struct lockdep_map* instance; } ;
typedef int atomic_t ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 (struct task_struct*) ;
 struct task_struct* VAR_4 ;
 int FUNC_2 (int *) ;
 int VAR_5 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (scalar_t__,unsigned int) ;
 struct lock_class* VAR_6 ;
 int FUNC_7 () ;
 int FUNC_8 (struct task_struct*,struct held_lock*) ;
 int FUNC_9 (struct task_struct*,struct held_lock*,int ) ;
 unsigned int VAR_7 ;
 int FUNC_10 (char*,...) ;
 int VAR_8 ;
 struct lock_class* FUNC_11 (struct lockdep_map*,unsigned int,int ) ;
 scalar_t__ FUNC_12 (struct task_struct*,struct held_lock*) ;
 scalar_t__ FUNC_13 (int) ;
 int FUNC_14 (struct task_struct*,struct lockdep_map*,struct held_lock*,int,scalar_t__) ;
 scalar_t__ FUNC_15 (struct lock_class*) ;

__attribute__((used)) static int FUNC_16(struct lockdep_map *VAR_9, unsigned int VAR_10,
     int VAR_11, int VAR_12, int VAR_13, int VAR_14,
     struct lockdep_map *VAR_15, unsigned long VAR_16,
     int VAR_17)
{
 struct task_struct *VAR_18 = VAR_4;
 struct lock_class *VAR_19 = ((void*)0);
 struct held_lock *VAR_20;
 unsigned int VAR_21, VAR_22;
 int VAR_23 = 0;
 int VAR_24;
 u64 VAR_25;

 if (!VAR_8)
  VAR_13 = 1;

 if (FUNC_13(!VAR_5))
  return 0;

 if (FUNC_0(!FUNC_5()))
  return 0;

 if (FUNC_13(VAR_10 >= VAR_2)) {
  FUNC_3();
  FUNC_10("BUG: MAX_LOCKDEP_SUBCLASSES too low!\n");
  FUNC_10("turning off the locking correctness validator.\n");
  FUNC_4();
  return 0;
 }

 if (!VAR_10)
  VAR_19 = VAR_9->class_cache;



 if (FUNC_13(!VAR_19)) {
  VAR_19 = FUNC_11(VAR_9, VAR_10, 0);
  if (!VAR_19)
   return 0;
 }
 FUNC_2((atomic_t *)&VAR_19->ops);
 if (FUNC_15(VAR_19)) {
  FUNC_10("\nacquire class [%p] %s", VAR_19->key, VAR_19->name);
  if (VAR_19->name_version > 1)
   FUNC_10("#%d", VAR_19->name_version);
  FUNC_10("\n");
  FUNC_4();
 }






 VAR_21 = VAR_18->lockdep_depth;
 if (FUNC_0(VAR_21 >= VAR_3))
  return 0;

 VAR_24 = VAR_19 - VAR_6 + 1;

 if (VAR_21) {
  VAR_20 = VAR_18->held_locks + VAR_21 - 1;
  if (VAR_20->class_idx == VAR_24 && VAR_15) {
   if (VAR_20->references)
    VAR_20->references++;
   else
    VAR_20->references = 2;

   return 1;
  }
 }

 VAR_20 = VAR_18->held_locks + VAR_21;
 if (FUNC_0(!VAR_19))
  return 0;
 VAR_20->class_idx = VAR_24;
 VAR_20->acquire_ip = VAR_16;
 VAR_20->instance = VAR_9;
 VAR_20->nest_lock = VAR_15;
 VAR_20->trylock = VAR_11;
 VAR_20->read = VAR_12;
 VAR_20->check = VAR_13;
 VAR_20->hardirqs_off = !!VAR_14;
 VAR_20->references = VAR_17;





 if (VAR_13 == 2 && !FUNC_8(VAR_18, VAR_20))
  return 0;


 if (!FUNC_9(VAR_18, VAR_20, VAR_0))
  return 0;
 VAR_22 = VAR_19 - VAR_6;
 if (FUNC_0(VAR_22 >= VAR_1))
  return 0;

 VAR_25 = VAR_18->curr_chain_key;
 if (!VAR_21) {
  if (FUNC_0(VAR_25 != 0))
   return 0;
  VAR_23 = 1;
 }

 VAR_20->prev_chain_key = VAR_25;
 if (FUNC_12(VAR_18, VAR_20)) {
  VAR_25 = 0;
  VAR_23 = 1;
 }
 VAR_25 = FUNC_6(VAR_25, VAR_22);

 if (!FUNC_14(VAR_18, VAR_9, VAR_20, VAR_23, VAR_25))
  return 0;

 VAR_18->curr_chain_key = VAR_25;
 VAR_18->lockdep_depth++;
 FUNC_1(VAR_18);




 if (FUNC_13(VAR_18->lockdep_depth >= VAR_3)) {
  FUNC_3();
  FUNC_10("BUG: MAX_LOCK_DEPTH too low!\n");
  FUNC_10("turning off the locking correctness validator.\n");
  FUNC_4();
  return 0;
 }

 if (FUNC_13(VAR_18->lockdep_depth > VAR_7))
  VAR_7 = VAR_18->lockdep_depth;

 return 1;
}
