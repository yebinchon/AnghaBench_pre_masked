
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_5__ {int state; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,TYPE_1__*,int ) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_HANDLE_T VAR_2)
{
 VCHIQ_STATUS_T VAR_3 = VAR_1;
 VCHIQ_SERVICE_T *VAR_4 = FUNC_0(VAR_2);
 if (VAR_4) {
  VAR_3 = FUNC_2(VAR_4->state, VAR_4,
    VAR_0);
  FUNC_1(VAR_4);
 }
 return VAR_3;
}
