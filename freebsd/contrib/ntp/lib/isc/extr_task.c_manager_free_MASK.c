
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int isc_mem_t ;
struct TYPE_5__ {scalar_t__ magic; scalar_t__ impmagic; } ;
struct TYPE_6__ {int lock; int * mctx; TYPE_1__ common; int threads; int paused; int work_available; int exclusive_granted; } ;
typedef TYPE_2__ isc__taskmgr_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,TYPE_2__*,int) ;
 int * VAR_0 ;

__attribute__((used)) static void
FUNC_7(isc__taskmgr_t *VAR_1) {
 isc_mem_t *VAR_2;

 FUNC_1(&VAR_1->lock);






 VAR_1->common.impmagic = 0;
 VAR_1->common.magic = 0;
 VAR_2 = VAR_1->mctx;
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_1->lock);
 FUNC_6(VAR_2, VAR_1, sizeof(*VAR_1));
 FUNC_4(&VAR_2);




}
