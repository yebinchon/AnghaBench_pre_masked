
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int zl_issuer_lock; int zl_spa; int zl_lock; } ;
typedef TYPE_1__ zilog_t ;
struct TYPE_9__ {scalar_t__ zcw_done; int * zcw_lwb; } ;
typedef TYPE_2__ zil_commit_waiter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_8(zilog_t *VAR_0, zil_commit_waiter_t *VAR_1)
{
 FUNC_0(!FUNC_1(&VAR_0->zl_lock));
 FUNC_0(FUNC_4(VAR_0->zl_spa));

 FUNC_2(&VAR_0->zl_issuer_lock);

 if (VAR_1->zcw_lwb != ((void*)0) || VAR_1->zcw_done) {
  goto out;
 }

 FUNC_5(VAR_0);
 FUNC_7(VAR_0);
 FUNC_6(VAR_0);

out:
 FUNC_3(&VAR_0->zl_issuer_lock);
}
