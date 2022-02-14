
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bulk_transfer_mutex; } ;
typedef TYPE_1__ VCHIQ_STATE_T ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(VCHIQ_STATE_T *VAR_1)
{
 if (FUNC_4(FUNC_1(&VAR_0) != 1)) {
  FUNC_0(1);
  FUNC_2(&VAR_0, 1);
  return;
 }


 FUNC_3(&VAR_1->bulk_transfer_mutex);
}
