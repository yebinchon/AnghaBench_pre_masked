
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct thread {int td_name; TYPE_1__* td_proc; int td_tid; } ;
struct lock_object {int dummy; } ;
struct lock_class {uintptr_t (* lc_unlock ) (struct lock_object*) ;int lc_flags; int (* lc_lock ) (struct lock_object*,uintptr_t) ;} ;
typedef int sbintime_t ;
struct TYPE_6__ {struct lock_object lock_object; } ;
struct TYPE_5__ {int p_pid; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,char const*,void*) ;
 int FUNC_1 () ;
 TYPE_2__ VAR_0 ;
 int FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct lock_class* FUNC_4 (struct lock_object*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 () ;
 int VAR_8 ;
 scalar_t__ FUNC_6 (struct thread*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_7 (struct thread*) ;
 int FUNC_8 (struct thread*) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_9 (struct lock_object*,int ) ;
 int FUNC_10 (struct lock_object*,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,struct lock_object*,char*,char const*) ;
 struct thread* VAR_14 ;
 int FUNC_13 (int,int ,char const*) ;
 int VAR_15 ;
 int FUNC_14 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_15 (TYPE_2__*) ;
 int * VAR_16 ;
 int FUNC_16 (void*,struct lock_object*,char const*,int,int ) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*) ;
 int FUNC_19 (void*,int ,int ,int) ;
 int FUNC_20 (void*,int) ;
 int FUNC_21 (void*,int) ;
 int FUNC_22 (void*,int) ;
 int FUNC_23 (void*,int) ;
 uintptr_t FUNC_24 (struct lock_object*) ;
 uintptr_t FUNC_25 (struct lock_object*) ;
 uintptr_t FUNC_26 (struct lock_object*) ;
 int FUNC_27 (struct lock_object*,uintptr_t) ;

int
FUNC_28(void *VAR_17, struct lock_object *VAR_18, int VAR_19,
    const char *VAR_20, sbintime_t VAR_21, sbintime_t VAR_22, int VAR_23)
{
 struct thread *VAR_24;
 struct lock_class *VAR_25;
 uintptr_t VAR_26;
 int VAR_27, VAR_28, VAR_29, VAR_30;
 FUNC_11(VAR_15);

 VAR_24 = VAR_14;




 FUNC_12(VAR_12 | VAR_13, VAR_18,
     "Sleeping on \"%s\"", VAR_20);
 FUNC_2(VAR_21 != 0 || FUNC_15(&VAR_0) || VAR_18 != ((void*)0),
     ("sleeping without a lock"));
 FUNC_2(VAR_17 != ((void*)0), ("_sleep: NULL ident"));
 FUNC_2(FUNC_7(VAR_24), ("_sleep: curthread not running"));
 if (VAR_19 & VAR_7)
  FUNC_2(VAR_18 != ((void*)0) && VAR_18 != &VAR_0.lock_object,
      ("PDROP requires a non-Giant lock"));
 if (VAR_18 != ((void*)0))
  VAR_25 = FUNC_4(VAR_18);
 else
  VAR_25 = ((void*)0);

 if (FUNC_6(VAR_24)) {
  if (VAR_18 != ((void*)0) && VAR_19 & VAR_7)
   VAR_25->lc_unlock(VAR_18);
  return (0);
 }
 VAR_27 = VAR_19 & VAR_6;
 VAR_28 = VAR_19 & VAR_8;

 FUNC_2(!FUNC_8(VAR_24), ("recursive sleep"));

 if ((uint8_t *)VAR_17 >= &VAR_16[0] &&
     (uint8_t *)VAR_17 <= &VAR_16[VAR_4 - 1])
  VAR_30 = VAR_10;
 else
  VAR_30 = VAR_11;
 if (VAR_27)
  VAR_30 |= VAR_9;

 FUNC_17(VAR_17);
 FUNC_0(VAR_2, "sleep: thread %ld (pid %ld, %s) on %s (%p)",
     VAR_24->td_tid, VAR_24->td_proc->p_pid, VAR_24->td_name, VAR_20, VAR_17);

 if (VAR_18 == &VAR_0.lock_object)
  FUNC_14(&VAR_0, VAR_5);
 FUNC_1();
 if (VAR_18 != ((void*)0) && VAR_18 != &VAR_0.lock_object &&
     !(VAR_25->lc_flags & VAR_3)) {
  FUNC_10(VAR_18, VAR_15);
  VAR_26 = VAR_25->lc_unlock(VAR_18);
 } else

  VAR_26 = -1;
 FUNC_16(VAR_17, VAR_18, VAR_20, VAR_30, 0);
 if (VAR_21 != 0)
  FUNC_19(VAR_17, VAR_21, VAR_22, VAR_23);
 if (VAR_18 != ((void*)0) && VAR_25->lc_flags & VAR_3) {
  FUNC_18(VAR_17);
  FUNC_10(VAR_18, VAR_15);
  VAR_26 = VAR_25->lc_unlock(VAR_18);
  FUNC_17(VAR_17);
 }
 if (VAR_21 != 0 && VAR_27)
  VAR_29 = FUNC_21(VAR_17, VAR_28);
 else if (VAR_21 != 0)
  VAR_29 = FUNC_20(VAR_17, VAR_28);
 else if (VAR_27)
  VAR_29 = FUNC_23(VAR_17, VAR_28);
 else {
  FUNC_22(VAR_17, VAR_28);
  VAR_29 = 0;
 }




 FUNC_5();
 if (VAR_18 != ((void*)0) && VAR_18 != &VAR_0.lock_object && !(VAR_19 & VAR_7)) {
  VAR_25->lc_lock(VAR_18, VAR_26);
  FUNC_9(VAR_18, VAR_15);
 }
 return (VAR_29);
}
