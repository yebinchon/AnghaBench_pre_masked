
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ucontext_t ;
struct umtx {int dummy; } ;
struct pthread {int dummy; } ;
struct RtldLockInfo {int * at_fork; int thread_clr_flag; int thread_set_flag; int lock_release; int wlock_acquire; int rlock_acquire; int lock_destroy; int lock_create; } ;
typedef int dummy ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 struct pthread* FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 () ;
 int FUNC_9 (struct RtldLockInfo*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct pthread*) ;
 int FUNC_11 (struct pthread*) ;
 int FUNC_12 (struct umtx*,int ,int,int ,int ) ;
 int * FUNC_13 (int) ;
 int FUNC_14 (int *) ;
 int FUNC_15 () ;
 int FUNC_16 (long*,long*,int) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int ) ;

void
FUNC_19(void)
{
 struct RtldLockInfo VAR_9;
 struct pthread *VAR_10;
 ucontext_t *VAR_11;
 long VAR_12 = -1;
 int VAR_13;

 VAR_10 = FUNC_3();


 FUNC_12((struct umtx *)&VAR_12, VAR_1, 1, 0, 0);


 FUNC_0();


 FUNC_16(&VAR_12, &VAR_12, sizeof(VAR_12));

 FUNC_17(((void*)0), 0, 0);
 FUNC_8();

 VAR_9.lock_create = VAR_3;
 VAR_9.lock_destroy = VAR_4;
 VAR_9.rlock_acquire = VAR_6;
 VAR_9.wlock_acquire = VAR_8;
 VAR_9.lock_release = VAR_5;
 VAR_9.thread_set_flag = VAR_7;
 VAR_9.thread_clr_flag = VAR_2;
 VAR_9.at_fork = ((void*)0);
 FUNC_7(((void*)0));
 FUNC_6(((void*)0));
 FUNC_5();
 FUNC_4();
 FUNC_15();
 FUNC_18(VAR_0);


 FUNC_10(VAR_10);
 FUNC_9(&VAR_9);
 FUNC_11(VAR_10);

 VAR_13 = FUNC_2();
 VAR_11 = FUNC_13(VAR_13);
 FUNC_14(VAR_11);
 FUNC_1((char *)VAR_11);
}
