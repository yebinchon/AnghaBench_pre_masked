
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thread {int td_name; TYPE_1__* td_proc; int td_tid; } ;
struct mtx {int lock_object; } ;
typedef int sbintime_t ;
struct TYPE_2__ {int p_pid; } ;


 int FUNC_0 (int ,char*,int ,int ,int ,char const*,void*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (struct thread*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (struct thread*) ;
 int VAR_4 ;
 int FUNC_6 (struct thread*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (int *,struct mtx*) ;
 int FUNC_8 (int *,struct mtx*) ;
 int FUNC_9 (struct mtx*) ;
 int FUNC_10 (int,int *,char*,char const*) ;
 struct thread* VAR_7 ;
 int FUNC_11 (int,int ,char const*) ;
 int FUNC_12 (struct mtx*,int) ;
 int FUNC_13 (struct mtx*) ;
 int FUNC_14 (struct mtx*) ;
 int FUNC_15 (void*,int *,char const*,int ,int ) ;
 int FUNC_16 (void*) ;
 int FUNC_17 (void*) ;
 int FUNC_18 (void*,int ,int ,int) ;
 int FUNC_19 (void*,int ) ;
 int FUNC_20 (void*,int ) ;

int
FUNC_21(void *VAR_8, struct mtx *VAR_9, const char *VAR_10,
    sbintime_t VAR_11, sbintime_t VAR_12, int VAR_13)
{
 struct thread *VAR_14;
 int VAR_15;
 FUNC_9(VAR_9);

 VAR_14 = VAR_7;
 FUNC_2(VAR_9 != ((void*)0), ("sleeping without a mutex"));
 FUNC_2(VAR_8 != ((void*)0), ("msleep_spin_sbt: NULL ident"));
 FUNC_2(FUNC_6(VAR_14), ("msleep_spin_sbt: curthread not running"));

 if (FUNC_5(VAR_14))
  return (0);

 FUNC_16(VAR_8);
 FUNC_0(VAR_1, "msleep_spin: thread %ld (pid %ld, %s) on %s (%p)",
     VAR_14->td_tid, VAR_14->td_proc->p_pid, VAR_14->td_name, VAR_10, VAR_8);

 FUNC_1();
 FUNC_12(VAR_9, VAR_3 | VAR_2);
 FUNC_8(&VAR_9->lock_object, VAR_9);
 FUNC_14(VAR_9);




 FUNC_15(VAR_8, &VAR_9->lock_object, VAR_10, VAR_4, 0);
 if (VAR_11 != 0)
  FUNC_18(VAR_8, VAR_11, VAR_12, VAR_13);
 if (VAR_11 != 0)
  VAR_15 = FUNC_19(VAR_8, 0);
 else {
  FUNC_20(VAR_8, 0);
  VAR_15 = 0;
 }




 FUNC_4();
 FUNC_13(VAR_9);
 FUNC_7(&VAR_9->lock_object, VAR_9);
 return (VAR_15);
}
