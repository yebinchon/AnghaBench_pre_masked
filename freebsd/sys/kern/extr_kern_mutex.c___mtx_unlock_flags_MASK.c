
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
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int,char const*,int) ;
 int FUNC_5 (struct mtx*,scalar_t__,int,char const*,int) ;
 int FUNC_6 (uintptr_t volatile*,uintptr_t,int,char const*,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct mtx*,int ) ;
 struct mtx* FUNC_8 (uintptr_t volatile*) ;

void
FUNC_9(volatile uintptr_t *VAR_5, int VAR_6, const char *VAR_7, int VAR_8)
{
 struct mtx *VAR_9;

 VAR_9 = FUNC_8(VAR_5);

 FUNC_0(VAR_9->mtx_lock != VAR_2,
     ("mtx_unlock() of destroyed mutex @ %s:%d", VAR_7, VAR_8));
 FUNC_0(FUNC_1(&VAR_9->lock_object) == &VAR_4,
     ("mtx_unlock() of spin mutex %s @ %s:%d", VAR_9->lock_object.lo_name,
     VAR_7, VAR_8));
 FUNC_4(&VAR_9->lock_object, VAR_6 | VAR_0, VAR_7, VAR_8);
 FUNC_2("UNLOCK", &VAR_9->lock_object, VAR_6, VAR_9->mtx_recurse, VAR_7,
     VAR_8);
 FUNC_7(VAR_9, VAR_1);




 FUNC_5(VAR_9, VAR_3, VAR_6, VAR_7, VAR_8);

 FUNC_3(VAR_3);
}
