
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t compressedSize; int parameters; scalar_t__ dictSize; int * dict; scalar_t__ liveJobs; int cond; int mutex; } ;
typedef TYPE_1__ COVER_best_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(COVER_best_t *VAR_0) {
  if (VAR_0==((void*)0)) return;
  (void)FUNC_1(&VAR_0->mutex, ((void*)0));
  (void)FUNC_0(&VAR_0->cond, ((void*)0));
  VAR_0->liveJobs = 0;
  VAR_0->dict = ((void*)0);
  VAR_0->dictSize = 0;
  VAR_0->compressedSize = (size_t)-1;
  FUNC_2(&VAR_0->parameters, 0, sizeof(VAR_0->parameters));
}
