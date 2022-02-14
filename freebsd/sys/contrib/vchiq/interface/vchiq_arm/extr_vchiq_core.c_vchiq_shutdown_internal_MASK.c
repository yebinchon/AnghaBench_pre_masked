
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_STATE_T ;
struct TYPE_4__ {int handle; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_INSTANCE_T ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int ,int*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_STATE_T *VAR_1, VCHIQ_INSTANCE_T VAR_2)
{
 VCHIQ_SERVICE_T *VAR_3;
 int VAR_4;


 VAR_4 = 0;
 while ((VAR_3 = FUNC_0(VAR_1, VAR_2,
  &VAR_4)) != ((void*)0)) {
  (void)FUNC_2(VAR_3->handle);
  FUNC_1(VAR_3);
 }

 return VAR_0;
}
