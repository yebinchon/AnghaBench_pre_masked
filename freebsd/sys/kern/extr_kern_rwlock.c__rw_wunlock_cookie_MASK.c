
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rwlock {scalar_t__ rw_lock; int rw_recurse; int lock_object; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*,int *,int ,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int ,char const*,int) ;
 int FUNC_4 (uintptr_t volatile*,int ,char const*,int) ;
 int FUNC_5 (struct rwlock*,scalar_t__,char const*,int) ;
 int FUNC_6 (struct rwlock*,uintptr_t,char const*,int) ;
 scalar_t__ VAR_3 ;
 struct rwlock* FUNC_7 (uintptr_t volatile*) ;

void
FUNC_8(volatile uintptr_t *VAR_4, const char *VAR_5, int VAR_6)
{
 struct rwlock *VAR_7;

 VAR_7 = FUNC_7(VAR_4);

 FUNC_0(VAR_7->rw_lock != VAR_2,
     ("rw_wunlock() of destroyed rwlock @ %s:%d", VAR_5, VAR_6));
 FUNC_4(VAR_4, VAR_1, VAR_5, VAR_6);
 FUNC_3(&VAR_7->lock_object, VAR_0, VAR_5, VAR_6);
 FUNC_1("WUNLOCK", &VAR_7->lock_object, 0, VAR_7->rw_recurse, VAR_5,
     VAR_6);




 FUNC_5(VAR_7, VAR_3, VAR_5, VAR_6);


 FUNC_2(VAR_3);
}
