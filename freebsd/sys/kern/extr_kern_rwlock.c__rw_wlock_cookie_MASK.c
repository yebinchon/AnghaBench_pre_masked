
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lo_name; } ;
struct rwlock {scalar_t__ rw_lock; TYPE_1__ lock_object; int rw_recurse; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct rwlock*,int ,int ,char const*,int,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,TYPE_1__*,int ,int ,char const*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 uintptr_t VAR_4 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,int,char const*,int,int *) ;
 int FUNC_7 (TYPE_1__*,int,char const*,int) ;
 int FUNC_8 (struct rwlock*,uintptr_t,char const*,int) ;
 int FUNC_9 (struct rwlock*,uintptr_t*,uintptr_t) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct rwlock* FUNC_10 (uintptr_t volatile*) ;

void
FUNC_11(volatile uintptr_t *VAR_8, const char *VAR_9, int VAR_10)
{
 struct rwlock *VAR_11;
 uintptr_t VAR_12, VAR_13;

 VAR_11 = FUNC_10(VAR_8);

 FUNC_0(VAR_6 != 0 || FUNC_3() ||
     !FUNC_4(VAR_5),
     ("rw_wlock() by idle thread %p on rwlock %s @ %s:%d",
     VAR_5, VAR_11->lock_object.lo_name, VAR_9, VAR_10));
 FUNC_0(VAR_11->rw_lock != VAR_3,
     ("rw_wlock() of destroyed rwlock @ %s:%d", VAR_9, VAR_10));
 FUNC_6(&VAR_11->lock_object, VAR_2 | VAR_1, VAR_9,
     VAR_10, ((void*)0));
 VAR_12 = (uintptr_t)VAR_5;
 VAR_13 = VAR_4;
 if (!FUNC_9(VAR_11, &VAR_13, VAR_12))
  FUNC_8(VAR_11, VAR_13, VAR_9, VAR_10);
 else
  FUNC_1(VAR_7, VAR_11,
      0, 0, VAR_9, VAR_10, VAR_0);

 FUNC_2("WLOCK", &VAR_11->lock_object, 0, VAR_11->rw_recurse, VAR_9, VAR_10);
 FUNC_7(&VAR_11->lock_object, VAR_1, VAR_9, VAR_10);
 FUNC_5(VAR_5);
}
