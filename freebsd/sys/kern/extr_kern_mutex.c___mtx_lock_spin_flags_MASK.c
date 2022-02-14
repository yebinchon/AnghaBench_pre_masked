
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lo_flags; int lo_name; } ;
struct mtx {scalar_t__ mtx_lock; TYPE_1__ lock_object; int mtx_recurse; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct mtx*,int ,int ,char const*,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*,int,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 uintptr_t VAR_5 ;
 int FUNC_4 (TYPE_1__*,int,char const*,int,int *) ;
 int FUNC_5 (TYPE_1__*,int,char const*,int) ;
 int FUNC_6 (struct mtx*,scalar_t__,int,char const*,int) ;
 int FUNC_7 (struct mtx*,uintptr_t,int,char const*,int) ;
 int FUNC_8 (struct mtx*,uintptr_t*,uintptr_t) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_9 (struct mtx*) ;
 struct mtx* FUNC_10 (uintptr_t volatile*) ;
 int VAR_8 ;
 int FUNC_11 () ;

void
FUNC_12(volatile uintptr_t *VAR_9, int VAR_10, const char *VAR_11,
    int VAR_12)
{
 struct mtx *VAR_13;




 VAR_13 = FUNC_10(VAR_9);

 FUNC_0(VAR_13->mtx_lock != VAR_3,
     ("mtx_lock_spin() of destroyed mutex @ %s:%d", VAR_11, VAR_12));
 FUNC_0(FUNC_2(&VAR_13->lock_object) == &VAR_7,
     ("mtx_lock_spin() of sleep mutex %s @ %s:%d",
     VAR_13->lock_object.lo_name, VAR_11, VAR_12));
 if (FUNC_9(VAR_13))
  FUNC_0((VAR_13->lock_object.lo_flags & VAR_2) != 0 ||
      (VAR_10 & VAR_4) != 0,
     ("mtx_lock_spin: recursed on non-recursive mutex %s @ %s:%d\n",
      VAR_13->lock_object.lo_name, VAR_11, VAR_12));
 VAR_10 &= ~VAR_4;
 FUNC_4(&VAR_13->lock_object, VAR_10 | VAR_1 | VAR_0,
     VAR_11, VAR_12, ((void*)0));
 FUNC_6(VAR_13, VAR_6, VAR_10, VAR_11, VAR_12);

 FUNC_3("LOCK", &VAR_13->lock_object, VAR_10, VAR_13->mtx_recurse, VAR_11,
     VAR_12);
 FUNC_5(&VAR_13->lock_object, VAR_10 | VAR_0, VAR_11, VAR_12);
}
