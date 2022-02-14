
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int lo_name; } ;
struct mtx {scalar_t__ mtx_lock; int mtx_recurse; TYPE_1__ lock_object; } ;


 int FUNC_0 (int,char*) ;
 int * FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,TYPE_1__*,int,int ,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (TYPE_1__*,int,char const*,int) ;
 int FUNC_4 (struct mtx*) ;
 int VAR_3 ;
 int FUNC_5 (struct mtx*,int ) ;
 struct mtx* FUNC_6 (uintptr_t volatile*) ;

void
FUNC_7(volatile uintptr_t *VAR_4, int VAR_5, const char *VAR_6,
    int VAR_7)
{
 struct mtx *VAR_8;

 VAR_8 = FUNC_6(VAR_4);

 FUNC_0(VAR_8->mtx_lock != VAR_2,
     ("mtx_unlock_spin() of destroyed mutex @ %s:%d", VAR_6, VAR_7));
 FUNC_0(FUNC_1(&VAR_8->lock_object) == &VAR_3,
     ("mtx_unlock_spin() of sleep mutex %s @ %s:%d",
     VAR_8->lock_object.lo_name, VAR_6, VAR_7));
 FUNC_3(&VAR_8->lock_object, VAR_5 | VAR_0, VAR_6, VAR_7);
 FUNC_2("UNLOCK", &VAR_8->lock_object, VAR_5, VAR_8->mtx_recurse, VAR_6,
     VAR_7);
 FUNC_5(VAR_8, VAR_1);

 FUNC_4(VAR_8);
}
