
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {TYPE_2__* local; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;
struct TYPE_5__ {int recycle; } ;
typedef TYPE_2__ VCHIQ_SHARED_STATE_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

int
FUNC_2(void *VAR_0)
{
 VCHIQ_STATE_T *VAR_1 = (VCHIQ_STATE_T *) VAR_0;
 VCHIQ_SHARED_STATE_T *VAR_2 = VAR_1->local;

 while (1) {
  FUNC_1(&VAR_2->recycle);

  FUNC_0(VAR_1);
 }
 return 0;
}
