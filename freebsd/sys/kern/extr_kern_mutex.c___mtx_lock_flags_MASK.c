
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lo_name; } ;
struct mtx {scalar_t__ mtx_lock; TYPE_1__ lock_object; int mtx_recurse; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,struct mtx*,int ,int ,char const*,int) ;
 int * FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,TYPE_1__*,int,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 uintptr_t VAR_4 ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (TYPE_1__*,int,char const*,int,int *) ;
 int FUNC_8 (TYPE_1__*,int,char const*,int) ;
 int FUNC_9 (struct mtx*,uintptr_t,int,char const*,int) ;
 int FUNC_10 (struct mtx*,uintptr_t*,uintptr_t) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 struct mtx* FUNC_11 (uintptr_t volatile*) ;

void
FUNC_12(volatile uintptr_t *VAR_9, int VAR_10, const char *VAR_11, int VAR_12)
{
 struct mtx *VAR_13;
 uintptr_t VAR_14, VAR_15;

 VAR_13 = FUNC_11(VAR_9);

 FUNC_0(VAR_7 != 0 || FUNC_4() ||
     !FUNC_5(VAR_6),
     ("mtx_lock() by idle thread %p on sleep mutex %s @ %s:%d",
     VAR_6, VAR_13->lock_object.lo_name, VAR_11, VAR_12));
 FUNC_0(VAR_13->mtx_lock != VAR_2,
     ("mtx_lock() of destroyed mutex @ %s:%d", VAR_11, VAR_12));
 FUNC_0(FUNC_2(&VAR_13->lock_object) == &VAR_8,
     ("mtx_lock() of spin mutex %s @ %s:%d", VAR_13->lock_object.lo_name,
     VAR_11, VAR_12));
 FUNC_7(&VAR_13->lock_object, (VAR_10 & ~VAR_3) |
     VAR_1 | VAR_0, VAR_11, VAR_12, ((void*)0));

 VAR_14 = (uintptr_t)VAR_6;
 VAR_15 = VAR_4;
 if (!FUNC_10(VAR_13, &VAR_15, VAR_14))
  FUNC_9(VAR_13, VAR_15, VAR_10, VAR_11, VAR_12);
 else
  FUNC_1(VAR_5,
      VAR_13, 0, 0, VAR_11, VAR_12);
 FUNC_3("LOCK", &VAR_13->lock_object, VAR_10, VAR_13->mtx_recurse, VAR_11,
     VAR_12);
 FUNC_8(&VAR_13->lock_object, (VAR_10 & ~VAR_3) | VAR_0,
     VAR_11, VAR_12);
 FUNC_6(VAR_6);
}
