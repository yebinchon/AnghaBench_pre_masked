
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lo_name; } ;
struct mtx {scalar_t__ mtx_lock; TYPE_1__ lock_object; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,int,int,char const*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int,char const*,int) ;
 scalar_t__ FUNC_5 (struct mtx*,int ,int,char const*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 struct mtx* FUNC_6 (uintptr_t volatile*) ;

int
FUNC_7(volatile uintptr_t *VAR_5, int VAR_6, const char *VAR_7,
    int VAR_8)
{
 struct mtx *VAR_9;

 if (FUNC_3())
  return (1);

 VAR_9 = FUNC_6(VAR_5);

 FUNC_0(VAR_9->mtx_lock != VAR_1,
     ("mtx_trylock_spin() of destroyed mutex @ %s:%d", VAR_7, VAR_8));
 FUNC_0(FUNC_1(&VAR_9->lock_object) == &VAR_4,
     ("mtx_trylock_spin() of sleep mutex %s @ %s:%d",
     VAR_9->lock_object.lo_name, VAR_7, VAR_8));
 FUNC_0((VAR_6 & VAR_2) == 0,
     ("mtx_trylock_spin: unsupp. opt MTX_RECURSE on mutex %s @ %s:%d\n",
     VAR_9->lock_object.lo_name, VAR_7, VAR_8));
 if (FUNC_5(VAR_9, VAR_3, VAR_6, VAR_7, VAR_8)) {
  FUNC_2("LOCK", &VAR_9->lock_object, VAR_6, 1, VAR_7, VAR_8);
  FUNC_4(&VAR_9->lock_object, VAR_6 | VAR_0, VAR_7, VAR_8);
  return (1);
 }
 FUNC_2("LOCK", &VAR_9->lock_object, VAR_6, 0, VAR_7, VAR_8);
 return (0);
}
